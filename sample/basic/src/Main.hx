import tusk.*;

import tusk.debug.Log;
import tusk.events.*;

import tusk.lib.proc.*;
import tusk.lib.comp.*;

import tusk.resources.Texture;
import tusk.macros.ComponentIndexer;

import glm.*;

import promhx.Promise;

import haxe.ds.StringMap;
import tusk.defaults.scenes.TechScreen;
import tusk.defaults.scenes.SplashScreen;

class Main extends Game {
	override public function get_title():String {
		return "Tusk (Basic Sample)";
	}

	private var scenes:StringMap<Scene> = new StringMap<Scene>();

	override public function setup() {
		Log.info('Setting up game...');

		var tech:Scene = new TechScreen();
		var splash:Scene = new SplashScreen();
		scenes.set('room', new Room());
		/*Tusk.pushScene(tech)
			.pipe(function(_) { 
				Tusk.removeScene(tech);
				return Tusk.pushScene(splash);
			}).pipe(function(_) {
				Tusk.removeScene(splash);
				return Tusk.pushScene(scenes.get('room'));
			});*/
		Tusk.pushScene(scenes.get('room'));
	}
}