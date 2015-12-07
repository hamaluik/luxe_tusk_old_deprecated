package tusk.resources;

class Text extends Asset {
	public var text:String;

	public function new(path:String, ?text:String) {
		super(path);
		this.text = text;
	}
}