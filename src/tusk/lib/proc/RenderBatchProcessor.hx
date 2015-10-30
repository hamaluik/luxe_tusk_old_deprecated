package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class RenderBatchProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher();
		super(entities);
	}
}