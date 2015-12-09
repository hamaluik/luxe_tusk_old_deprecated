package tusk.lib.proc;

#if nape

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class NapeTransformUpdateProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(NapeRectComponent.tid).include(TransformComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(event:UpdateEvent):Void {
		for(entity in entities) {
			var tc:TransformComponent = cast entity.get(TransformComponent.tid);
			var nr:NapeRectComponent = cast entity.get(NapeRectComponent.tid);

			tc.lastPosition = tc.position;
			tc.position = new glm.Vec3(nr.body.position.x, nr.body.position.y, tc.position.z);
		}
	}
}

#end