package comp;

import tusk.Component;
import glm.Vec2;

class MovementAxisComponent extends Component {
	public var axis:Vec2 = new Vec2(0, 0);

	public function new() {
		super();
	}
}