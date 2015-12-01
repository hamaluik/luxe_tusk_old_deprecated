package tusk.resources;

import glm.Mat4;

#if snow
import snow.modules.opengl.GL;
import snow.modules.opengl.GL.GLBuffer;
#end

import haxe.ds.StringMap;

typedef RenderCallback = Mat4->Mat4->GLBuffer->Int->Void;

/**
 * Defines a material
 */
class Material extends Asset {
	/**
	 * The shader that the material uses
	 */
	public var shader(default, null):Shader;

	/**
	 * A callback function to be used when rendering this material
	 */
	public var onRender:RenderCallback = null;

	public var textures:StringMap<Texture> = new StringMap<Texture>();

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

	/**
	 * Uses GL to set a texture in the shaders
	 * @param name the name of the texture to set
	 * @param ndx  which slot to place it in
	 */
	public function setTexture(name:String, ndx:Int) {
		#if snow
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniform1i(location, ndx);
		#end
	}
}