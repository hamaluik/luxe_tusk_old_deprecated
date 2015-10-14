package tusk;

import tusk.Log.*;
import tusk.Events;
import haxe.ds.IntMap;

typedef EventHandler = Dynamic->Void;

class EventRouter {
	private var handlers:IntMap<Array<EventHandler>> = new IntMap<Array<EventHandler>>();
	public function new() {}

	public function registerHandler(type:Events.EventType, handler:EventHandler) {
		if(!handlers.exists(type)) {
			handlers.set(type, new Array<EventHandler>());
		}
		handlers.get(type).push(handler);
	}

	public function unregisterHandler(type:Events.EventType, handler:EventHandler) {
		if(!handlers.exists(type)) return;
		handlers.get(type).remove(handler);
	}

	public function onEvent<T>(type:Events.EventType, data:T) {
		if(!handlers.exists(type)) return;
		var handlerArray:Array<EventHandler> = handlers.get(type);
		for(handler in handlerArray) {
			handler(data);
		}
	}
}