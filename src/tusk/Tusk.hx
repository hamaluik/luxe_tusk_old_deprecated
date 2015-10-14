package tusk;

import snow.types.Types;
import tusk.Game;
import tusk.EventRouter;
import tusk.Log.*;

class Tusk extends snow.App.AppFixedTimestep {
    private static var tusk:Tusk;

    private var game:Game;
    private var router:EventRouter;

    public function new(game:Game) {
        super();
        tusk = this;
        this.router = new EventRouter();
        this.game = game;
    }

    public static function routeEvent(type:Events.EventType, handler:EventHandler) {
        tusk.router.registerHandler(type, handler);
    }

    public static function unrouteEvent(type:Events.EventType, handler:EventHandler) {
        tusk.router.unregisterHandler(type, handler);
    }

    override function config(config:AppConfig):AppConfig {
        config.window.title = game.title;
        logTrace("game config: " + config);
        return config;
    }

    override public function ready() {
        logTrace("snõw is ready");
        logTrace("connecting game routes");
        game.___connectRoutes();
        router.onEvent(Events.EventType.Start, {});
    }
}