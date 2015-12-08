package tusk.events;

import glm.Vec2;

class MouseMoveEvent extends Event {
	public var pos:Vec2;
	public var delta:Vec2;
	
	public function new(x:Int, y:Int, xrel:Int, yrel:Int) {
		this.pos = new Vec2(x, y);
		this.delta = new Vec2(xrel, yrel);
		super();
	}
}