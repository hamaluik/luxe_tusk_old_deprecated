package tusk.resources;

import glm.Vec2;
import glm.Vec3;
import glm.Vec4;
import glm.Mat4;

import haxe.EnumFlags;

#if snow
import snow.modules.opengl.GL;
import snow.modules.opengl.GL.GLBuffer;
#end

typedef SetupRenderUniformsCallback = Material->Void;
#if snow
typedef RenderCallback = SetupRenderUniformsCallback->GLBuffer->Int->Void;
#else
typedef RenderCallback = SetupRenderUniformsCallback->Int->Int->Void;
#end

enum AttributeTypes {
	Pos3;
	UV;
	Colour4;
}

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

	/**
	 * An array of textures used by the material
	 */
	public var textures:Array<Texture> = null;

	/**
	 * Keep track of what types of common attributes the material has, for
	 * the normal mesh processor.
	 */
	public var attributeFlags:EnumFlags<AttributeTypes> = new EnumFlags<AttributeTypes>();

	public function clone(newPath:String):Material {
		var m:Material = new Material(newPath, this.shader);
		m.onRender = this.onRender;
		if(this.textures != null) {
			m.textures = new Array<Texture>();
			for(texture in this.textures) {
				m.textures.push(texture);
			}
		}
		m.attributeFlags = this.attributeFlags;
		return m;
	}

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

	public function setFloat(name:String, v:Float) {
		#if snow
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniform1f(location, v);
		#end
	}

	public function setVec2(name:String, vec:Vec2) {
		#if snow
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniform2f(location, vec.x, vec.y);
		#end
	}

	public function setVec3(name:String, vec:Vec3) {
		#if snow
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniform3f(location, vec.x, vec.y, vec.z);
		#end
	}

	public function setVec4(name:String, vec:Vec4) {
		#if snow
		var location:GLUniformLocation = shader.getUniformLocation(name);
		GL.uniform4f(location, vec.x, vec.y, vec.z, vec.w);
		#end
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