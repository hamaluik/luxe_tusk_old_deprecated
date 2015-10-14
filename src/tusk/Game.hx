package tusk;

import snow.types.Types;
import tusk.Log.*;

class Game extends snow.App {
    override function config(config:AppConfig):AppConfig {
        config.window.title = 'Unbranded Tusk Game';
        return config;
    }

    override public function ready() {
        logWarning("Your game should probably override the ready() function..");
    }
}