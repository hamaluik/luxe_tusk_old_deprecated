package tusk.events;

import glm.Vec2;

class MouseButtonEvent extends Event {
	public var pos:Vec2;
	public var button:Int;
	
	public function new(x:Int, y:Int, button:Int) {
		this.pos = new Vec2(x, y);
		this.button = button;
		super();
	}
}