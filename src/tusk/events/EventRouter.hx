package tusk.events;

import tusk.debug.Exception;
import tusk.debug.Log.*;
import haxe.ds.EnumValueMap;
import tusk.events.*;

/**
 * This class sends events to connected listeners. Listeners can
 * connect by registering themselves as handlers.
 */
class EventRouter {
	private var handlers:EnumValueMap<EventType, Array<EventHandler>> = new EnumValueMap<EventType, Array<EventHandler>>();
	public function new() {}

	/**
	 * Use this function to start listening to events
	 * @param type    what type of event to register the handler for
	 * @param handler function that will be called when event `type` happens
	 */
	public function registerHandler(type:EventType, handler:EventHandler):Void {
		if(handler == null) {
			throw new Exception('Event handler cannot be null!');
		}
		if(!handlers.exists(type)) {
			handlers.set(type, new Array<EventHandler>());
		}
		handlers.get(type).push(handler);
	}

	/**
	 * Use this function to stop listening to events
	 * @param type    what type of event to register the handler for
	 * @param handler function that will be called when event `type` happens
	 */
	public function unregisterHandler(type:EventType, handler:EventHandler) {
		if(!handlers.exists(type)) return;
		handlers.get(type).remove(handler);
	}

	/**
	 * Calling this function will fire events to all connected listeners
	 * @param type what type of event to register the handler for
	 * @param data           an Events typedef containing event information
	 */
	public function onEvent<T>(type:EventType, ?data:T) {
		if(!handlers.exists(type)) return;
		var handlerArray:Array<EventHandler> = handlers.get(type);
		for(handler in handlerArray) {
			handler(data);
		}
	}
}