package tusk;

class Game {
	public var title(get, null):String;

	// override to change the title
	public function get_title():String {
		return "Unbranded Tusk Game";
	}

	public function new() {}

	// override to go!
	public function onStart() {}
	public function onDestroy() {}
}