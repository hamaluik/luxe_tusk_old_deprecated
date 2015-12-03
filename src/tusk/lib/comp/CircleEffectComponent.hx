package tusk.lib.comp;

import tusk.PromiseComponent;
import promhx.Deferred;

import glm.Vec2;

class CircleEffectComponent extends PromiseComponent {
	public var t:Float = 0;
	public var circleIn:Bool = true;

	public function new(circleIn:Bool) {
		this.circleIn = circleIn;
		super();
	}
}