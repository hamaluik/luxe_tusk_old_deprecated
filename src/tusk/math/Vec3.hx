package tusk.math;

/**
 * Utility class for dealing with 3D vectors
 */
abstract Vec3(Array<Float>) {
	public var x(get, set):Float;
	function get_x():Float {
		return this[0];
	}
	function set_x(v:Float) {
		return this[0] = v;
	}

	public var y(get, set):Float;
	function get_y():Float {
		return this[0];
	}
	function set_y(v:Float) {
		return this[0] = v;
	}

	public var z(get, set):Float;
	function get_z():Float {
		return this[0];
	}
	function set_z(v:Float) {
		return this[0] = v;
	}

	public var r(get, set):Float;
	function get_r():Float {
		return this[0];
	}
	function set_r(v:Float) {
		return this[0] = v;
	}

	public var g(get, set):Float;
	function get_g():Float {
		return this[0];
	}
	function set_g(v:Float) {
		return this[0] = v;
	}

	public var b(get, set):Float;
	function get_b():Float {
		return this[0];
	}
	function set_b(v:Float) {
		return this[0] = v;
	}

	public var i(get, set):Float;
	function get_i():Float {
		return this[0];
	}
	function set_i(v:Float) {
		return this[0] = v;
	}

	public var j(get, set):Float;
	function get_j():Float {
		return this[0];
	}
	function set_j(v:Float) {
		return this[0] = v;
	}

	public var k(get, set):Float;
	function get_k():Float {
		return this[0];
	}
	function set_k(v:Float) {
		return this[0] = v;
	}

	public function new(x:Float=0, y:Float=0, z:Float=0) {
		var arr:Array<Float> = new Array<Float>();
		arr.push(x);
		arr.push(y);
		arr.push(z);
		this = arr;
	}

	public function zero():Vec3 {
		for(i in 0...3) {
			this[i] = 0;
		}
		return cast this;
	}

	public function sqrLength():Float {
		return (this[0] * this[0]) + (this[1] * this[1]) + (this[2] * this[2]);
	}

	public function length():Float {
		return Math.sqrt(sqrLength());
	}

	public function clone():Vec3 {
		var copy:Vec3 = new Vec3();
		for(i in 0...3) {
			copy[i] = this[i];
		}
		return copy;
	}

	public function add(b:Vec3):Vec3 {
		this[0] += b[0];
		this[1] += b[1];
		this[2] += b[2];
		return cast this;
	}

	public function subtract(b:Vec3):Vec3 {
		this[0] -= b[0];
		this[1] -= b[1];
		this[2] -= b[2];
		return cast this;
	}

	public function cross(b:Vec3):Vec3 {
		
	}

	public function dot(b:Vec3):Vec3 {
		return (this[0] * b[0]) + (this[1] * b[1]) + (this[2] * b[2]);
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