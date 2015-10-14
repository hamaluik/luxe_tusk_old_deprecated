import tusk.Log.*;
import tusk.Game;

class Main extends Game {
    override public function get_title():String {
        return "Tusk (Basic Sample)";
    }

    override public function onStart(data:tusk.Events.Start) {
        logInfo('Sample has started!');
    }
}