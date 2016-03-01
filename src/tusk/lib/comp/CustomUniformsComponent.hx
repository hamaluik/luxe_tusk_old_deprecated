package tusk.lib.comp;

class CustomUniformsComponent extends Component {
	public var setUniforms:Void->Void;

	public function new(setUniforms:Void->Void) {
		this.setUniforms = setUniforms;
		super();
	}
}