package tusk.resources;

#if !docgen
import snow.modules.opengl.GL;
#end
import tusk.math.Matrix4x4;

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
	 * Set a uniform matrix4x4 on the material
	 * @param name      The name of the uniform representing the matrix
	 * @param matrix    The matrix data (4x4!)
	 * @param transpose Whether the matrix should be transposed or not
	 */
	public function setMatrix4x4(name:String, matrix:Matrix4x4, transpose:Bool = false) {
		#if !docgen
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniformMatrix4fv(location, transpose, matrix.buffer);
		#end
	}

	public function setTexture(name:String, ndx:Int) {
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniform1i(location, ndx);
	}
}