package tusk.math;

import haxe.Serializer;
import haxe.Unserializer;

class Vector {
	public var x:Float = 0;
	public var y:Float = 0;
	public var z:Float = 0;

	public function new(x:Float=0, y:Float=0, z:Float=0) {
		this.x = x;
		this.y = y;
		this.z = z;
	}
	
	/**
	 * Shortcut for `new Vector(0, 0, 0)`
	 */
	public static var zero(get, never):Vector;
	private static inline function get_zero():Vector
	{
		return new Vector();
	}

	/**
	 * The squared length of this vector, suitable for comparing
	 * vector lengths when their actual lengths are not required to
	 * save processing time.
	 */
	public var sqrLength(get, never):Float;
	private inline function get_sqrLength():Float {
		return (this.x * this.x) + (this.y * this.y) + (this.z * this.z);
	}
	
	/**
	 * The length of the vector
	 */
	public var length(get, never):Float;
	private inline function get_length():Float {
		return Math.sqrt(sqrLength);
	}

	/**
	 * Normalize this vector
	 * @return `this`, but normalized to a length of 1
	 */
	public inline function normalize():Vector {
		var l:Float = length;
		if(l != 0) {
			x /= l;
			y /= l;
			z /= l;
		}
		else {
			x = 0;
			y = 0;
			z = 0;
		}
		return this;
	}

	/**
	 * Adds a constant value to `this`
	 * @param  scalar the scalar to add
	 * @return        `this`
	 */
	public inline function addScalar(scalar:Float):Vector {
		x += scalar;
		y += scalar;
		z += scalar;
		return this;
	}

	/**
	 * Subtracts a constant value from `this`
	 * @param  scalar the scalar to subtract
	 * @return        `this`
	 */
	public inline function subtractScalar(scalar:Float):Vector {
		x -= scalar;
		y -= scalar;
		z -= scalar;
		return this;
	}

	/**
	 * Multiplies `this` by a constant value
	 * @param  scalar the scalar to multiply by
	 * @return        `this`
	 */
	public inline function multiplyScalar(scalar:Float):Vector {
		x *= scalar;
		y *= scalar;
		z *= scalar;
		return this;
	}

	/**
	 * Divides `this` by a constant value
	 * @param  scalar the scalar to divide by
	 * @return        `this`
	 */
	public inline function divideScalar(scalar:Float):Vector {
		x /= scalar;
		y /= scalar;
		z /= scalar;
		return this;
	}

	/**
	 * Called by the haxe serializer when serializing.
	 * @param the haxe serializer
	 */
	@:keep
	function hxSerialize(s:Serializer) {
		s.serialize(x);
		s.serialize(y);
		s.serialize(z);
	}

	/**
	 * Called by the haxe serializer when unserializing.
	 * @param the haxe unserializer
	 */
	@:keep
	function hxUnserialize(u:Unserializer) {
		x = u.unserialize();
		y = u.unserialize();
		z = u.unserialize();
	}
	
	/**
	 * Converts the vector into a string
	 * @return a string in the format `[x, y, z]`
	 */
	public function toString():String
	{
		return "[" + this.x + ", " + this.y + ", " + this.z + "]";
	}
}