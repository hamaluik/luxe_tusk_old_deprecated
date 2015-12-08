package tusk.events;

/**
 * Passed to handles when the destroy event is called
 */
class DestroyEvent extends Event {
	public function new(scene:tusk.Scene) {
		this.scene = scene;
		super();
	}
	public var scene:tusk.Scene;
}