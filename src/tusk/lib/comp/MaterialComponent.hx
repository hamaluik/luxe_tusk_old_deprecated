package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Material;

/**
 * A tusk standard libary component for defining a material
 */
class MaterialComponent extends Component {
	public var path:String;
	@:dontSerialize
	public var material:Material;

	public function new(?path:String, ?material:Material) {
		this.path = material == null ? path : material.path;
		this.material = material;
		super();
	}
}