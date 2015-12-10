package comp;

import tusk.Component;
import glm.Vec2;

class MoveSpeedComponent extends Component {
	public var speed:Float;

	public function new(speed:Float=128) {
		this.speed = speed;
		super();
	}
}