package tusk.lib.comp;

import tusk.Component;

/**
 * A tŭsk standard libary component for defining a mesh
 */
class MeshComponent extends Component {
	public var path:String;

	public function new(path:String) {
		this.path = path;
		super();
	}
}