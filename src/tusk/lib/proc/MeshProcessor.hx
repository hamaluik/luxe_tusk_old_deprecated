package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class MeshProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(MeshComponent.tid);
		super(entities);
	}

	override public function onEntityChanged(entity:Entity, event:Entity.ChangeEvent):Void {
		var add:Bool = switch(event) {
			case Entity.ChangeEvent.EntityAdded: true;
			case Entity.ChangeEvent.ComponentAdded(_): true;
			default: false;
		}
		if(add) {
			var mc:MeshComponent = cast entity.get(MeshComponent.tid);
			if(mc.mesh == null) {
				mc.mesh = Tusk.assets.getMesh(mc.meshPath);
			}
		}
	}
}