import tusk.Log.*;
import tusk.Game;

class Main extends Game {
    override public function get_title():String {
        return "Tusk (Basic Sample)";
    }

    override public function onStart() {
        logInfo('Sample has started!');
    }
}