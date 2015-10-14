package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;

@:noCompletion class GameEvents {
	macro public static function connect():Array<Field> {
		// grab all the fields
		var fields = Context.getBuildFields();
		var connectField:Field = null;

		// find the connection function
		for(field in fields) {
			switch(field.name) {
				case '___connectRoutes': connectField = field;
			}
		}

		// make sure we have the connection field
		if(connectField == null) {
			connectField = {
				name: '___connectRoutes',
				doc: null, meta: [], access: [AOverride, APublic],
				pos: Context.currentPos(),
				kind: FFun({ params:[], args:[], ret:null, expr:macro { tusk.Log.logInfo('Connecting game routes...'); } })
			};
			fields.push(connectField);
		}

		// now find all our methods to auto-connect
		for(field in fields) {
			switch(field.name) {
				case 'onStart',
				     'onUpdate',
				     'onDestroy': {
				     	connectEvent(connectField, field);
				     }
			}
		}

		return fields;
	}

	private static function connectEvent(connectField:Field, eventField:Field) {
		// add `tusk.Tusk.routeEvent(tusk.Events.EventType.Start, onStart);` expression to the connection field
		var eventName:String = eventField.name.substr(2);
		switch(connectField.kind) {
			default:
			case FFun(f):
				switch(f.expr.expr) {
					default:
					case EBlock(exprs):
						exprs.push(Context.parse('tusk.Tusk.routeEvent(tusk.Events.EventType.${eventName}, ${eventField.name})', eventField.pos));
				}
		}
	}
}