package tusk;

import tusk.debug.Log;
import tusk.events.*;

/**
 * The Game class is meant to be overridden by your game class
 */
@:autoBuild(tusk.macros.EventConnector.connect())
class Game {
	/**
	 * The title of the game
	 * 
	 * Override this to set the title of your game
	 */
	public var title(get, null):String;
	public function get_title():String {
		return "Unbranded Tusk Game";
	}

	/**
	 * All the processors used in the game
	 */
	public var processors:Array<Processor>;

	/**
	 * All the entities in the game
	 */
	public var entities:Array<Entity>;

	public function new() {
		processors = new Array<Processor>();
		entities = new Array<Entity>();
	}

	/**
	 * These will be replaced by a macro
	 */
	@:dox(hide)
	public function ___connectRoutes() {}
	@:dox(hide)
	public function ___disconnectRoutes() {}

	/**
	 * Checks whether the given processor exists or not
	 * @param  type<Processor> The class of the processor
	 * @return                 A boolean indicating its existence in the game
	 */
	/*function processorExists(type:Class<Processor>):Bool {
		//return processors.filter(function(p:Processor):Bool{ return Type.getClass(p) == type; }).length > 0;
		for(processor in processors) {
			if(Type.getClass(processor) == type) {
				return true;
			}
		}
		return false;
	}*/

	function hasProcessor(processor:Processor):Bool {
		return processors.indexOf(processor) > -1;
	}

	/**
	 * Adds the given processor to the list of processors
	 * @param  processor [description]
	 * @return           [description]
	 */
	// todo: allow multiple processors of the same type
	function useProcessor(processor:Processor) {
		if(hasProcessor(processor)) {
			throw new tusk.debug.Exception("Can't add processor '" + Type.getClassName(Type.getClass(processor)) + "' because it already exists!");
		}
		processor.___connectRoutes();
		processors.push(processor);
	}

	/**
	 * Get a processor by its type
	 * @param  type<Processor> The `Class` of the processor to get
	 * @return                 The instance of the processor
	 */
	function getProcessor(type:Class<Processor>):Processor {
		for(processor in processors) {
			if(Type.getClass(processor) == type) {
				return processor;
			}
		}
		return null;
	}

	/**
	 * Override to hook into when the application is ready
	 * @param  data The data supplied by the event caller
	 */
	public function onLoad(data:LoadEvent) {}

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
}