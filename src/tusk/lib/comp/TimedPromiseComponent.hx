package tusk.lib.comp;

import tusk.PromiseComponent;
import promhx.Deferred;
import promhx.Promise;

class TimedPromiseComponent extends PromiseComponent {
	public var t:Float = 0;
	public var wait:Float = 0;

	public function new(wait:Float) {
		this.wait = wait;
		super();
	}
}