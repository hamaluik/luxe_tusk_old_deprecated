package proc;

import tusk.Tusk;
import tusk.Entity;
import tusk.Matcher;
import tusk.Processor;
import comp.KeyNavigatorComponent;
import comp.MovementAxisComponent;
import tusk.events.UpdateEvent;

class KeyAxisProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(KeyNavigatorComponent.tid).include(MovementAxisComponent.tid);
		super(entities);
	}

	override public function onUpdate(event:UpdateEvent) {
		for(entity in entities) {
			var kn:KeyNavigatorComponent = cast entity.get(KeyNavigatorComponent.tid);
			var ma:MovementAxisComponent = cast entity.get(MovementAxisComponent.tid);

			ma.axis.set(0, 0);
			if(Tusk.instance.app.input.keydown(kn.up)) ma.axis.y += 1;
			if(Tusk.instance.app.input.keydown(kn.down)) ma.axis.y -= 1;
			if(Tusk.instance.app.input.keydown(kn.right)) ma.axis.x += 1;
			if(Tusk.instance.app.input.keydown(kn.left)) ma.axis.x -= 1;
		}
	}
}