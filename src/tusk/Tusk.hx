package tusk;

import snow.types.Types;
import tusk.Game;
import tusk.debug.Log.*;
import tusk.events.*;

import snow.modules.opengl.GL;

class Tusk extends snow.App.AppFixedTimestep {
    private static var instance:Tusk;

    private var game:Game;
    private var router:EventRouter;

    public function new(game:Game) {
        super();
        instance = this;
        this.router = new EventRouter();
        this.game = game;
    }

    public static function routeEvent(type:EventType, handler:EventHandler) {
        instance.router.registerHandler(type, handler);
    }

    public static function unrouteEvent(type:EventType, handler:EventHandler) {
        instance.router.unregisterHandler(type, handler);
    }

    override function config(config:AppConfig):AppConfig {
        config.window.title = game.title;
        config.window.width = 960;
        config.window.height = 540;
        logTrace("game config: " + config);
        return config;
    }

    override public function ready() {
        logTrace("snõw is ready");
        logTrace("connecting rendering callback");
        app.window.onrender = render;
        logTrace("connecting game routes");
        game.___connectRoutes();
        router.onEvent(EventType.Start, {});
    }

    private function render(window:snow.system.window.Window) {
        GL.viewport(0, 0, app.window.width, app.window.height);
        GL.clearColor(1.0, 1.0, 1.0, 1.0);
        GL.clear(snow.modules.opengl.GL.COLOR_BUFFER_BIT);
    }
}