package tusk;

/**
 * Base class for all components.
 */
@:autoBuild(tusk.macros.AutoSerializer.apply())
@:autoBuild(tusk.macros.ComponentIndexer.index())
class Component {
	public function new() {}
}