package comp;

import tusk.Component;
import tusk.events.KeyEvent.Key;
import glm.Vec2;

class KeyNavigatorComponent extends Component {
	public var up:Int = Key.key_w;
	public var right:Int = Key.key_d;
	public var down:Int = Key.key_s;
	public var left:Int = Key.key_a;

	public function new() {
		super();
	}
}