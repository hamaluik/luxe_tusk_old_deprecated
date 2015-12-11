import comp.KeyNavigatorComponent;
import comp.MovementAxisComponent;
import comp.MoveSpeedComponent;
import glm.Vec4;
import proc.KeyAxisProcessor;
import proc.MovementProcessor;
import tusk.debug.Log;
import tusk.lib.comp.Camera2DComponent;
import tusk.lib.comp.MaterialComponent;
import tusk.lib.comp.TransformComponent;
import tusk.lib.comp.ParticleSystemComponent;
import tusk.lib.proc.Camera2DProcessor;
import tusk.lib.proc.MaterialProcessor;
import tusk.lib.proc.ParticleSystemProcessor;
import tusk.lib.proc.Renderer2DProcessor;
import tusk.lib.proc.TransformProcessor;
import tusk.Tusk;
import tusk.Scene;
import tusk.Entity;

import tusk.resources.*;

import promhx.Promise;

import glm.Vec2;
import glm.Vec3;
import glm.Quat;

import tusk.events.*;

class Snow extends Scene {
	public function new() {
		super('Snow');
	}

	override public function onLoad(_) {
		Log.info("Loading snow ..");

		Promise.when(
			tusk.defaults.Materials.loadParticlesUntextured()
		).then(function(particlesMat:Material) {
			this.useProcessor(new MaterialProcessor());
			this.useProcessor(new Camera2DProcessor());
			this.useProcessor(new TransformProcessor());
			this.useProcessor(new ParticleSystemProcessor(new Vec4(0.25, 0.25, 0.25, 1), true));

			// create the camera
			var w:Float = Tusk.instance.app.window.width;
			var h:Float = Tusk.instance.app.window.height;
			entities.push(new Entity(this, 'Camera', [
				new TransformComponent(),
				new Camera2DComponent(new Vec2(w, h) / -2.0, new Vec2(w, h) / 2.0, -100, 100)
			]));

			// create the particle system
			var psc:ParticleSystemComponent = new ParticleSystemComponent(1000, 10);
			psc.customUpdater = function(particle:Particle, pc:ParticleSystemComponent, dt:Float) {
				// accelerate it due to gravity
				particle.vel.x = Math.sin(2 * Math.PI * particle.t * 0.2 + (4 * Math.PI * particle.seed)) * 32;
				particle.vel.y = -40;
				particle.vel.z = 0;

				// move the particle along
				particle.lastPos.set(particle.pos.x, particle.pos.y, particle.pos.z);
				particle.pos.x += particle.vel.x * dt;
				particle.pos.y += particle.vel.y * dt;
				particle.pos.z += particle.vel.z * dt;
			}
			entities.push(new Entity(this, 'Particle System', [
				new TransformComponent(new Vec3(0, Tusk.instance.app.window.height / 2, 0), Quat.identity(), new Vec3(2, 2, 2)),
				psc,
				new MaterialComponent(particlesMat.path)
			]));
		});
	}
}