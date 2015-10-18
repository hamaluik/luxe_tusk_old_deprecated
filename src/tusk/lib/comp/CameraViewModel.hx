package tusk.lib.comp;

import tusk.Component;
import tusk.math.Matrix4x4;

/**
 * A tŭsk standard libary component for defining a camera's view model
 */
class CameraViewModel extends Component {
	/**
	 * The computed view model matrix
	 */
	var viewModelMatrix:Matrix4x4;

	/**
	 * Whether the view model matrix is dirt and needs to be recalculated or not
	 */
	var dirty:Bool;
}