package tusk.defaults.scenes;

import tusk.debug.Log;

import promhx.Promise;
import promhx.Stream;

import tusk.lib.comp.Camera2DComponent;
import tusk.lib.comp.CircleEffectComponent;
import tusk.lib.comp.MaterialComponent;
import tusk.lib.comp.MeshComponent;
import tusk.lib.comp.SoundComponent;
import tusk.lib.comp.SplashScreen_ShakeComponent;
import tusk.lib.comp.TextComponent;
import tusk.lib.comp.TimedPromiseComponent;
import tusk.lib.comp.TransformComponent;
import tusk.lib.comp.ParticleSystemComponent;
import tusk.lib.proc.Camera2DProcessor;
import tusk.lib.proc.CircleEffectRendererProcessor;
import tusk.lib.proc.MaterialProcessor;
import tusk.lib.proc.MeshProcessor;
import tusk.lib.proc.Renderer2DProcessor;
import tusk.lib.proc.SplashScreen_RoarShakeProcessor;
import tusk.lib.proc.TextProcessor;
import tusk.lib.proc.TimedPromiseProcessor;
import tusk.lib.proc.TransformProcessor;
import tusk.lib.proc.ParticleSystemProcessor;

import tusk.resources.Mesh;
import tusk.resources.Material;
import tusk.resources.Font;
import tusk.resources.Texture;
import tusk.resources.Sound;

import glm.Vec2;
import glm.Vec3;
import glm.Vec4;
import glm.Quat;

class SplashScreen extends Scene {
	public function new() { super("Tusk Splash Screen"); }

	override public function onLoad(_) {
		Log.info("Loading splash screen..");

		// load the resources
		Promise.when(
			tusk.defaults.Primitives.loadQuad(),
			tusk.defaults.Primitives.loadTextMesh(),
			tusk.defaults.Materials.loadUnlitTextured(),
			tusk.defaults.Fonts.loadSubatomic_Screen(),
			tusk.defaults.Materials.loadTextBasic(),
			Tusk.assets.loadTexture('blazingmammothgames.png', haxe.Resource.getBytes('blazingmammothgames.png')),
			Tusk.assets.loadSound('assets/sounds/blazingmammothgames.ogg'),
			tusk.defaults.Materials.loadEffectCircleOut(),
			tusk.defaults.Materials.loadParticlesUntextured()
		).then(function(quad:Mesh, textMesh:Mesh, mat:Material, font:Font, fontMat:Material, logo:Texture, roar:Sound, circleOutMat:Material, particlesMat:Material) {
			// set the material's texture
			mat.textures = new Array<Texture>();
			mat.textures.push(logo);
			fontMat.textures = new Array<Texture>();
			fontMat.textures.push(font.texture);

			// load processors
			this.useProcessor(new TimedPromiseProcessor());
			this.useProcessor(new SplashScreen_RoarShakeProcessor());
			this.useProcessor(new tusk.lib.proc.SoundProcessor());
			this.useProcessor(new MaterialProcessor());
			this.useProcessor(new Camera2DProcessor());
			this.useProcessor(new TransformProcessor());
			this.useProcessor(new TextProcessor());
			this.useProcessor(new MeshProcessor());
			this.useProcessor(new Renderer2DProcessor(new Vec4(0.25, 0.25, 0.25, 1.0)));
			this.useProcessor(new ParticleSystemProcessor(new Vec4(0, 0, 0, 1), false));
			this.useProcessor(new CircleEffectRendererProcessor());

			// create the camera
			var w:Float = Tusk.instance.app.window.width;
			var h:Float = Tusk.instance.app.window.height;
			entities.push(new Entity(this, 'Camera', [
				new TransformComponent(),
				new Camera2DComponent(new Vec2(w, h) / -2.0, new Vec2(w, h) / 2.0, -100, 100)
			]));

			// create the logo
			var logoEnt:Entity = new Entity(this, 'Logo', [
				new TransformComponent(new Vec3(), Quat.identity(), new Vec3(256, 256, 256)),
				new MeshComponent(quad.path),
				new MaterialComponent(mat.path)
			]);
			entities.push(logoEnt);

			// create the text
			entities.push(new Entity(this, 'Logo Text', [
				new TransformComponent(new Vec3(0, -96, 0.05), Quat.identity(), new Vec3(3, 3, 3)),
				new MeshComponent(textMesh.path),
				new MaterialComponent(fontMat.path),
				new TextComponent(font, 'Blazing Mammoth Games', TextAlign.Centre,
					new Vec4(1, 1, 1, 1))
			]));

			// create the snow!
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

			// create the circle effect
			var cec:CircleEffectComponent = new CircleEffectComponent(true);
			entities.push(new Entity(this, 'Circle Effect', [
				new TransformComponent(new Vec3(0, 0, 0.1), Quat.identity(), new Vec3(1024, 1024, 1024)),
				new MeshComponent(quad.path),
				new MaterialComponent(circleOutMat.path),
				cec
			]));
			cec.done.pipe(function(_) {
				if(!sceneDone.isResolved()) {
					logoEnt.push(new SplashScreen_ShakeComponent());
					logoEnt.push(new SoundComponent(roar.path, true));
					var timer:TimedPromiseComponent = new TimedPromiseComponent(4.297);
					entities.push(new Entity(this, 'Timer', [timer]));
					return timer.done;
				}
				return null;
			}).pipe(function(_) {
				if(!sceneDone.isResolved()) {
					cec.t = 0;
					cec.circleIn = false;
					cec.reset();
					return cec.done;
				}
				return null;
			}).then(function(_) {
				if(!sceneDone.isResolved()) {
					sceneDone.resolve(this);
				}
				return null;
			});

			// tell the processors we've started
			Tusk.router.onEvent(tusk.events.EventType.Start);
		});
	}

	override public function onKeyDown(event:tusk.events.KeyEvent) {
		#if snow
		if(event.keyCode == tusk.events.KeyEvent.Key.escape) {
			sceneDone.resolve(this);
		}
		#end
	}
}