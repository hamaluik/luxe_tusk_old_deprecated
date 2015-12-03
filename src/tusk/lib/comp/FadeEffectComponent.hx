package tusk.lib.comp;

import tusk.PromiseComponent;
import promhx.Deferred;

import glm.Vec2;

class FadeEffectComponent extends PromiseComponent {
	public var t:Float = 0;
	public var fadeIn:Bool = true;

	public function new(fadeIn:Bool) {
		this.fadeIn = fadeIn;
		super();
	}
}