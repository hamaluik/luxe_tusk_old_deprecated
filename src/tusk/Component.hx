package tusk;

/**
 * Base class for all components.
 */
@:autoBuild(tusk.macros.AutoSerializer.apply())
@:autoBuild(tusk.macros.ComponentIndexer.index())
class Component {
	/**
	 * The ID type of the component class
	 */
	public static var tid(default, null):Int = -1;

	/**
	 * The ID type of the component's class
	 */
	public var _tid(get, null):Int;
	public function get__tid():Int { return Component.tid; };

	/**
	 * Empty constructor
	 */
	public function new() {}
}