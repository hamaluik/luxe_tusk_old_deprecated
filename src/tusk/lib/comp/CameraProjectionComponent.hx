package tusk.lib.comp;

import tusk.Component;
import tusk.math.Matrix4x4;

/**
 * A tŭsk standard libary component for defining a camera projection matrix
 */
class CameraProjectionComponent extends Component {
	/**
	 * The computed projection matrix
	 */
	public var projectionMatrix:Matrix4x4;

	/**
	 * Whether the projection matrix is dirt and needs to be recalculated or not
	 */
	public var dirty:Bool;

	public var _derp(get, null):Int;
	public function get__derp():Int { return 0; };
}