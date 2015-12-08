package tusk.events;

/**
 * Passed to handles when the engine has loaded
 */
class LoadEvent extends Event {
	public var scene:tusk.Scene;

	public function new(scene:tusk.Scene) {
		this.scene = scene;
		super();
	}
}