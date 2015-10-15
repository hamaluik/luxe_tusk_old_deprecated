package tusk;

import tusk.Log.*;
import haxe.ds.IntMap;

@:enum abstract EventType(Int) from Int to Int {
	var Start    = 1;
	var Update   = 2;
	var Destroy  = 3;
}

typedef EventHandler = Dynamic->Void;

class EventRouter {
	private var handlers:IntMap<Array<EventHandler>> = new IntMap<Array<EventHandler>>();
	public function new() {}

	/**
	 * Use this function to start listening to events
	 * @param type    what type of event to register the handler for
	 * @param handler function that will be called when event `type` happens
	 */
	public function registerHandler(type:EventType, handler:EventHandler):Void {
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
	public function onEvent<T>(type:EventType, data:T) {
		if(!handlers.exists(type)) return;
		var handlerArray:Array<EventHandler> = handlers.get(type);
		for(handler in handlerArray) {
			handler(data);
		}
	}
}