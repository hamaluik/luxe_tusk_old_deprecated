package tusk.resources;

import tusk.debug.Exception;
import tusk.debug.Log;

#if snow
import snow.modules.opengl.GL;
#else
@:dox(hide)
typedef GLProgram = String;
@:dox(hide)
typedef GLUniformLocation = Int;
#end

/**
 * Defines a GL shader
 */
class Shader extends Asset {
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
	 * @param  path     an identifier for the shader
	 * @param  ?vertSrc a string containing the vertex shader source
	 * @param  ?fragSrc a string containing the fragment shader source
	 */
	public function new(path:String, ?vertSrc:String, ?fragSrc:String) {
		super(path);
		this.vertSrc = vertSrc;
		this.fragSrc = fragSrc;
	}

	/**
	 * Compiles the shader
	 * @return [description]
	 */
	public function compile():GLProgram {
		#if snow
		if(vertSrc == null) {
			throw new Exception("Error compiling shader '" + path + "'.vertex: source must be set first!");
		}
		if(fragSrc == null) {
			throw new Exception("Error compiling shader '" + path + "'.fragment: source must be set first!");
		}

		Log.trace("Compiling shader '" + path + "' components...");

		var vShader:GLShader = GL.createShader(GL.VERTEX_SHADER);
		GL.shaderSource(vShader, vertSrc);
		GL.compileShader(vShader);
		if(GL.getShaderParameter(vShader, GL.COMPILE_STATUS) == 0) {
			throw new Exception("Error compiling shader '" + path + "'.vertex:\n" + GL.getShaderInfoLog(vShader));
		}

		var fShader:GLShader = GL.createShader(GL.FRAGMENT_SHADER);
		GL.shaderSource(fShader, fragSrc);
		GL.compileShader(fShader);
		if(GL.getShaderParameter(fShader, GL.COMPILE_STATUS) == 0) {
			throw new Exception("Error compiling shader '" + path + "'.fragment:\n" + GL.getShaderInfoLog(fShader));
		}

		Log.trace("Shader '" + path + "' components compiled!");
		Log.trace("Linking shader '" + path + "' components...");

		program = GL.createProgram();
		GL.attachShader(program, vShader);
		GL.attachShader(program, fShader);
		GL.linkProgram(program);
		if(GL.getProgramParameter(program, GL.LINK_STATUS) == 0) {
			throw new Exception("Error linking shader '" + path + "': " + GL.getProgramInfoLog(program));
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
		#if snow
		if(program == null) {
			throw new Exception("Shader '"+path+"' must be compiled before attribute '"+attribute+"' can be accessed!");
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
		#if snow
		if(program == null) {
			throw new Exception("Shader '"+path+"' must be compiled before uniform '"+uniform+"' can be accessed!");
		}
		return GL.getUniformLocation(program, uniform);
		#else
		return 0;
		#end
	}
}