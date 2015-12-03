package tusk;

import tusk.debug.Log;
import tusk.events.*;

import haxe.ds.StringMap;

/**
 * The Game class is meant to be overridden by your game class
 */
class Game {
	/**
	 * The title of the game
	 * 
	 * Override this to set the title of your game
	 */
	public var title(get, null):String;
	public function get_title():String {
		return "Unbranded Tusk Game";
	}

	public var currentScenes:Array<Scene> = new Array<Scene>();

	public function new() {}
	public function setup() {}
}