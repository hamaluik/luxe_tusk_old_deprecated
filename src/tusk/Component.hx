package tusk;

/**
 * Base class for all components.
 */
@:autoBuild(tusk.macros.AutoSerializer.apply())
class Component {
	/**
	 * Whether or a not a component is enabled
	 */
	public var enabled(default, set):Bool = true;
	function set_enabled(enabled:Bool):Bool {
		return this.enabled = enabled;
	}

	public function new() {}
}