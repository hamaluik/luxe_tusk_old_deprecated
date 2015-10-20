package tusk;

import tusk.debug.Log;

import snow.types.Types;
import snow.modules.opengl.GL;

@:dox(hide)
class SplashScreen {
    private var tuskLib:Tusk;
    private var onDone:Void->Void;

    private var projectionMatrix:tusk.math.Matrix4x4;
    private var modelMatrix:tusk.math.Matrix4x4;
    private var mat:tusk.resources.Material;

    private var posLocation:Int;
    private var uvLocation:Int;

    var vertexBuffer:GLBuffer;

    var logo:snow.system.assets.Asset.AssetImage;
    var logoTexture:GLTexture;

    var logoSound:snow.system.audio.Sound;

    public function new(tuskLib:Tusk, onDone:Void->Void) {
        this.tuskLib = tuskLib;
        this.onDone = onDone;

        tuskLib.app.audio.create("assets/sounds/blazingmammothgames.ogg", "blazingmammothgames.ogg")
            .then(function(sound:snow.system.audio.Sound) {
                Log.trace("Logo sound loaded!");
                logoSound = sound;
            });

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
            -128, -128, 0, 1]);

        var shader:tusk.resources.Shader = new tusk.resources.Shader("texture",
            haxe.Resource.getString("default.texture.vert"),
            haxe.Resource.getString("default.texture.frag"));
        mat = new tusk.resources.Material(shader);

        GL.useProgram(mat.shader.program);
        posLocation = mat.shader.getAttributeLocation("position");
        uvLocation = mat.shader.getAttributeLocation("uv");

        vertexBuffer = GL.createBuffer();
        GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);
        GL.bufferData(GL.ARRAY_BUFFER, new snow.api.buffers.Float32Array([
               0,    0,  0.5,   0.0,  1.0,
             256,    0,  0.5,   1.0,  1.0,
             256,  256,  0.5,   1.0,  0.0,

             256,  256,  0.5,   1.0,  0.0,
               0,  256,  0.5,   0.0,  0.0,
               0,    0,  0.5,   0.0,  1.0
        ]), GL.STATIC_DRAW);
        GL.bindBuffer(GL.ARRAY_BUFFER, null);

        GL.enable(GL.DEPTH_TEST);
        GL.enable(GL.BLEND);
    }

    var started:Bool = false;
    var shaking:Bool = true;
    var t:Float = 0;
    var shakeAmplitude:Float = 10;

    var shakeDelay:Float = 0.5;
    var cooldown:Float = 3;
    var done:Bool = false;

    public function update(dt:Float) {
        if(logo == null || logoSound == null || done) {
            return;
        }

        var x:Float = 0;
        var y:Float = 0;

        if(!started) {
            started = true;
            tuskLib.app.audio.play('blazingmammothgames.ogg');
            logoSound.on('end', function(_) {
                shaking = false;
            });
        }

        if(shakeDelay > 0) {
            shakeDelay -= dt;
            return;
        }

        if(shaking) {
            t += dt;
            var a:Float = -0.1490 * Math.pow(t, 4) + 1.2605 * Math.pow(t, 3) - 3.6256 * Math.pow(t, 2) + 3.6298 * t - 0.1685;
            x = (Math.random() * 2 - 1) * shakeAmplitude * a;
            y = (Math.random() * 2 - 1) * shakeAmplitude * a;
        }
        else {
            cooldown -= dt;
            if(cooldown <= 0) {
                done = true;
                GL.clearColor(0.0, 0.0, 0.0, 1.0);
                GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);
                onDone();
            }
        }

        modelMatrix.set(0, 3, -128 + x);
        modelMatrix.set(1, 3, -128 + y);
    }

    public function render(window:snow.system.window.Window) {
        GL.viewport(0, 0, tuskLib.app.window.width, tuskLib.app.window.height);

        if(logo == null || logoSound == null || done) {
            GL.clearColor(0.0, 0.0, 0.0, 1.0);
            GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);
            return;
        }

        GL.clearColor(1.0, 1.0, 1.0, 1.0);
        GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);

        GL.useProgram(mat.shader.program);
        GL.blendFunc(GL.SRC_ALPHA, GL.ONE_MINUS_SRC_ALPHA);

        GL.activeTexture(GL.TEXTURE0);
        GL.bindTexture(GL.TEXTURE_2D, logoTexture);

        mat.setMatrix4x4("modelView", modelMatrix);
        mat.setMatrix4x4("projection", projectionMatrix);
        mat.setTexture("texture", 0);

        GL.enableVertexAttribArray(posLocation);
        GL.enableVertexAttribArray(uvLocation);
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