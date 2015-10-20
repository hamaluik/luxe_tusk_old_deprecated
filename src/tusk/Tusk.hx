package tusk;

import tusk.Game;
import tusk.debug.Log;
import tusk.events.*;

import snow.types.Types;
import snow.modules.opengl.GL;

/**
 * The main application lives here.
 * 
 * It should mostly be a one-way relationship from here to children of the `Game` class
 * (width the exception of hooking up events).
 *
 * Responsible for showing the splash screen and emitting events.
 */
class Tusk extends snow.App.AppFixedTimestep {
    private static var instance:Tusk;

    private var game:Game;
    private var router:EventRouter;

    private var splashScreen:tusk.SplashScreen;

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
        Log.trace("game config: " + config);
        return config;
    }

    override public function ready() {
        Log.trace("snõw is ready");

        Log.trace("initializing splash screen");
        splashScreen = new tusk.SplashScreen(this, function() {
            Log.trace("splash screen done");
            splashScreen = null;

            Log.trace("connecting rendering callback");
            app.window.onrender = render;

            Log.trace("connecting game routes");
            game.___connectRoutes();

            Log.trace("firing start event");
            router.onEvent(EventType.Start, {});
        });
        app.window.onrender = splashScreen.render;
    }

    override public function update(dt:Float) {
        if(splashScreen != null) {
            splashScreen.update(dt);
        }
    } 

    private function render(window:snow.system.window.Window) {
        GL.viewport(0, 0, app.window.width, app.window.height);
        GL.clearColor(0.0, 0.0, 0.0, 1.0);
        GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);
    }
}