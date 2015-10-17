package tusk.util;

/**
 * Static functions for generating random values
 */
class Random
{
	/**
	 * Flip a coin
	 * @return Random `true` or `false`
	 */
	public static inline function bool():Bool
	{
		return Math.random() < 0.5;
	}

	/**
	 * Return a random integer between 'from' and 'to', inclusive.
	 * @param  from The minimum value to return
	 * @param  to   The maximum value to return
	 * @return      The random result
	 */
	public static inline function int(from:Int, to:Int):Int
	{
		return from + Math.floor(((to - from + 1) * Math.random()));
	}

	/**
	 * Return a random float between 'from' and 'to', inclusive.
	 * @param  from The minimum value to return
	 * @param  to   The maximum value to return
	 * @return      The random result
	 */
	public static inline function float(from:Float, to:Float):Float
	{
		return from + ((to - from) * Math.random());
	}
}