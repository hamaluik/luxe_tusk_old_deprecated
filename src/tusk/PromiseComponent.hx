package tusk;

import tusk.Component;
import promhx.Deferred;
import promhx.Promise;

class PromiseComponent extends Component {
	@:dontSerialize
	private var onDone:Deferred<Bool>;
	@:dontSerialize
	public var done:Promise<Bool>;

	public function new() {
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
		if(!onDone.isResolved()) onDone.resolve(true);
	}
}