package tusk.visuals;

#if docgen
@:dox(hide)
typedef Float32Array = Array<Float>;
#else
import snow.modules.opengl.GL;
import snow.api.buffers.Float32Array;
#end

/**
 * Defines a material
 */
class Material {
	/**
	 * The shader that the material uses
	 */
	public var shader(default, null):Shader;

	/**
	 * Create a new material!
	 * @param  shader The material's shader. If not compiled, the material will compile it automatically.
	 */
	public function new(shader:Shader) {
		this.shader = shader;
		if(this.shader.program == null) {
			this.shader.compile();
		}
	}

	/**
	 * Set a uniform matrix on the material
	 * @param name      The name of the uniform representing the matrix
	 * @param matrix    The matrix data (currently 4x4 only!)
	 * @param transpose Whether the matrix should be transposed or not
	 */
	public function setMatrix(name:String, matrix:Float32Array, transpose:Bool = false) {
		#if !docgen
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniformMatrix4fv(location, transpose, matrix);
		#end
	}
}