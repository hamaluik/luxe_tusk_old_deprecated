package tusk.defaults.scenes;

import tusk.debug.Log;

import promhx.Promise;
import promhx.Stream;

import tusk.lib.comp.Camera2DComponent;
import tusk.lib.comp.FadeEffectComponent;
import tusk.lib.comp.MaterialComponent;
import tusk.lib.comp.MeshComponent;
import tusk.lib.comp.SoundComponent;
import tusk.lib.comp.TimedPromiseComponent;
import tusk.lib.comp.TransformComponent;
import tusk.lib.proc.Camera2DProcessor;
import tusk.lib.proc.FadeEffectRendererProcessor;
import tusk.lib.proc.MaterialProcessor;
import tusk.lib.proc.MeshProcessor;
import tusk.lib.proc.Renderer2DProcessor;
import tusk.lib.proc.TimedPromiseProcessor;
import tusk.lib.proc.TransformProcessor;

import tusk.resources.Mesh;
import tusk.resources.Material;
import tusk.resources.Texture;

import glm.Vec2;
import glm.Vec3;
import glm.Vec4;
import glm.Quat;

class TechScreen extends Scene {
	public function new() { super("Technology"); }

	override public function onLoad(_) {
		Log.info("Loading tech screen...");

		// load the resources
		Promise.when(
			tusk.defaults.Primitives.loadQuad(),
			tusk.defaults.Materials.loadUnlitTextured(),
			Tusk.assets.loadTexture('technologies.png', haxe.Resource.getBytes('technologies.png')),
			tusk.defaults.Materials.loadEffectFadeout()
		).then(function(quad:Mesh, mat:Material, screen:Texture, fadeOutMat:Material) {
			// set the material's texture
			mat.textures = new Array<Texture>();
			mat.textures.push(screen);

			// load processors
			this.useProcessor(new TimedPromiseProcessor());
			this.useProcessor(new MeshProcessor());
			this.useProcessor(new MaterialProcessor());
			this.useProcessor(new Camera2DProcessor());
			this.useProcessor(new TransformProcessor());
			this.useProcessor(new Renderer2DProcessor(new Vec4(1.0, 0.0, 0.0, 1.0)));
			this.useProcessor(new FadeEffectRendererProcessor());

			// create the camera
			var w:Float = Tusk.instance.app.window.width;
			var h:Float = Tusk.instance.app.window.height;
			entities.push(new Entity(this, 'Camera', [
				new TransformComponent(),
				new Camera2DComponent(new Vec2(w, h) / -2.0, new Vec2(w, h) / 2.0, -100, 100)
			]));

			// create the screen
			var imageEntity:Entity = new Entity(this, 'Image', [
				new TransformComponent(new Vec3(), Quat.identity(), new Vec3(1024, 1024, 1024)),
				new MeshComponent(quad.path),
				new MaterialComponent(mat.path),
			]);
			entities.push(imageEntity);

			var fec:FadeEffectComponent = new FadeEffectComponent(true);
			entities.push(new Entity(this, 'Fader', [
				new TransformComponent(new Vec3(0, 0, 0.1), Quat.identity(), new Vec3(1024, 1024, 1024)),
				new MeshComponent(quad.path),
				new MaterialComponent(fadeOutMat.path),
				fec
			]));
			fec.done.pipe(function(_) {
				if(!sceneDone.isResolved()) {
					var timer:TimedPromiseComponent = new TimedPromiseComponent(3.0);
					entities.push(new Entity(this, 'Timer', [timer]));
					return timer.done;
				}
				return null;
			}).pipe(function(_) {
				if(!sceneDone.isResolved()) {
					fec.t = 0;
					fec.fadeIn = false;
					fec.reset();
					return fec.done;
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