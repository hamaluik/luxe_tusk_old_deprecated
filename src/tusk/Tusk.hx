package tusk;

import tusk.Game;
import tusk.debug.Log;
import tusk.events.*;
import tusk.modules.*;

#if snow
import snow.types.Types;
import snow.modules.opengl.GL;
import snow.App.AppFixedTimestep;
import snow.system.window.Window;
#else
@:dox(hide)
class Window {
    public var title:String;
    public var width:Int;
    public var height:Int;
    public var onrender:Window->Void;

    public function new() {}
}
@:dox(hide)
class Snow {
    public var window:Window;
    public function new() {
        window = new Window();
    }
}
@:dox(hide)
class AppFixedTimestep {
    public var app:Snow;
    public var alpha:Float;
    public function new() {
        alpha = 0.5;
        app = new Snow();
    }
    public function config(config:AppConfig):AppConfig { return null; }
    public function ready() {}
    public function update(dt:Float) {}
}
@:dox(hide)
typedef AppConfig = { window:Window }
#end

/**
 * The main application lives here.
 *
 * It should mostly be a one-way relationship from here to children of the `Game` class
 * (width the exception of hooking up events).
 *
 * Generally responsible for showing the splash screen and emitting events.
 */
class Tusk extends AppFixedTimestep {
    public static var instance:Tusk;

    /**
     * Sound module
     */
    public static var sound:Sound;

    /**
     * The asset manager
     */
    public static var assets:Assets;

    /**
     * The current instance of the running game!
     */
    public var game(default, null):Game;

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

        // initialize all modules
        sound = new Sound(this);
        assets = new Assets(this);

        #if (nosplash || !snow)
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

    private function render(window:Window) {
        router.onEvent(EventType.Render, { alpha: alpha });
    }

    /**
     * Called in an entity constructor when it is created (to route the events to the processors)
     * @param entity The entity that was just created
     */
    public static function addEntity(entity:Entity) {
        // update the game
        if(instance.game.entities.indexOf(entity) == -1) {
            instance.game.entities.push(entity);
            Log.trace("Added entity to game!");
        }

        // update the processors
        for(processor in instance.game.processors) {
            if(processor.entities.indexOf(entity) == -1 && processor.matcher.matchesEntity(entity)) {
                processor.entities.push(entity);
                processor.onEntityChanged(entity, Entity.ChangeEvent.EntityAdded);
                Log.trace("Added entity to processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
        }
    }

    /**
     * Called whenever an entity changes (when its component-composition changes) (to route the events to the processors)
     * @param  entity the changed entity
     */
    public static function entityChanged(entity:Entity, event:Entity.ChangeEvent) {
        // update the processors
        for(processor in instance.game.processors) {
            if(processor.entities.indexOf(entity) == -1 && processor.matcher.matchesEntity(entity)) {
                processor.entities.push(entity);
                processor.onEntityChanged(entity, event);
                Log.trace("Added entity to processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
            else if(processor.entities.indexOf(entity) != -1 && !processor.matcher.matchesEntity(entity)) {
                processor.entities.remove(entity);
                processor.onEntityChanged(entity, event);
                Log.trace("Removed entity from processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
        }
    }

    /**
     * Called whenever an entity is destroyed (to route the events to the processors)
     * @param  entity the destroyed entity
     */
    public static function removeEntity(entity:Entity) {
        // update the processors
        for(processor in instance.game.processors) {
            if(processor.entities.remove(entity)) {
                processor.onEntityChanged(entity, Entity.ChangeEvent.EntityRemoved);
                Log.trace("Removed entity from processor '" + Type.getClassName(Type.getClass(processor)) + "'!");
            }
        }

        // update the game
        if(instance.game.entities.remove(entity)) {
            Log.trace("Removed entity from game!");
        }
    }

    /**
     * Creates a savegame string
     * @return a string defining the current state of the game
     */
    public static function serialize():String {
        Log.trace("Serializing game state...");
        var s = new haxe.Serializer();
        s.serialize(instance.game.processors);
        s.serialize(instance.game.entities);
        var result:String = s.toString();
        Log.trace("Serialized state:");
        Log.trace(result);
        return result;
    }
}
