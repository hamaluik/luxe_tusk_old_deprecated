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

    private var splashScreen:SplashScreen;

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
        splashScreen = new SplashScreen(this);
        app.window.onrender = splashScreen.render;

        /*Log.trace("connecting rendering callback");
        app.window.onrender = render;
        Log.trace("connecting game routes");
        game.___connectRoutes();
        router.onEvent(EventType.Start, {});*/
    }

    override public function update(dt:Float) {
        if(splashScreen != null) {
            splashScreen.update(dt);
        }
    } 

    private function render(window:snow.system.window.Window) {

    }
}

private class SplashScreen {
    private var tuskLib:Tusk;

    private var projectionMatrix:tusk.math.Matrix4x4;
    private var modelMatrix:tusk.math.Matrix4x4;
    private var mat:tusk.resources.Material;

    private var posLocation:Int;
    private var colLocation:Int;

    var vertexBuffer:GLBuffer;

    public function new(tuskLib:Tusk) {
        this.tuskLib = tuskLib;
        var w:Float = tuskLib.app.window.width;
        var h:Float = tuskLib.app.window.height;
        var f:Float = 2;
        var n:Float = 0.1;
        projectionMatrix = new tusk.math.Matrix4x4([
            (2.0/w), 0, 0, 0,
            0, (2.0/h), 0, 0,
            0, 0, (1/(f-n)), (-n/(f-n)),
            0, 0, 0, 1
        ]);

        modelMatrix = new tusk.math.Matrix4x4([
            1, 0, 0, 0,
            0, 1, 0, 0,
            0, 0, 1, 0,
            0, 0, 0, 1]);

        var shader:tusk.resources.Shader = new tusk.resources.Shader("splash",
            haxe.Resource.getString("default.colour.vert"),
            haxe.Resource.getString("default.colour.frag"));
        mat = new tusk.resources.Material(shader);
        mat.setMatrix4x4("modelView", modelMatrix);
        mat.setMatrix4x4("projection", projectionMatrix);

        GL.useProgram(mat.shader.program);
        posLocation = mat.shader.getAttributeLocation("position");
        colLocation = mat.shader.getAttributeLocation("colour");

        vertexBuffer = GL.createBuffer();
        GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);
        GL.bufferData(GL.ARRAY_BUFFER, new snow.api.buffers.Float32Array([
            0, 0, 0,       1, 0, 0, 1,
            128, 0, 0,     0, 1, 0, 1,
            128, 128, 0,   0, 0, 1, 1,
            0, 128, 0,     0, 0, 0, 1
        ]), GL.STATIC_DRAW);
        GL.bindBuffer(GL.ARRAY_BUFFER, null);
    }

    public function update(dt:Float) {

    }

    public function render(window:snow.system.window.Window) {
        GL.viewport(0, 0, tuskLib.app.window.width, tuskLib.app.window.height);
        GL.clearColor(1.0, 1.0, 1.0, 1.0);
        GL.clear( GL.COLOR_BUFFER_BIT );

        GL.useProgram(mat.shader.program);
        mat.setMatrix4x4("projection", projectionMatrix);
        mat.setMatrix4x4("modelView", modelMatrix);

        GL.enableVertexAttribArray(posLocation);
        GL.vertexAttribPointer(posLocation, 3, GL.FLOAT, false, 7, 0);
        GL.enableVertexAttribArray(colLocation);
        GL.vertexAttribPointer(colLocation, 4, GL.FLOAT, false, 7, 3);
        GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);

        GL.drawArrays(GL.TRIANGLE_STRIP, 0, 4);

        GL.bindBuffer(GL.ARRAY_BUFFER, null);
        GL.disableVertexAttribArray(posLocation);
        GL.disableVertexAttribArray(colLocation);
        GL.useProgram(null);
    }
}