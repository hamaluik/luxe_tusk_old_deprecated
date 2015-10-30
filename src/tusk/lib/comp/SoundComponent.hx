package tusk.lib.comp;

import tusk.Component;

/**
 * A tŭsk standard libary component for defining a camera projection matrix
 */
class SoundComponent extends Component {
	public var loaded:Bool = false;
	public var playing:Bool = false;
	public var path:String = "";

	public function new(path:String) {
		this.path = path;
		super();
	}
}