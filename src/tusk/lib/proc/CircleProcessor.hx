package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class CircleProcessor extends Processor {
	private static var theta:Float = 0;

	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(TransformComponent.tid).include(MeshComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			var t:TransformComponent = cast entity.get(TransformComponent.tid);

			// important: always store the position as the last position before
			// modifying the position!
			t.lastPosition = t.position;
			t.position.x = 128 * Math.cos(theta);
			t.position.y = 128 * Math.sin(theta);

			theta += data.dt;
		}
	}
}