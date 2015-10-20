package tusk.events;

/**
 * Passed to handles when the update event is called
 */
typedef UpdateEvent = {
	/**
	 * The time between frames, in seconds
	 */
	var dt:Float;
};