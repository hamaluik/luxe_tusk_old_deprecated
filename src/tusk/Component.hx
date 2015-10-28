package tusk;

/**
 * Base class for all components.
 */
@:autoBuild(tusk.macros.AutoSerializer.apply())
@:autoBuild(tusk.macros.ComponentIndexer.index())
class Component {
	public static var tid(default, null):Int = -1;
	public var _tid(get, null):Int;
	public function get__tid():Int { return Component.tid; };
	public function new() {}
}