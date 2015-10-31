package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Mesh;
import tusk.resources.Material;

/**
 * A tŭsk standard libary component for defining a mesh
 */
class MeshComponent extends Component {
	public var meshPath:String;
	public var materialPath:String;
	@:dontSerialize
	public var mesh:Mesh;
	@:dontSerialize
	public var material:Material;

	public function new(meshPath:String, materialPath:String) {
		this.meshPath = meshPath;
		this.materialPath = materialPath;
		super();
	}
}