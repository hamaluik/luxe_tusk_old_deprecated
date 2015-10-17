import tusk.Game;
import tusk.debug.Log.*;
import tusk.events.*;

class Main extends Game {
    override public function get_title():String {
        return "Tusk (Basic Sample)";
    }

    override public function onStart(data:StartEvent) {
    	logInfo("Game has started!");
    }
}