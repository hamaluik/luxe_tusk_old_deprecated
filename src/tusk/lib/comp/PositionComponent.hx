package tusk.lib.comp;

import tusk.Component;
import tusk.math.Vec3;

/**
 * A tŭsk standard libary component for defining a position
 */
class PositionComponent extends Component {
	public var lastPosition:Vec3 = new Vec3();
	public var position:Vec3 = new Vec3();

	public function new(position:Vec3) {
		this.position = position;
		super();
	}
}