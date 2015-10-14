package tusk;

import tusk.Log.*;

@:autoBuild(tusk.macros.GameEvents.connect())
class Game {
	@:allow(TuskApp)
	private inline function new() {}

	// these will get replaced by a macro in the child classes
	public function ___connectRoutes() {}

	// override to change the title
	public var title(get, null):String;
	public function get_title():String {
		return "Unbranded Tusk Game";
	}

	// override to go!
	public function onStart(data:Events.Start) {}
	public function onDestroy() {}
}