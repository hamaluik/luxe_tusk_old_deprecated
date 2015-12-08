import glm.Vec4;
import tusk.debug.Log;
import tusk.lib.comp.Camera2DComponent;
import tusk.lib.comp.MaterialComponent;
import tusk.lib.comp.MeshComponent;
import tusk.lib.comp.TransformComponent;
import tusk.lib.proc.Camera2DProcessor;
import tusk.lib.proc.MaterialProcessor;
import tusk.lib.proc.MeshProcessor;
import tusk.lib.proc.Renderer2DProcessor;
import tusk.lib.proc.TransformProcessor;
import tusk.Tusk;
import tusk.Scene;
import tusk.Entity;

import tusk.modules.tiled.TileMap;

import tusk.resources.Text;
import tusk.resources.Mesh;
import tusk.resources.Material;
import tusk.resources.Texture;

import promhx.Promise;

import glm.Vec2;
import glm.Vec3;
import glm.Quat;

import tusk.events.*;

class Menu extends Scene {
	public function new() {
		super('Menu');
	}

	override public function onLoad(_) {
		Log.info("Loading menu screen..");

		Promise.when(
			tusk.defaults.Materials.loadUnlitColoured(),
			tusk.defaults.Primitives.loadQuad()
		).then(function(debugMat:Material, quad:Mesh) {
			this.useProcessor(new MeshProcessor());
			this.useProcessor(new MaterialProcessor());
			this.useProcessor(new Camera2DProcessor());
			this.useProcessor(new TransformProcessor());
			this.useProcessor(new Renderer2DProcessor(new Vec4(0, 0, 0, 1)));

			// create the camera
			var w:Float = Tusk.instance.app.window.width;
			var h:Float = Tusk.instance.app.window.height;
			entities.push(new Entity(this, 'Camera', [
				new TransformComponent(),
				new Camera2DComponent(new Vec2(w, h) / -2.0, new Vec2(w, h) / 2.0, -100, 100)
			]));

			quad.colours = new Array<Vec4>();
			for(v in quad.vertices) {
				quad.colours.push(new Vec4(0.75, 0.25, 0.25, 0.5));
			}
			entities.push(new Entity(this, 'derp', [
				new TransformComponent(new Vec3(), Quat.identity(), new Vec3(128, 128, 128)),
				new MeshComponent(quad),
				new MaterialComponent(debugMat.path),
			]));
		});
	}

	override public function onMouseDown(event:MouseButtonEvent) {
		Log.info('Button clicked: ${event.button}');
	}

	override public function onKeyDown(event:KeyEvent) {
		Log.info('Key pressed: ${event.keyCode}');
	}
}