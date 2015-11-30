package tusk.resources;

import glm.Mat4;

#if snow
import snow.modules.opengl.GL;
#end

/**
 * Defines a material
 */
class Material extends Asset {
	/**
	 * The shader that the material uses
	 */
	public var shader(default, null):Shader;

	/**
	 * Create a new material!
	 * @param  shader The material's shader. If not compiled, the material will compile it automatically.
	 */
	public function new(path:String, shader:Shader) {
		super(path);
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
	public function setMat4(name:String, matrix:Mat4, transpose:Bool = false) {
		#if snow
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniformMatrix4fv(location, transpose, new snow.api.buffers.Float32Array(matrix.toArrayColMajor()));
		#end
	}

	public function setTexture(name:String, ndx:Int) {
		#if snow
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniform1i(location, ndx);
		#end
	}
}