package tusk.events;

/**
 * Passed to handles when the render event is called
 */
class RenderEvent extends Event {
	/**
	 * The fraction between the 'current' and 'previous' states.
	 * **NOTE**: tusk uses fixed timesteps! That means you **will**
	 * have to use this parameter for displaying visuals, or things
	 * will definitely jerk around!
	 * @see http://gafferongames.com/game-physics/fix-your-timestep/
	 */
	public var alpha:Float;

	public function new(alpha:Float) {
		this.alpha = alpha;
		super();
	}
}