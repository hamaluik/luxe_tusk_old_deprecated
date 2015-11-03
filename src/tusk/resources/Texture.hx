package tusk.resources;

class Texture extends Asset {
	#if snow
	private var image:snow.system.assets.Asset.AssetImage;
	public var texture(default, null):snow.modules.opengl.GL.GLTexture;
	#end

	public var width:Int = 0;
	public var height:Int = 0;

	#if snow
	public function new(path:String, image:snow.system.assets.Asset.AssetImage) {
		super(path);
		this.image = image;
		this.width = image.image.width;
		this.height = image.image.height;

        texture = snow.modules.opengl.GL.createTexture();
        snow.modules.opengl.GL.bindTexture(snow.modules.opengl.GL.TEXTURE_2D, texture);
        snow.modules.opengl.GL.texImage2D(
            snow.modules.opengl.GL.TEXTURE_2D,
            0, snow.modules.opengl.GL.RGBA,
            image.image.width, image.image.height,
            0, snow.modules.opengl.GL.RGBA,
            snow.modules.opengl.GL.UNSIGNED_BYTE, image.image.pixels);
        snow.modules.opengl.GL.texParameteri(snow.modules.opengl.GL.TEXTURE_2D, snow.modules.opengl.GL.TEXTURE_MAG_FILTER, snow.modules.opengl.GL.NEAREST);
        snow.modules.opengl.GL.texParameteri(snow.modules.opengl.GL.TEXTURE_2D, snow.modules.opengl.GL.TEXTURE_MIN_FILTER, snow.modules.opengl.GL.NEAREST);
        snow.modules.opengl.GL.bindTexture (snow.modules.opengl.GL.TEXTURE_2D, null);
	}
	#else
	public function new(path:String, sound:Dynamic) {
		super(path);
	}
	#end
}