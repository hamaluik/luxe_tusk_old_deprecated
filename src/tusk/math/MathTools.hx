package tusk.math;

/**
 * Various tools used to extend functionality in math
 */
class MathTools {
	/**
	 * "Clamp" a number to a specific range so that is never less than `min` nor greater than `max`
	 * @param  x   The number to clamp
	 * @param  min The minimum value that can be returned
	 * @param  max The maximum value that can be returned
	 * @return     The clamped number
	 */
	public static function clamp(x:Float, min:Float, max:Float):Float {
		return Math.min(max, Math.max(min, x));
	}

	/**
	 * Convert an angle in radians to its equivalent in degrees
	 * @param  x The angle to convert
	 * @return   The angle in degrees
	 */
	public static function toDeg(x:Float):Float {
		return x * 180 / Math.PI;
	}


	/**
	 * Convert an angle in degrees to its equivalent in radians
	 * @param  x The angle to convert
	 * @return   The angle in radians
	 */
	public static function toRad(x:Float):Float {
		return x * Math.PI / 180;
	}

	/**
	 * Get the absolute value of a number
	 * @param  x The number to process
	 * @return   `|x|`
	 */
	public static function abs(x:Float):Float {
		return Math.abs(x);
	}
}