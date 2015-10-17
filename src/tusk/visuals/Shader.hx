package tusk.visuals;

import tusk.Exception;
import tusk.Log.*;

#if docgen
@:dox(hide)
typedef GLProgram = String;
@:dox(hide)
typedef GLUniformLocation = Int;
#else
import snow.modules.opengl.GL;
#end

/**
 * Defines a GL shader
 */
class Shader {
	/**
	 * The identifier of the shader
	 */
	public var id(default, null):String = "shader.?";

	/**
	 * The vertex shader source
	 * After changing this, don't forget to recompile!
	 */
	public var vertSrc:String;

	/**
	 * The fragment shader source
	 * After changing this, don't forget to recompile!
	 */
	public var fragSrc:String;

	/**
	 * The program that this shader compiled into
	 */
	public var program(default, null):GLProgram;

	/**
	 * Construct a new shader with the given vertex and fragment sources.
	 * **Note:** you must compile this to use it!
	 * @param  id       an identifier for the shader
	 * @param  ?vertSrc a string containing the vertex shader source
	 * @param  ?fragSrc a string containing the fragment shader source
	 */
	public function new(id:String, ?vertSrc:String, ?fragSrc:String) {
		this.id = id;
		this.vertSrc = vertSrc;
		this.fragSrc = fragSrc;
	}

	/**
	 * Compiles the shader
	 * @return [description]
	 */
	public function compile():GLProgram {
		#if !docgen
		if(vertSrc == null) {
			throw new Exception("Error compiling shader '" + id + "'.vertex: source must be set first!");
		}
		if(fragSrc == null) {
			throw new Exception("Error compiling shader '" + id + "'.fragment: source must be set first!");
		}

		logTrace("Compiling shader '" + id + "' components...");

		var vShader:GLShader = GL.createShader(GL.VERTEX_SHADER);
		GL.shaderSource(vShader, vertSrc);
		GL.compileShader(vShader);
		if(GL.getShaderParameter(vShader, GL.COMPILE_STATUS) == 0) {
			throw new Exception("Error compiling shader '" + id + "'.vertex:\n" + GL.getShaderInfoLog(vShader));
		}

		var fShader:GLShader = GL.createShader(GL.FRAGMENT_SHADER);
		GL.shaderSource(fShader, fragSrc);
		GL.compileShader(fShader);
		if(GL.getShaderParameter(fShader, GL.COMPILE_STATUS) == 0) {
			throw new Exception("Error compiling shader '" + id + "'.fragment:\n" + GL.getShaderInfoLog(fShader));
		}

		logTrace("Shader '" + id + "' components compiled!");
		logTrace("Linking shader '" + id + "' components...");

		program = GL.createProgram();
		GL.attachShader(program, vShader);
		GL.attachShader(program, fShader);
		GL.linkProgram(program);
		if(GL.getProgramParameter(program, GL.LINK_STATUS) == 0) {
			throw new Exception("Error linking shader '" + id + "': " + GL.getProgramInfoLog(program));
		}

		return program;
		#else
		return "";
		#end
	}

	/**
	 * Get's the location of the specified attribute in the compiled shader
	 * @param  attribute the name of the attribute (matching its spelling in the shader source) to find
	 * @return           the locatino of the attribute in the program
	 */
	public function getAttributeLocation(attribute:String):Int {
		#if !docgen
		if(program == null) {
			throw new Exception("Shader '"+id+"' must be compiled before attribute '"+attribute+"' can be accessed!");
		}
		return GL.getAttribLocation(program, attribute);
		#else
		return 0;
		#end
	}

	/**
	 * Get's the location of the specified uniform in the compiled shader
	 * @param  uniform  the name of the uniform (matching its spelling in the shader source) to find
	 * @return          the locatino of the uniform in the program
	 */
	public function getUniformLocation(uniform:String):GLUniformLocation {
		#if !docgen
		if(program == null) {
			throw new Exception("Shader '"+id+"' must be compiled before uniform '"+uniform+"' can be accessed!");
		}
		return GL.getUniformLocation(program, uniform);
		#else
		return 0;
		#end
	}
}