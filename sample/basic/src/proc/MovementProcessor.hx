package proc;

import tusk.Tusk;
import tusk.Entity;
import tusk.Matcher;
import tusk.Processor;
import comp.MovementAxisComponent;
import comp.MoveSpeedComponent;
import tusk.lib.comp.NapeAABBComponent;
import tusk.events.UpdateEvent;

class MovementProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(NapeAABBComponent.tid).include(MovementAxisComponent.tid).include(MoveSpeedComponent.tid);
		super(entities);
	}

	override public function onUpdate(event:UpdateEvent) {
		for(entity in entities) {
			var ma:MovementAxisComponent = cast entity.get(MovementAxisComponent.tid);
			var aabb:NapeAABBComponent = cast entity.get(NapeAABBComponent.tid);
			var ms:MoveSpeedComponent = cast entity.get(MoveSpeedComponent.tid);
			
			aabb.body.velocity.setxy(ma.axis.x * ms.speed, ma.axis.y * ms.speed);
		}
	}
}