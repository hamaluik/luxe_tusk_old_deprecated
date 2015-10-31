package tusk.lib.comp;

import tusk.Component;
import tusk.math.Vector;

/**
 * A tŭsk standard libary component for defining a position
 */
class PositionComponent extends Component {
	public var lastPosition:Vector = Vector.zero;
	public var position:Vector = Vector.zero;

	public function new(position:Vector) {
		this.position = position;
		super();
	}
}