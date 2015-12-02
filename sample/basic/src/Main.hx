import tusk.*;

import tusk.debug.Log;
import tusk.events.*;

import tusk.lib.proc.*;
import tusk.lib.comp.*;

import tusk.resources.Texture;
import tusk.macros.ComponentIndexer;

import glm.*;

import haxe.ds.StringMap;
import tusk.TechScreen;

class Main extends Game {
	override public function get_title():String {
		return "Tusk (Basic Sample)";
	}

	private var scenes:StringMap<Scene> = new StringMap<Scene>();

	override public function setup() {
		Log.info('Setting up game...');

		scenes.set('menu', new Menu());
		Tusk.loadScene(new TechScreen())
			.pipe(function(_) { return Tusk.loadScene(new SplashScreen()); })
			.then(function(_) { return Tusk.loadScene(scenes.get('menu')); });
	}
}