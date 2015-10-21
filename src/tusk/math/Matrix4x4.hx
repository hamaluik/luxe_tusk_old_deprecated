package tusk.math;

import tusk.debug.Assert;

#if !docgen
import snow.api.buffers.Float32Array;
#else
@:dox(hide)
class Float32Array {
	public function new(?elem:Dynamic) {}
}
#end

import haxe.Serializer;
import haxe.Unserializer;

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
		#if !docgen
		if(array != null) {
			Assert.assert(array.length == 16);
			buffer = new Float32Array(array);
		}
		else {
			buffer = new Float32Array(16);
		}
		#end
	}

	/**
	 * Get a value from the matrix
	 * @param x the column to set
	 * @param y the row to set
	 * @return  the matrix's vaues in that location
	 */
	public function get(x:Int, y:Int):Float {
		#if !docgen
		Assert.assert(x >= 0 && x < 4);
		Assert.assert(y >= 0 && y < 4);
		return buffer[(y * 4) + x];
		#end
	}

	/**
	 * Set a value in the matrix
	 * @param x the column to set
	 * @param y the row to set
	 * @param v The vaue to set
	 */
	public function set(x:Int, y:Int, v:Float) {
		#if !docgen
		Assert.assert(x >= 0 && x < 4);
		Assert.assert(y >= 0 && y < 4);
		buffer[(y * 4) + x] = v;
		#end
	}

	/**
	 * Matrix multiplication
	 * @param  B the other matrix to multiply by
	 * @return   the resulting matrix
	 */
	public function multiplyMatrix(B:Matrix4x4):Matrix4x4 {
		var ret:Matrix4x4 = new Matrix4x4();
		for(i in 0...4) {
			for(j in 0...4) {
				var s:Float = 0;
				for(k in 0...4) {
					s += this.get(i, k) * this.get(k, j);
				}
				ret.set(j, i, s);
			}
		}
		return ret;
	}

	/**
	 * Called by the haxe serializer when serializing.
	 * @param the haxe serializer
	 */
	@:keep
	function hxSerialize(s:Serializer) {
		var arr:Array<Float> = new Array<Float>();
		for(i in 0...16) {
			arr.push(buffer[i]);
		}
		s.serialize(arr);
	}

	/**
	 * Called by the haxe serializer when unserializing.
	 * @param the haxe unserializer
	 */
	@:keep
	function hxUnserialize(u:Unserializer) {
		var arr:Array<Float> = u.unserialize();
		buffer = new Float32Array(arr);
	}
}