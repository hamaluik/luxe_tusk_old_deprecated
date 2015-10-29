import tusk.*;

import tusk.debug.Log;
import tusk.events.*;

import tusk.lib.proc.*;
import tusk.lib.comp.*;

import tusk.macros.ComponentIndexer;

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
    		new SoundComponent(false, tusk.Files.sounds___tada__ogg)
    	]));

    	Log.info("Done loading entities!");
        
        /*Log.info("SCid: " + SoundComponent.tid);
        var c:SoundComponent = new SoundComponent(false, AssetFiles.sounds___tada__ogg);
        Log.info("SCid_inst: " + c._tid);
        var cb:Component = c;
        Log.info('Cid_inst: ' + cb._tid);*/

        Log.info("Savegame state: " + Tusk.serialize());
    }
}