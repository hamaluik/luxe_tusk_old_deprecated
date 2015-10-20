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
    public static var instance:Tusk;

    private var game:Game;
    private var router:EventRouter;

    private var splashScreen:tusk.SplashScreen;

    @:noCompletion
    public function new(game:Game) {
        super();
        instance = this;
        this.router = new EventRouter();
        this.game = game;
    }

    @:noCompletion
    public static function routeEvent(type:EventType, handler:EventHandler) {
        instance.router.registerHandler(type, handler);
    }

    @:noCompletion
    public static function unrouteEvent(type:EventType, handler:EventHandler) {
        instance.router.unregisterHandler(type, handler);
    }

    public static function addEntity(entity:Entity) {
        for(processor in instance.game.processors) {
            if(processor.entities.indexOf(entity) == -1 && processor.matcher.matchesEntity(entity)) {
                processor.entities.push(entity);
                Log.trace("Added entity to processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
        }
    }

    public static function entityChanged(entity:Entity) {
        for(processor in instance.game.processors) {
            if(processor.entities.indexOf(entity) == -1 && processor.matcher.matchesEntity(entity)) {
                processor.entities.push(entity);
                Log.trace("Added entity to processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
            else if(processor.entities.indexOf(entity) != -1 && !processor.matcher.matchesEntity(entity)) {
                processor.entities.remove(entity);
                Log.trace("Removed entity from processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
        }
    }

    public static function removeEntity(entity:Entity) {
        for(processor in instance.game.processors) {
            if(processor.entities.remove(entity)) {
                Log.trace("Removed entity from processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
        }
    }

    @:noCompletion
    override function config(config:AppConfig):AppConfig {
        config.window.title = game.title;
        config.window.width = 960;
        config.window.height = 540;
        Log.trace("game config: " + config);
        return config;
    }

    private function initialize() {
        Log.trace("splash screen done");
        splashScreen = null;

        Log.trace("connecting rendering callback");
        app.window.onrender = render;

        Log.trace("connecting game routes");
        game.___connectRoutes();

        Log.trace("firing start event");
        router.onEvent(EventType.Start, {});
    }

    @:noCompletion
    override public function ready() {
        Log.trace("snõw is ready");

        #if nosplash
        initialize();
        #else
        Log.trace("initializing splash screen");
        splashScreen = new tusk.SplashScreen(this, initialize);
        app.window.onrender = splashScreen.render;
        #end
    }

    @:noCompletion
    override public function update(dt:Float) {
        if(splashScreen != null) {
            splashScreen.update(dt);
        }
        router.onEvent(EventType.Update, { dt: dt });
    }

    private function render(window:snow.system.window.Window) {
        router.onEvent(EventType.Render, { alpha: alpha });
    }
}