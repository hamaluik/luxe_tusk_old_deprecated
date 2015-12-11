package tusk.lib.comp;

import tusk.Component;
import glm.Quat;
import glm.Vec3;
import glm.Mat4;

/**
 * A tusk standard libary component for defining a transform
 */
class TransformComponent extends Component {
	// the current values
	public var position:Vec3 = new Vec3(0.0);
	public var rotation:Quat = Quat.identity();
	public var scale:Vec3 = new Vec3(1.0);

	// the most recent rendered values, for interpolation
	public var lastPosition:Vec3 = new Vec3(0.0);
	public var lastRotation:Quat = Quat.identity();
	public var lastScale:Vec3 = new Vec3(1.0);

	@:dontSerialize
	public var modelMatrix:Mat4 = new Mat4(1.0);
	//public var modelMatrixDirty:Bool = true;

	public function new(?position:Vec3, ?rotation:Quat, ?scale:Vec3) {
		if(position != null) this.position = position;
		if(rotation != null) this.rotation = rotation;
		if(scale != null) this.scale = scale;

		lastPosition = this.position;
		lastRotation = this.rotation;
		lastScale = this.scale;
		super();
	}
}