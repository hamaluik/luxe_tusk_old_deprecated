package tusk;

import promhx.Promise;

import tusk.debug.Log;
import tusk.resources.Asset;
import tusk.resources.Texture;
import tusk.resources.Sound;

import glm.GLM;
import glm.Mat4;
import glm.Vec2;
import glm.Vec3;

#if snow
//import snow.types.Types;
import snow.modules.opengl.GL;
import snow.system.window.Window;
#else
import tusk.Tusk.Window;
#end

@:dox(hide)
class SplashScreen {
    private var app:Tusk;
    private var onDone:Void->Void;

    private var projectionMatrix:Mat4;
    private var modelMatrix:Mat4;
    private var mat:tusk.resources.Material;

    private var posLocation:Int;
    private var uvLocation:Int;

    #if snow
    var vertexBuffer:GLBuffer;

    //var logo:snow.system.assets.Asset.AssetImage;
    var logo:Texture;
    //var logoTexture:GLTexture;

    //var logoSound:snow.system.audio.Sound;
    var logoSound:Sound;
    #end

    public function new(app:Tusk, onDone:Void->Void) {
        #if snow
        this.app = app;
        this.onDone = onDone;

        var w:Float = app.app.window.width;
        var h:Float = app.app.window.height;
        var f:Float = 2;
        var n:Float = -2;
        projectionMatrix = glm.Projection.ortho(-w/2, w/2, -h/2, h/2, n, f);
        modelMatrix = GLM.translate(new Vec3(-128, -128));

        var sp:Promise<Sound> = Tusk.assets.loadSound("assets/sounds/blazingmammothgames.ogg");
        var tp:Promise<Texture> = Tusk.assets.loadTexture("blazingmammothgames.png", haxe.Resource.getBytes("blazingmammothgames.png"));
        Promise.when(sp, tp).then(function(sound:Sound, texture:Texture) {
            Log.trace("Splash screen assets loaded!");
            logoSound = sound;
            logo = texture;
        });

        var shader:tusk.resources.Shader = new tusk.resources.Shader("unlit.textured",
            haxe.Resource.getString("unlit.textured.vert"),
            haxe.Resource.getString("unlit.textured.frag"));
        mat = new tusk.resources.Material("unlit.textured", shader);

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
        #end
    }

    var started:Bool = false;
    var shaking:Bool = true;
    var t:Float = 0;
    var shakeAmplitude:Float = 10;

    var shakeDelay:Float = 0.5;
    var cooldown:Float = 1;
    var done:Bool = false;

    public function update(dt:Float) {
        #if snow
        if(logo == null || logoSound == null || done) {
            return;
        }

        var x:Float = 0;
        var y:Float = 0;

        if(!started) {
            started = true;
            logoSound.onEnd = function() {
                shaking = false;
            };
            Tusk.sound.play(logoSound);
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
                x = 0;
                y = 0;
                done = true;
                GL.clearColor(0.0, 0.0, 0.0, 1.0);
                GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);
                onDone();
            }
        }

        // move the logo around a bit
        modelMatrix = GLM.translate(new Vec3(x - 128, y - 128));
        #end
    }

    public function render(window:Window) {
        #if snow
        GL.viewport(0, 0, app.app.window.width, app.app.window.height);

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
        GL.bindTexture(GL.TEXTURE_2D, logo.texture);

        mat.setMat4("modelView", modelMatrix);
        mat.setMat4("projection", projectionMatrix);
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
        #end
    }
}