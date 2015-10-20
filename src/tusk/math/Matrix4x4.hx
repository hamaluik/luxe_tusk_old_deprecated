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

	/**
	 * Construct a new 4x4 matrix
	 * @param  ?array<Float> If provided, use the array values as values in the matrix.
	 *                       If an array is provided, an exception will be thrown if
	 *                       `array.length != 16`.
	 * @return               [description]
	 */
	public function new(?array:Array<Float>) {
		#if !(docgen || testing)
		if(array != null) {
			//Assert.isTrue(array.length == 16);
			buffer = new Float32Array(array);
		}
		else {
			buffer = new Float32Array(16);
		}
		#end
	}

	/**
	 * sets a value in the matrix
	 */
	public function set(x:Int, y:Int, v:Float) {
		//Assert.isTrue(x >= 0 && x < 4);
		//Assert.isTrue(y >= 0 && y < 4);
		buffer[(y * 4) + x] = v;
	}
}