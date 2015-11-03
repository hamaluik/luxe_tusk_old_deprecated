package tusk.lib.comp;

import tusk.Component;
import tusk.math.Mat4;

/**
 * A tŭsk standard libary component for defining a camera
 */
class CameraComponent extends Component {
	/**
	 * The computed projection matrix
	 */
	public var projectionMatrix:Mat4 = new Mat4();
	public var projectionMatrixDirty:Bool = true;

	/**
	 * The computed view model matrix
	 */
	public var viewModelMatrix:Mat4 = new Mat4();
	public var viewModelMatrixDirty:Bool = true;

	public var minX:Float;
	public var maxX:Float;
	public var minY:Float;
	public var maxY:Float;

	public var near:Float;
	public var far:Float;

	// TODO: orthogonal AND projection cameras!
	public var width:Float;
	public var height:Float;

	public function new(minX:Float=1, minY:Float=1, maxX:Float=1, maxY:Float=1, near:Float=0.1, far:Float=1000, width:Float=512, height:Float=512) {
		this.minX = minX;
		this.minY = minY;
		this.maxX = maxX;
		this.maxY = maxY;
		this.near = near;
		this.far  = far;
		this.width = width;
		this.height = height;
		super();
	}
}