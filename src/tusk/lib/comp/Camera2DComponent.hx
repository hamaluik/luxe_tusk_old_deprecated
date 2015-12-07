package tusk.lib.comp;

import tusk.Component;
import glm.Mat4;
import glm.Vec3;
import glm.Vec2;

/**
 * A tŭsk standard libary component for defining a camera
 */
class Camera2DComponent extends Component {
	/**
	 * The combined projection and view matrices for this camera
	 */
	@:dontSerialize
	public var projectionMatrix:Mat4 = new Mat4(1.0);
	public var projectionMatrixDirty:Bool = true;

	@:dontSerialize
	public var viewMatrix:Mat4 = new Mat4(1.0);
	public var viewMatrixDirty:Bool = true;

	public var min:Vec2;
	public var max:Vec2;

	public var near:Float;
	public var far:Float;

	public function new(min:Vec2, max:Vec2, near:Float=-100, far:Float=100) {
		this.min  = min;
		this.max  = max;
		this.near = near;
		this.far  = far;
		projectionMatrixDirty = true;
		viewMatrixDirty = true;
		super();
	}
}