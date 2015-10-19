package tusk.math;

import tusk.debug.Assert;
#if (docgen || testing)
@:dox(hide)
typedef Float32Array = Array<Float>;
#else
import snow.api.buffers.Float32Array;
#end

/**
 * A class representing a 4x4 matrix
 */
class Matrix4x4 {
	/**
	 * The internal array storing the matrix information
	 */
	public var buffer(default, null):Float32Array;

	public function new() {
		#if !(docgen || testing)
		buffer = new Float32Array(16);
		#end
	}

	/**
	 * sets a value in the matrix
	 */
	public function set(x:Int, y:Int, v:Float) {
		Assert.isTrue(x >= 0 && x < 4);
		Assert.isTrue(y >= 0 && y < 4);
		buffer[(y * 4) + x] = v;
	}
}