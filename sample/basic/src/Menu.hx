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

class Menu extends Scene {
	public function new() {
		super('Menu');
	}

	override public function onLoad(_) {
		Log.info("Loading menu screen..");

		Promise.when(
			Tusk.assets.loadText('assets/tilemaps/office.json'),
			Tusk.assets.loadTexture('assets/tilemaps/office.png'),
			tusk.defaults.Materials.loadUnlitTextured()
		).then(function(officeJSON:Text, officeTexture:Texture, mat:Material) {
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

			var tm:TileMap = TileMap.fromJSON(officeJSON.text);
			TileMap.buildMesh(tm, 'office.tilemap').then(function(office:Mesh) {
				// set the material's texture
				mat.textures = new Array<Texture>();
				mat.textures.push(officeTexture);

				Log.info('Mesh loaded, creating entity!');
				this.entities.push(new Entity(this, 'Office TileMap', [
					new TransformComponent(new Vec3(tm.width * tm.tilewidth, tm.height * tm.tileheight) * -1, Quat.identity(), new Vec3(2, 2, 2)),
					new MeshComponent(office.path),
					new MaterialComponent(mat.path),
				]));
			});
		});
	}
}