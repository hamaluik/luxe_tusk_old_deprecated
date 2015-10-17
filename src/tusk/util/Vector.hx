package tusk.util;

private class VectorRaw
{
	public var x:Float = 0;
	public var y:Float = 0;

	public function new(x:Float = 0, y:Float = 0) 
	{
		this.x = x;
		this.y = y;
	}
}

/**
 * 2D vector utility class
 */
@:forward(x, y)
abstract Vector(VectorRaw) from VectorRaw to VectorRaw
{
	/**
	 * Creates a new 2D vector
	 * @param  x the x-component
	 * @param  y the y-component
	 */
	public function new(x:Float = 0, y:Float = 0) 
	{
		this = new VectorRaw(x, y);
	}
	
	/**
	 * Shortcut for `Vector(0, 0)`
	 */
	public static var zero(get, never):Vector;
	private static inline function get_zero():Vector
	{
		return new Vector(0, 0);
	}
	
	/**
	 * The length of the vector
	 */
	public var length(get, never):Float;
	private inline function get_length():Float
	{
		return Math.sqrt((this.x * this.x) + (this.y * this.y));
	}
	
	/**
	 * The scaled version of the vector such that `vector.length == 1`
	 */
	public var normalized(get, never):Vector;
	private inline function get_normalized():Vector
	{
		var l:Float = length;
		if (l != 0)
			return new Vector(this.x / l, this.y / l);
		return new Vector(0, 0);
	}
	
	/**
	 * A vector perfectly perpendicular to the vector
	 */
	public var tangent(get, never):Vector;
	private inline function get_tangent():Vector
	{
		return new Vector(-this.y, this.x);
	}
	
	/**
	 * The un-square-rooted distance between two vectors
	 * @param  a vector a
	 * @param  b vector b
	 * @return   `(a.x - b.x)^2 + (a.y - b.y)^2`
	 */
	public static inline function squareDistance(a:Vector, b:Vector):Float
	{
		return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
	}
	
	/**
	 * @return indicator if the vector is zero-length
	 */
	public inline function isZero():Bool
	{
		return this.x == 0 && this.y == 0;
	}
	
	@:op(A * B)
	@:commutative
	/**
	 * Multiplies the vector components by a scalar value
	 * @param  a the vector
	 * @param  s a scalar value
	 * @return   the scaled vector
	 */
	public static inline function multiplyScalar(a:Vector, s:Float)
	{
		return new Vector(a.x * s, a.y * s);
	}
	
	@:op(A / B)
	/**
	 * Divides the vector components by a scalar value
	 * @param  a the vector
	 * @param  s a scalar value
	 * @return   the scaled vector
	 */
	public static inline function divideByScalar(a:Vector, s:Float)
	{
		return new Vector(a.x / s, a.y / s);
	}
	
	@:op(A + B)
	@:commutative
	/**
	 * Adds a scalar to the vector components
	 * @param  a the vector
	 * @param  b a scalar value
	 */
	public static inline function addScalar(a:Vector, b:Float)
	{
		return new Vector(a.x + b, a.y + b);
	}
	
	@:op(A - B)
	@:commutative
	/**
	 * Subtracts a scalar from the vector components
	 * @param  a the vector
	 * @param  b a scalar value
	 */
	public static inline function subtractScalar(a:Vector, b:Float)
	{
		return new Vector(a.x - b, a.y - b);
	}
	
	@:op(A + B)
	/**
	 * Adds the components of the two vectors
	 * @param  a vector a
	 * @param  b vector b
	 */
	public static inline function addVectors(a:Vector, b:Vector)
	{
		return new Vector(a.x + b.x, a.y + b.y);
	}
	
	@:op(A - B)
	/**
	 * Subtracts the components of the two vectors
	 * @param  a vector a
	 * @param  b vector b
	 */
	public static inline function subtractVectors(a:Vector, b:Vector)
	{
		return new Vector(a.x - b.x, a.y - b.y);
	}
	
	@:op(A * B)
	/**
	 * Calculates the [perpendicular] cross product between the two vectors
	 * @param  a vector a
	 * @param  b vector b
	 */
	public static inline function crossProduct(a:Vector, b:Vector):Float
	{
		return (a.x * b.y - a.y * b.x);
	}
	
	@:op(A % B)
	/**
	 * Vector dot product
	 * @param  a vector A
	 * @param  b vector B
	 * @return   `A.x * B.x + A.y * B.y`
	 */
	public static inline function dotProduct(a:Vector, b:Vector):Float
	{
		return a.x * b.x + a.y * b.y;
	}

	/**
	 * calculates a x (b x c)
	 * 
	 * note: (a x b) x c = -c x (a x b)
	 * 
	 * @param  a vector A
	 * @param  b vector B
	 * @param  c vector C
	 * @return   the resulting triple cross product
	 */
	public static inline function tripleCrossProduct(a:Vector, b:Vector, c:Vector):Vector
	{
		return new Vector(a.y * (b.x * c.y - b.y * c.x), -a.x * (b.x * c.y - b.y * c.x));
	}
	
	/**
	 * Rounds the components of the vector
	 * @param  a the vector
	 * @return   the rounded vector
	 */
	public static inline function roundToOne(a:Vector):Vector
	{
		return new Vector(Math.round(a.x), Math.round(a.y));
	}
	
	/**
	 * Converts the vector into a string
	 * @return a string in the format `[x, y]`
	 */
	public function toString():String
	{
		return "[" + this.x + ", " + this.y + "]";
	}
}