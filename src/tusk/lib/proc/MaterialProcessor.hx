package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class MaterialProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(MaterialComponent.tid);
		super(entities);
	}

	override public function onEntityChanged(entity:Entity, event:Entity.ChangeEvent):Void {
		var add:Bool = switch(event) {
			case Entity.ChangeEvent.EntityAdded: true;
			case Entity.ChangeEvent.ComponentAdded(_): true;
			default: false;
		}
		if(add) {
			var mc:MaterialComponent = cast entity.get(MaterialComponent.tid);
			if(mc.material == null) {
				mc.material = Tusk.assets.getMaterial(mc.materialPath);
			}
		}
	}
}