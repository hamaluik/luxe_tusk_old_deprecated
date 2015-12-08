package tusk.events;

/**
 * Passed to handles when the update event is called
 */
class UpdateEvent extends Event {
	/**
	 * The time between frames, in seconds
	 */
	public var dt:Float;
	
	public function new(dt:Float) {
		this.dt = dt;
		super();
	}
}