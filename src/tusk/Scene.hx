package tusk;

import tusk.debug.Log;
import tusk.events.*;

import promhx.Deferred;

#if editor
import tusk.editor.EditorEvent;
#end

@:autoBuild(tusk.macros.EventConnector.connect())
class Scene {
	public var name(default, null):String = null;

	public var sceneDone:Deferred<Scene>;

	/**
	 * All the processors used in the scene
	 */
	public var processors:Array<Processor>;

	/**
	 * All the entities in the scene
	 */
	public var entities:Array<Entity>;

    #if editor
    public var entitiesChanged:EditorEvent = new EditorEvent();
    #end

	public function new(?name:String) {
		this.name = name;
		processors = new Array<Processor>();
		entities = new Array<Entity>();

		#if editor
		entitiesChanged.trigger();
		#end
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
	 * @param  processor the processor
	 * @return          A boolean indicating its existence in the game
	 */
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
	 * @param  event The event supplied by the event caller
	 */
	public function onLoad(event:LoadEvent) {}

	/**
	 * Override to hook into when the application is being destroyed
	 * @param  event The event supplied by the event caller
	 */
	public function onDestroy(event:DestroyEvent) {}

	/**
	 * Override to hook into when the application's timer updates
	 * @param  event The event supplied by the event caller
	 */
	public function onUpdate(event:UpdateEvent) {}

	/**
	 * Override to hook into the render function
	 * @param  event The event supplied by the event caller
	 */
	public function onRender(event:RenderEvent) {}

	/**
	 * Override to react to when a key is pressed
	 * @param  event The event supplied by the event caller
	 */
	public function onKeyDown(event:KeyEvent) {}

	/**
	 * Override to react to when a key is released
	 * @param  event The event supplied by the event caller
	 */
	public function onKeyUp(event:KeyEvent) {}

	/**
	 * Override to react to when a mouse button is pressed
	 * @param  event The event supplied by the event caller
	 */
	public function onMouseDown(event:MouseButtonEvent) {}

	/**
	 * Override to react to when a mouse button is released
	 * @param  event The event supplied by the event caller
	 */
	public function onMouseUp(event:MouseButtonEvent) {}

	/**
	 * Override to react to when the mouse is moved
	 * @param  event The event supplied by the event caller
	 */
	public function onMouseMove(event:MouseMoveEvent) {}
}