import tusk.*;

import tusk.debug.Log;
import tusk.events.*;

import tusk.lib.proc.*;
import tusk.lib.comp.*;

import tusk.math.Vector;

import tusk.macros.ComponentIndexer;

class Main extends Game {
	override public function get_title():String {
		return "Tusk (Basic Sample)";
	}

	override public function onStart(data:StartEvent) {
		Log.info("Game has started!");
		Log.info("Loading processors...");

		//this.useProcessor(new SoundProcessor());
		this.useProcessor(new CameraProcessor());

		Log.info("Done loading processors!");
		Log.info("Loading entities...");

		entities.push(new Entity([
			new PositionComponent(
				new Vector(0, 0, 0)
			),
			new CameraComponent(
				0, 0, 1, 1,
				0, 100,
				Tusk.instance.app.window.width, Tusk.instance.app.window.height
			)
		]));

		Log.info("Done loading entities!");

		Log.info("Savegame state: " + Tusk.serialize());
	}
}