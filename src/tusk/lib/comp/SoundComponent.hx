package tusk.lib.comp;

import tusk.PromiseComponent;
import tusk.resources.Sound;

/**
 * A tusk standard libary component for defining a sound
 */
class SoundComponent extends PromiseComponent {
	public var play:Bool = false;
	public var stop:Bool = false;

	public var playing:Bool = false;
	public var path:String = "";

	public function new(path:String, play:Bool) {
		this.path = path;
		this.play = play;
		super();
	}
}