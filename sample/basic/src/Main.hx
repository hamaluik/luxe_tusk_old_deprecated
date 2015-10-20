import tusk.*;

import tusk.debug.Log;
import tusk.events.*;

import tusk.lib.proc.*;
import tusk.lib.comp.*;

class Main extends Game {
    override public function get_title():String {
        return "Tusk (Basic Sample)";
    }

    override public function onStart(data:StartEvent) {
    	Log.info("Game has started!");
    	Log.info("Loading processors...");

    	this.useProcessor(new CameraProcessor());
    	this.useProcessor(new SoundProcessor());

    	Log.info("Done loading processors!");
    	Log.info("Loading entities...");

    	entities.push(new Entity([
    		new CameraProjectionComponent()
    	]));
    	entities.push(new Entity([
    		new SoundComponent(false, "assets/sounds/blazingmammothgames.ogg")
    	]));

    	Log.info("Done loading entities!");
    }
}