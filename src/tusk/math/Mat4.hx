package tusk.math;

/**
 * Utility class for dealing with 4x4 matrices
 * 
 * @see https://github.com/Ohmnivore/ChopEngine/blob/master/src/chop/math/Mat4.hx
 */
abstract Mat4(Array<Float>) {
	public function new(?elements:Array<Float>) {
		if(elements == null) {
			var arr:Array<Float> = new Array<Float>();
			for(i in 0...16) {
				arr.push(0);
			}
			this = arr;
		}
		else {
			fromArray(elements);
		}
	}

	inline public function fromArray(elements:Array<Float>):Mat4 {
		if(elements.length != 16) {
			throw new tusk.debug.Exception("Mat4 must be constructed with
				either no elements, or exactly 16!", true);
		}
		this = elements;
		return cast this;
	}

	inline public function get(i:Int, j:Int):Float {
		return this[(i * 4) + j];
	}

	inline public function set(i:Int, j:Int, x:Float):Float {
		return this[(i * 4) + j] = x;
	}

	public function zero():Mat4 {
		for(i in 0...16) {
			this[i] = 0;
		}
		return cast this;
	}

	public function clone():Mat4 {
		var copy:Mat4 = new Mat4();
		for(i in 0...16) {
			copy[i] = this[i];
		}
		return copy;
	}

	public function identity():Mat4 {
		for(i in 0...4) {
			for(j in 0...4) {
				set(i, j, i == j ? 1 : 0);
			}
		}
		return cast this;
	}

	public function transpose():Mat4 {
		// cache the top right half
		var a01:Float = get(0, 1);
		var a02:Float = get(0, 2);
		var a03:Float = get(0, 3);
		var a12:Float = get(1, 2);
		var a13:Float = get(1, 3);
		var a23:Float = get(2, 3);

		// transpose the bottom left to the top right
		set(0, 1, get(1, 0));
		set(0, 2, get(2, 0));
		set(0, 3, get(3, 0));
		set(1, 2, get(2, 1));
		set(1, 3, get(3, 1));
		set(2, 3, get(3, 2));

		// transpose the cached top right to the bottom left
		set(1, 0, a01);
		set(2, 0, a02);
		set(3, 0, a03);
		set(2, 1, a12);
		set(3, 1, a13);
		set(3, 2, a23);

		return cast this;
	}

	/**
	 * Multiplies `this` by `b`
	 * @param  b The matrix to multiply by
	 * @return   `b` ✕ `this`
	 */
	public function multiply(b:Mat4):Mat4 {
		var a00:Float = this[0]; var a01:Float = this[1]; var a02:Float = this[2]; var a03:Float = this[3];
		var a10:Float = this[4]; var a11:Float = this[5]; var a12:Float = this[6]; var a13:Float = this[7];
		var a20:Float = this[8]; var a21:Float = this[9]; var a22:Float = this[10]; var a23:Float = this[11];
		var a30:Float = this[12]; var a31:Float = this[13]; var a32:Float = this[14]; var a33:Float = this[15];

		this[0] = b[0]*a00 + b[1]*a10 + b[2]*a20 + b[3]*a30;
		this[1] = b[0]*a01 + b[1]*a11 + b[2]*a21 + b[3]*a31;
		this[2] = b[0]*a02 + b[1]*a12 + b[2]*a22 + b[3]*a32;
		this[3] = b[0]*a03 + b[1]*a13 + b[2]*a23 + b[3]*a33;

		this[4] = b[4]*a00 + b[5]*a10 + b[6]*a20 + b[7]*a30;
		this[5] = b[4]*a01 + b[5]*a11 + b[6]*a21 + b[7]*a31;
		this[6] = b[4]*a02 + b[5]*a12 + b[6]*a22 + b[7]*a32;
		this[7] = b[4]*a03 + b[5]*a13 + b[6]*a23 + b[7]*a33;

		this[8] = b[8]*a00 + b[9]*a10 + b[10]*a20 + b[11]*a30;
		this[9] = b[8]*a01 + b[9]*a11 + b[10]*a21 + b[11]*a31;
		this[10] = b[8]*a02 + b[9]*a12 + b[10]*a22 + b[11]*a32;
		this[11] = b[8]*a03 + b[9]*a13 + b[10]*a23 + b[11]*a33;

		this[12] = b[12]*a00 + b[13]*a10 + b[14]*a20 + b[15]*a30;
		this[13] = b[12]*a01 + b[13]*a11 + b[14]*a21 + b[15]*a31;
		this[14] = b[12]*a02 + b[13]*a12 + b[14]*a22 + b[15]*a32;
		this[15] = b[12]*a03 + b[13]*a13 + b[14]*a23 + b[15]*a33;

		return cast this;
	}

	public function translate(x:Float=0, y:Float=0, z:Float=0):Mat4 {
		this[12] = this[0] * x + this[4] * y + this[8] * z +  this[12];
		this[13] = this[1] * x + this[5] * y + this[9] * z +  this[13];
		this[14] = this[2] * x + this[6] * y + this[10] * z + this[14];
		this[15] = this[3] * x + this[7] * y + this[11] * z + this[15];

		return cast this;
	}

	@:op(A * B)
	public static inline function multiplyOp(a:Mat4, b:Mat4):Mat4 {
		return a.clone().multiply(b);
	}

	@:arrayAccess public inline function arrayGet(i:Int):Float {
		return this[i];
	}

	@:arrayAccess public inline function arraySet(i:Int, x:Float):Float {
		return this[i] = x;
	}

	#if snow
	public inline function toFloat32Array():snow.api.buffers.Float32Array {
		return new snow.api.buffers.Float32Array(this);
	}
	#end
}