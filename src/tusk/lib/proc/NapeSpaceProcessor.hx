package tusk.lib.proc;

#if nape

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class NapeSpaceProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(NapeSpaceComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(event:UpdateEvent):Void {
		for(entity in entities) {
			var sc:NapeSpaceComponent = cast entity.get(NapeSpaceComponent.tid);
			sc.space.step(event.dt);
		}
	}
}

#end