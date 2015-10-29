package tusk.resources;

class Asset {
	/**
	 * The asset's path, used as its identifier
	 */
	public var path(default, null):String;

	public function new(path:String) {
		this.path = path;
	}
}