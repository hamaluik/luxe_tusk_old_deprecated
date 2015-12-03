package tusk.lib.comp;

import tusk.Component;
import promhx.Deferred;
import promhx.Promise;

class TimedPromiseComponent extends Component {
	public var t:Float = 0;
	public var wait:Float = 0;
	@:dontSerialize
	private var onDone:Deferred<Bool>;
	@:dontSerialize
	public var done:Promise<Bool>;

	public function new(wait:Float) {
		this.wait = wait;
		onDone = new Deferred<Bool>();
		done = onDone.promise();
		super();
	}

	public function reset() {
		if(onDone.isResolved()) {
			onDone = new Deferred<Bool>();
			done = onDone.promise();
		}
	}

	public function finish() {
		onDone.resolve(true);
	}
}