package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class TimedPromiseProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(TimedPromiseComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			var t:TimedPromiseComponent = cast entity.get(TimedPromiseComponent.tid);

			t.t += data.dt;
			if(t.t >= t.wait && !t.done.isResolved()) {
				t.finish();
			}
		}
	}
}