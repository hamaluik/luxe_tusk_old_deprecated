package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Material;

/**
 * A tŭsk standard libary component for defining a material
 */
class MaterialComponent extends Component {
	public var materialPath:String;
	@:dontSerialize
	public var material:Material;

	public function new(materialPath:String) {
		this.materialPath = materialPath;
		super();
	}
}