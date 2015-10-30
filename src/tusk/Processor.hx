package tusk;

import tusk.events.*;

import haxe.Serializer;
import haxe.Unserializer;

/**
 * Base class for all processors ('systems')
 */
@:autoBuild(tusk.macros.EventConnector.connect())
class Processor {
	public var entities:Array<Entity>;

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
	 * These will be replaced by a macro
	 */
	@:dox(hide)
	public function ___connectRoutes() {}
	@:dox(hide)
	public function ___disconnectRoutes() {}

	/**
	 * Create a new processor with the given matcher
	 * @param  entities a list of all current entities in the game
	 */
	public function new(?entities:Array<Entity>) {
		if(entities != null) {
			this.entities = matcher.matchEntities(entities);
		}
		else {
			this.entities = new Array<Entity>();
		}
	}

	/**
	 * Override to hook into the event sent when this processor is re-enabled
	 */
	public function onEnabled():Void {}

	/**
	 * Override to hook into the event sent when this processor is disabled
	 */
	public function onDisabled():Void {}

	/**
	 * Override this to hook into the event when the game changes an entity
	 * @param  entity                  the entity that was changed
	 * @param  event.ChangeEvent       the event describing the change
	 */
	public function onEntityChanged(entity:Entity, event:Entity.ChangeEvent):Void {}

	/**
	 * Override to hook into when the application is ready
	 * @param  data The data supplied by the event caller
	 */
	public function onStart(data:StartEvent) {}

	/**
	 * Override to hook into when the application is being destroyed
	 * @param  data The data supplied by the event caller
	 */
	public function onDestroy(data:DestroyEvent) {}

	/**
	 * Override to hook into when the application's timer updates
	 * @param  data The data supplied by the event caller
	 */
	public function onUpdate(data:UpdateEvent) {}

	/**
	 * Override to hook into the render function
	 * @param  data The data supplied by the event caller
	 */
	public function onRender(data:RenderEvent) {}

	/**
	 * Called by the haxe serializer when serializing.
	 * @param the haxe serializer
	 */
	@:keep
	function hxSerialize(s:Serializer) {
		s.serialize(enabled);
	}

	/**
	 * Called by the haxe serializer when unserializing.
	 * @param the haxe unserializer
	 */
	@:keep
	function hxUnserialize(u:Unserializer) {
		enabled = u.unserialize();
	}
}