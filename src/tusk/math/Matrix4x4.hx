package tusk.math;

import tusk.debug.Assert;

import haxe.Serializer;
import haxe.Unserializer;

#if snow
import snow.api.buffers.Float32Array;
#else
@:dox(hide)
abstract Float32Array(Array<Float>) from Array<Float> to Array<Float> {
    public inline function new(?elements:Int, ?array:Array<Float>) {
    	if(elements != null) {
    		this = new Array<Float>();
    		for(i in 0...16) {
    			this.push(0);
    		}
    	}
    	else {
    		this = array;
    	}
    }
    @:arrayAccess inline function get(idx:Int):Float { return this[idx]; }
    @:arrayAccess inline function set(idx:Int, val:Float) { this[idx] = val; }
}
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
		if(array != null) {
			Assert.assert(array.length == 16);
			buffer = new Float32Array(array);
		}
		else {
			buffer = new Float32Array(16);
		}
	}

	/**
	 * Get a value from the matrix
	 * @param x the column to set
	 * @param y the row to set
	 * @return  the matrix's vaues in that location
	 */
	public function get(x:Int, y:Int):Float {
		Assert.assert(x >= 0 && x < 4);
		Assert.assert(y >= 0 && y < 4);
		return buffer[(y * 4) + x];
	}

	/**
	 * Set a value in the matrix
	 * @param x the column to set
	 * @param y the row to set
	 * @param v The vaue to set
	 */
	public function set(x:Int, y:Int, v:Float) {
		Assert.assert(x >= 0 && x < 4);
		Assert.assert(y >= 0 && y < 4);
		buffer[(y * 4) + x] = v;
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