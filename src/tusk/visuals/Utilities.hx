package tusk.visuals;

#if !docgen
import snow.api.buffers.Float32Array;
#else
import tusk.visuals.Material.Float32Array;
#end

/**
 * Various utilities for rendering such as creating matrices
 */
class Utilities {
	/**
	 * @param x0    The left-most bound (typically `0`)
	 * @param y0    The top-most bound (typically `0`)
	 * @param x1    The right-most bound (typically `screen.width`)
	 * @param y1    The bottom-most bound (typically `screen.height`)
	 * @param zNear The near clipping plane
	 * @param zFar  The far clipping plane
	 * @return An orthographic projection matrix
	 */
	public static function createOrthoMatrix(x0:Float, y0:Float, x1:Float, y1:Float, zNear:Float, zFar:Float):Float32Array {
		#if !docgen
		var sx = 1.0 / (x1 - x0);
		var sy = 1.0 / (y1 - y0);
		var sz = 1.0 / (zFar - zNear);

		return new Float32Array([
			2.0*sx,         0,              0,                  0,
			0,              2.0*sy,         0,                  0,
			0,              0,              -2.0*sz,            0,
			- (x0+x1)*sx,   - (y0+y1)*sy,   - (zNear+zFar)*sz,  1,
		]);
		#else
		return new Float32Array();
		#end
	}

	/**
	 * @param x     The x coordinate of the 'camera'
	 * @param y     The y coordinate of the 'camera'
	 * @param scale The 'camera' scale
	 * @param theta The 'camera' rotation
	 * @return A view matrix representing a 2D 'camera'
	 */
	public static function create2DModelViewMatrix(x:Float, y:Float, scale:Float = 1, theta:Float = 0):Float32Array {
		#if !docgen
		var c = Math.cos(theta);
		var s = Math.sin(theta);

		return new Float32Array([
			c*scale,  -s*scale,     0,      0,
			s*scale,  c*scale,      0,      0,
			0,        0,            1,      0,
			x,        y,            0,      1
		]);
		#else
		return new Float32Array();
		#end
	}
}