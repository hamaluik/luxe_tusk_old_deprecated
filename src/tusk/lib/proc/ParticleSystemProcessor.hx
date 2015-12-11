package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Component;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.MaterialComponent;
import tusk.lib.comp.ParticleSystemComponent;
import tusk.lib.comp.ParticleSystemComponent.Particle;
import tusk.lib.comp.TransformComponent;

import tusk.resources.Material;

import haxe.ds.IntMap;

import glm.Projection;
import glm.Vec4;
import glm.Mat3;
import glm.Mat4;
import glm.GLM;

import tusk.math.Random;
import tusk.math.Lerp;

#if snow
import snow.modules.opengl.GL;
#end

class ParticleSystemProcessor extends Processor {
	private var clearColour:Vec4 = new Vec4(0.25, 0.25, 0.25, 1.0);
	public var doClear:Bool = true;

	public function new(?clearColour:Vec4, ?doClear:Bool, ?entities:Array<Entity>) {
		if(clearColour != null) this.clearColour = clearColour;
		if(doClear != null) this.doClear = doClear;
		matcher = new Matcher().include(MaterialComponent.tid).include(ParticleSystemComponent.tid).include(TransformComponent.tid);
		super(entities);
	}

	private function simulate(pc:ParticleSystemComponent, dt:Float) {
		// figure out emission
		var particlesToEmit:Int = Std.int(pc.emissionRate * dt);
		if(pc.emissionAccumulator >= 1.0) {
			particlesToEmit += 1;
			pc.emissionAccumulator -= 1.0;
		}
		pc.emissionAccumulator += (pc.emissionRate * dt) - particlesToEmit;

		for(particle in pc.particles) {
			if(particle.alive) {
				// update the time
				particle.t += dt;
				if(particle.t >= particle.lifeTime) {
					particle.alive = false;
					continue;
				}

				// use a custom update if one is specified
				if(pc.customUpdater != null) {
					pc.customUpdater(particle, pc, dt);
				}
				else {
					// accelerate it due to gravity
					particle.vel.x += pc.gravity.x * dt;
					particle.vel.y += pc.gravity.y * dt;
					particle.vel.z += pc.gravity.z * dt;

					// move the particle along
					particle.lastPos.set(particle.pos.x, particle.pos.y, particle.pos.z);
					particle.pos.x += particle.vel.x * dt;
					particle.pos.y += particle.vel.y * dt;
					particle.pos.z += particle.vel.z * dt;

					// change its colour
					particle.lastColour = particle.colour.clone();
					particle.colour = pc.startColour.clone().lerp(pc.endColour, particle.t / particle.lifeTime);

					// change its size
					particle.lastSize = particle.size;
					particle.size = Lerp.LerpF(pc.startSize, pc.endSize, particle.t / particle.lifeTime);
				}
			}
			// see if we need to bring a particle alive!
			else if(particlesToEmit > 0) {
				// yup, we need a new particle!
				// bring it to life!
				particle.alive = true;

				// randomly set its position
				particle.pos.x = Random.float(-pc.startPositionRange.x, pc.startPositionRange.x);
				particle.pos.y = Random.float(-pc.startPositionRange.y, pc.startPositionRange.y);
				particle.pos.z = Random.float(-pc.startPositionRange.z, pc.startPositionRange.z);
				particle.lastPos = particle.pos.clone();

				// randomly set its velocity
				particle.vel.x = Random.float(pc.startVelocityMin.x, pc.startVelocityMax.x);
				particle.vel.y = Random.float(pc.startVelocityMin.y, pc.startVelocityMax.y);
				particle.vel.z = Random.float(pc.startVelocityMin.z, pc.startVelocityMax.z);

				// set up its colour
				particle.colour = pc.startColour.clone();
				particle.lastColour = particle.colour.clone();

				// set up its size
				particle.size = pc.startSize;
				particle.lastSize = particle.size;

				// set up it's lifespan
				particle.t = 0;
				particle.lifeTime = Random.float(pc.lifeTime.x, pc.lifeTime.y);

				// give it a random seed
				particle.seed = Random.float(0, 1);

				// we emitted a particle, so don't emit any more this frame!
				particlesToEmit -= 1;
			}
		}
	}

	override public function onUpdate(event:UpdateEvent) {
		#if snow
		for(entity in entities) {
			// get our components
			var pc:ParticleSystemComponent = cast entity.get(ParticleSystemComponent.tid);
			var mat:MaterialComponent = cast entity.get(MaterialComponent.tid);

			// build the mesh buffer if that is necessary
			if(pc.vertexBuffer == null) {
				pc.vertexBuffer = GL.createBuffer();
			}

			// build the particles if they're empty
			if(pc.particles == null) {
				// one particle object per particle
				pc.particles = new Array<Particle>();
				for(i in 0...pc.particleCount) {
					pc.particles.push(new Particle());
				}

				// pre-simulate!
				var t:Float = 0;
				var dt:Float = event.dt;
				while(t < pc.preSimulateTime) {
					simulate(pc, dt);
					t += dt;
				}

				// equals 8 float values sent to the shader per particle
				pc.bufferData = new snow.api.buffers.Float32Array([for(i in 0...(pc.particleCount * 8)) 0.0]);
			}

			// update the particles
			simulate(pc, event.dt);
		}
		#end
	}

	override public function onRender(event:RenderEvent) {
		#if snow
		GL.disable(GL.DEPTH_TEST);
		GL.enable(GL.BLEND);
		GL.depthFunc(GL.LESS);
		GL.viewport(0, 0, Tusk.instance.app.window.width, Tusk.instance.app.window.height);
		GL.clearColor(clearColour.r, clearColour.g, clearColour.b, clearColour.a);
		if(doClear) {
			GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);
		}

		for(camera in Camera2DProcessor.cameras) {
			for(entity in entities) {
				// get our components
				var transform:TransformComponent = cast entity.get(TransformComponent.tid);
				var pc:ParticleSystemComponent = cast entity.get(ParticleSystemComponent.tid);
				var material:MaterialComponent = cast entity.get(MaterialComponent.tid);

				// make sure we have a mesh to work with
				if(pc.bufferData == null || pc.vertexBuffer == null) {
					continue;
				}

				// update the buffer data
				for(i in 0...pc.particleCount)  {
					var pi:Int = i * 8;
					if(pc.particles[i].alive) {
						// position!
						pc.bufferData[pi + 0] = Lerp.LerpF(pc.particles[i].lastPos.x, pc.particles[i].pos.x, event.alpha);
						pc.bufferData[pi + 1] = Lerp.LerpF(pc.particles[i].lastPos.y, pc.particles[i].pos.y, event.alpha);
						pc.bufferData[pi + 2] = Lerp.LerpF(pc.particles[i].lastPos.z, pc.particles[i].pos.z, event.alpha);

						// colour!
						pc.bufferData[pi + 3] = Lerp.LerpF(pc.particles[i].lastColour.r, pc.particles[i].colour.r, event.alpha);
						pc.bufferData[pi + 4] = Lerp.LerpF(pc.particles[i].lastColour.g, pc.particles[i].colour.g, event.alpha);
						pc.bufferData[pi + 5] = Lerp.LerpF(pc.particles[i].lastColour.b, pc.particles[i].colour.b, event.alpha);
						pc.bufferData[pi + 6] = Lerp.LerpF(pc.particles[i].lastColour.a, pc.particles[i].colour.a, event.alpha);

						// size!
						pc.bufferData[pi + 7] = Lerp.LerpF(pc.particles[i].lastSize, pc.particles[i].size, event.alpha);
					}
					else {
						// it's dead jim!
						pc.bufferData[pi + 0] = 0;
						pc.bufferData[pi + 1] = 0;
						pc.bufferData[pi + 2] = 0;
						pc.bufferData[pi + 3] = 0;
						pc.bufferData[pi + 4] = 0;
						pc.bufferData[pi + 5] = 0;
						pc.bufferData[pi + 6] = 0;
						pc.bufferData[pi + 7] = 0;
					}
				}

				// now update the vertex buffer
				GL.bindBuffer(GL.ARRAY_BUFFER, pc.vertexBuffer);
				GL.bufferData(GL.ARRAY_BUFFER, pc.bufferData, GL.DYNAMIC_DRAW);
				GL.bindBuffer(GL.ARRAY_BUFFER, null);

				// render!
				material.material.onRender(function(mat:Material) {
					mat.setMat4("projection", camera.projectionMatrix);
					mat.setMat4("view", camera.viewMatrix);
					mat.setMat4("model", transform.modelMatrix);
				}, pc.vertexBuffer, pc.particles.length);
			}
		}
		#end
	}
}