package tusk.lib.comp;

import tusk.Component;

/**
 * A tŭsk standard libary component for defining a camera projection matrix
 */
class SoundComponent extends Component {
	public var playing:Bool = false;
	public var id:String = "";

	public function new(playing:Bool, id:String) {
		this.playing = playing;
		this.id = id;
		super();
	}
}