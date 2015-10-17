package tusk;

/**
 * Base class for all processors ('systems')
 */
class Processor {
	/**
	 * The processor's matcher
	 */
	public var matcher(default, null):Matcher;

	/**
	 * Whether or not the processor is currently enabled
	 */
	public var enabled(default, set):Bool = true;
	function set_enabled(enabled:Bool):Bool {
		if(this.enabled != enabled) {
			this.enabled = enabled;
			if(this.enabled) {
				onEnabled();
			}
			else {
				onDisabled();
			}
		}
		return this.enabled;
	}

	/**
	 * Create a new processor with the given matcher
	 * @param  matcher the matcher
	 */
	public function new(matcher:Matcher) {
		this.matcher = matcher;
	}
	
	/**
	 * Override to hook into the event when an entity is added to the system
	 * @param  entity the entity that was just added
	 */
	inline public function onEntityAdded(entity:Entity):Void {
		
	}
	
	/**
	 * Override to hook into the event when an entity is removed from the system
	 * @param  entity the entity that was just removed
	 */
	inline public function onEntityRemoved(entity:Entity):Void {
		
	}
	
	/**
	 * Override to hook into the `update` event
	 * @param  entities<Entity> the list of entities that match this system
	 */
	public function update(entities:Array<Entity>):Void {
		
	}

	/**
	 * Override to hook into the event sent when this processor is re-enabled
	 */
	inline public function onEnabled():Void {

	}


	/**
	 * Override to hook into the event sent when this processor is disabled
	 */
	inline public function onDisabled():Void {

	}
	
	/**
	 * Override to hook into the event when the system is destroyed
	 */
	inline public function onDestroy():Void {
		
	}
}