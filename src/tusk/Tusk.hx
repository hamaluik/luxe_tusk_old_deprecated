package tusk;

import tusk.Game;
import tusk.debug.Log;
import tusk.events.*;

import snow.types.Types;
import snow.modules.opengl.GL;
import snow.types.Types;

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
    private var uvLocation:Int;

    var vertexBuffer:GLBuffer;

    var logo:snow.system.assets.Asset.AssetImage;
    var logoTexture:GLTexture;

    public function new(tuskLib:Tusk) {
        this.tuskLib = tuskLib;

        tuskLib.app.assets.image_from_bytes(
            "blazingmammothgames.png",
            snow.api.buffers.Uint8Array.fromBytes(haxe.Resource.getBytes("blazingmammothgames.png")))
            .then(function(asset:AssetImage) {
                Log.trace("Logo loaded!");
                logo = asset;

                logoTexture = GL.createTexture();
                GL.bindTexture(GL.TEXTURE_2D, logoTexture);
                GL.texImage2D(
                    GL.TEXTURE_2D,
                    0, GL.RGBA,
                    asset.image.width, asset.image.height,
                    0, GL.RGBA,
                    GL.UNSIGNED_BYTE, asset.image.pixels);
                GL.texParameteri(GL.TEXTURE_2D, GL.TEXTURE_MAG_FILTER, GL.NEAREST);
                GL.texParameteri(GL.TEXTURE_2D, GL.TEXTURE_MIN_FILTER, GL.NEAREST);
                GL.bindTexture (GL.TEXTURE_2D, null);
                Log.trace("Logo bound to texture!");
            });

        var w:Float = tuskLib.app.window.width;
        var h:Float = tuskLib.app.window.height;
        var f:Float = 2;
        var n:Float = 0;
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

        GL.useProgram(mat.shader.program);
        posLocation = mat.shader.getAttributeLocation("position");
        uvLocation = mat.shader.getAttributeLocation("colour");

        vertexBuffer = GL.createBuffer();
        GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);
        GL.bufferData(GL.ARRAY_BUFFER, new snow.api.buffers.Float32Array([
               0,    0,  0.5,   0.0,  0.0,
             256,    0,  0.5,   1.0,  0.0,
             256,  256,  0.5,   1.0,  1.0,

             256,  256,  0.5,   1.0,  1.0,
               0,  256,  0.5,   0.0,  1.0,
               0,    0,  0.5,   1.0,  0.0
        ]), GL.STATIC_DRAW);
        GL.bindBuffer(GL.ARRAY_BUFFER, null);

        GL.enable(GL.DEPTH_TEST);
    }

    public function update(dt:Float) {

    }

    public function render(window:snow.system.window.Window) {
        GL.viewport(0, 0, tuskLib.app.window.width, tuskLib.app.window.height);

        if(logo == null) {
            GL.clearColor(0.0, 0.0, 0.0, 1.0);
            GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);
            return;
        }

        GL.clearColor(1.0, 1.0, 1.0, 1.0);
        GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);

        GL.useProgram(mat.shader.program);
        mat.setMatrix4x4("modelView", modelMatrix);
        mat.setMatrix4x4("projection", projectionMatrix);
        mat.setTexture("texture", 0);

        GL.enableVertexAttribArray(posLocation);
        GL.enableVertexAttribArray(uvLocation);
        GL.activeTexture(GL.TEXTURE0);
        GL.bindTexture(GL.TEXTURE_2D, logoTexture);
        GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);

        GL.vertexAttribPointer(posLocation, 3, GL.FLOAT, false, 5*4, 0);
        GL.vertexAttribPointer(uvLocation, 2, GL.FLOAT, false, 5*4, 3*4);

        GL.drawArrays(GL.TRIANGLES, 0, 6);

        GL.bindTexture(GL.TEXTURE_2D, null);
        GL.bindBuffer(GL.ARRAY_BUFFER, null);
        GL.disableVertexAttribArray(posLocation);
        GL.disableVertexAttribArray(uvLocation);
        GL.useProgram(null);
    }
}