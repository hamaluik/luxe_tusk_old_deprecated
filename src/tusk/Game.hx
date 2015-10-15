package tusk;

import tusk.Log.*;
import tusk.events.*;

/**
 * The Game class is meant to be overridden by your game class
 */
@:autoBuild(tusk.macros.GameEvents.connect())
class Game {
	@:allow(TuskApp)
	private inline function new() {}

	/**
	 * This will be replaced by a macro
	 */
	@:dox(hide)
	public function ___connectRoutes() {}

	/**
	 * The title of the game
	 */
	public var title(get, null):String;

	/**
	 * Override this to set the title of your game
	 * @return the title of the game
	 */
	public function get_title():String {
		return "Unbranded Tusk Game";
	}

	/**
	 * Override to hook into when the application is ready
	 * @param  data The data supplied by the event caller
	 */
	public function onStart(data:StartEvent) {}

	/**
	 * Override to hook into when the application is being destroyed
	 * @param  data The data supplied by the event caller
	 */
	public function onDestroy(data:DestroyEvent) {}

	/**
	 * Override to hook into when the application's timer updates
	 * @param  data The data supplied by the event caller
	 */
	public function onUpdate(data:UpdateEvent) {}
}