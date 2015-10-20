package tusk.events;

/**
 * Passed to handles when the render event is called
 */
typedef RenderEvent = {
	/**
	 * The fraction between the 'current' and 'previous' states.
	 * **NOTE**: tusk uses fixed timesteps! That means you **will**
	 * have to use this parameter for displaying visuals, or things
	 * will definitely jerk around!
	 * @see http://gafferongames.com/game-physics/fix-your-timestep/
	 */
	var alpha:Float;
};