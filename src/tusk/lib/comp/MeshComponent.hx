package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Mesh;

/**
 * A tŭsk standard libary component for defining a mesh
 */
class MeshComponent extends Component {
	public var path:String;
	@:dontSerialize
	public var mesh:Mesh;

	public function new(path:String) {
		this.path = path;
		super();
	}
}