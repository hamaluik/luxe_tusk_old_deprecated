package tusk.lib.comp;

import tusk.Component;
import promhx.Deferred;

import glm.Vec2;

class CircleEffectComponent extends Component {
	public var t:Float = 0;
	public var circleIn:Bool = true;
	@:dontSerialize
	public var effectDone:Deferred<Bool>;

	public function new(circleIn:Bool) {
		effectDone = new Deferred<Bool>();
		this.circleIn = circleIn;
		super();
	}
}