import glm.Vec4;
import tusk.debug.Log;
import tusk.lib.comp.Camera2DComponent;
import tusk.lib.comp.MaterialComponent;
import tusk.lib.comp.MeshComponent;
import tusk.lib.comp.NapStaticRectComponent;
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

class Room extends Scene {
	public function new() {
		super('Room');
	}

	override public function onLoad(_) {
		Log.info("Loading room ..");

		Promise.when(
			tusk.defaults.Materials.loadUnlitColoured(),
			tusk.defaults.Primitives.loadQuad(),
			Tusk.assets.loadText('assets/tilemaps/office.json'),
			Tusk.assets.loadTexture('assets/tilemaps/office.png'),
			tusk.defaults.Materials.loadUnlitTextured()
		).then(function(unlitColoured:Material, quad:Mesh, officeJSON:Text, officeTexture:Texture, unlitTextured:Material) {
			this.useProcessor(new MeshProcessor());
			this.useProcessor(new MaterialProcessor());
			this.useProcessor(new Camera2DProcessor());
			this.useProcessor(new TransformProcessor());
			this.useProcessor(new Renderer2DProcessor(new Vec4(0.25, 0.25, 0.25, 1)));

			// create the camera
			var w:Float = Tusk.instance.app.window.width;
			var h:Float = Tusk.instance.app.window.height;
			entities.push(new Entity(this, 'Camera', [
				new TransformComponent(),
				new Camera2DComponent(new Vec2(w, h) / -2.0, new Vec2(w, h) / 2.0, -100, 100)
			]));

			/*quad.colours = new Array<Vec4>();
			for(v in quad.vertices) {
				quad.colours.push(new Vec4(0.75, 0.25, 0.25, 0.5));
			}
			entities.push(new Entity(this, 'derp', [
				new TransformComponent(new Vec3(), Quat.identity(), new Vec3(128, 128, 128)),
				new MeshComponent(quad),
				new MaterialComponent(unlitColoured.path),
			]));*/
			// create the visual tilemap
			var tm:TileMap = TileMap.fromJSON(officeJSON.text);
			var tmOffset:Vec3 = 4 * new Vec3(tm.width * tm.tilewidth, tm.height * tm.tileheight, 0) / -2;
			TileMap.buildMesh(tm, 'office.tilemap').then(function(officeMesh:Mesh) {
				Log.info('Built ${officeMesh.vertices.length} vertices!');
				unlitTextured.textures = new Array<Texture>();
				unlitTextured.textures.push(officeTexture);
				var tileMapEntity:Entity = new Entity(this, 'TileMap', [
					new TransformComponent(tmOffset, Quat.identity(), new Vec3(4, 4, 4)),
					new MeshComponent(officeMesh),
					new MaterialComponent(unlitTextured)
				]);
				entities.push(tileMapEntity);
			});

			// create the collision objects
			quad.colours = new Array<Vec4>();
			for(v in quad.vertices) {
				quad.colours.push(new Vec4(0.75, 0.25, 0.25, 0.5));
			}
			for(layer in tm.layers) {
				if(layer.type != tusk.modules.tiled.Layer.LayerType.Object || layer.name != 'collisions') {
					continue;
				}

				// found the collision layer!
				Log.info('found ${layer.objects.length} collision objects!');
				for(object in layer.objects) {
					var size:Vec3 = new Vec3(object.width, object.height, 0);
					var center:Vec3 = size.clone() / 2 + new Vec3(object.x, object.y, -1);
					center.y = (tm.tileheight * (tm.height + 1)) - center.y;
					entities.push(new Entity(this, 'collision', [
						new TransformComponent(center * 4 + tmOffset, Quat.identity(), size * 4),
						new MeshComponent(quad),
						new MaterialComponent(unlitColoured.path),
						new NapeStaticRectComponent()
					]));
				}
			}
		});
	}

	override public function onMouseDown(event:MouseButtonEvent) {
		Log.info('Button clicked: ${event.button}');
	}

	override public function onKeyDown(event:KeyEvent) {
		Log.info('Key pressed: ${event.keyCode}');
	}
}