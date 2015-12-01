import tusk.*;

import tusk.debug.Log;
import tusk.events.*;

import tusk.lib.proc.*;
import tusk.lib.comp.*;

import tusk.resources.Texture;
import tusk.macros.ComponentIndexer;

import glm.*;

class Main extends Game {
	override public function get_title():String {
		return "Tusk (Basic Sample)";
	}

	override public function onLoad(_) {
		Log.info("Game has started!");

		Log.info("Loading primitives and default materials...");
		tusk.Primitives.loadQuad();
		tusk.Materials.loadUnlitTextured();
		Log.info("Done loading primitives and default materials!");

		Log.info("Loading processors...");
		this.useProcessor(new MeshProcessor());
		this.useProcessor(new MaterialProcessor());
		this.useProcessor(new Camera2DProcessor());
		this.useProcessor(new TransformProcessor());
		this.useProcessor(new Renderer2DProcessor(new Vec4(0.25, 0.25, 0.25, 1.0)));
		Log.info("Done loading processors!");

		Log.info("Loading entities...");
		// create the camera
		var w:Float = Tusk.instance.app.window.width;
		var h:Float = Tusk.instance.app.window.height;
		entities.push(new Entity([
			new TransformComponent(),
			new Camera2DComponent(new Vec2(w, h) / -2.0, new Vec2(w, h), -100, 100)
		]));

		// load the sprite texture
		var mc:MaterialComponent = new MaterialComponent("unlit.textured");
		Log.info("Loading Dennie sprite!");
		Tusk.assets.loadTexture(tusk.Files.sprites___Dennie__png)
			.then(function(t:Texture) {
				mc.material.textures.set("texture", t);
				Log.info("Loaded Dennie sprite!");
			}).catchError(function(err) {
				Log.error("Unable to load Dennie sprite!");
			});

		// create a sprite
		entities.push(new Entity([
			new TransformComponent(new Vec3(), Quat.identity(), new Vec3(256, 256, 256)),
			new MeshComponent("quad"),
			mc
		]));
		Log.info("Done loading entities!");

		// notify all the processors that we are beginning!
		Tusk.router.onEvent(tusk.events.EventType.Start);

		//Log.info("Savegame state: " + Tusk.serialize());
	}
}