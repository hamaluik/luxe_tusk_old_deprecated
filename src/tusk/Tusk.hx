package tusk;

import snow.types.Types;
import tusk.Game;
import tusk.Log.*;

class Tusk extends snow.App.AppFixedTimestep {
    private var game:Game;

    public function new(game:Game) {
        super();
        this.game = game;
    }

    override function config(config:AppConfig):AppConfig {
        config.window.title = game.title;
        logTrace("game config: " + config);
        return config;
    }

    override public function ready() {
        logTrace("snõw is ready");
        game.onStart();
    }
}