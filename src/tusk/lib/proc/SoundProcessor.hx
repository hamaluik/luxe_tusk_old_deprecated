package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class SoundProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(SoundComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
	}
}