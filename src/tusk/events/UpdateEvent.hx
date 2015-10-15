package tusk.events;

typedef UpdateEvent = {
	/**
	 * The time between frames, in seconds
	 */
	var dt:Float;

	/**
	 * The fraction between the 'current' and 'previous' states.
	 * **NOTE**: tusk uses fixed timesteps! That means you **will**
	 * have to use this parameter for displaying visuals, or things
	 * will definitely jerk around!
	 * @see http://gafferongames.com/game-physics/fix-your-timestep/
	 */
	var alpha:Float;
};