package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;

/**
 * This a build macro which will fill out the function `___connectRoutes`
 * with routing expressions for the tusk core.
 */
@:noCompletion class EventConnector {
    /**
     * Connect the fields. Apply to a game class using:
     * ```haxe
     * @:autoBuild(tusk.macros.EventConnector.connect())
     * ```
     * @return an array of the fields in the class (the `___connectRoutes` function will be modified)
     */
    macro public static function connect():Array<Field> {
        // grab all the fields
        var fields = Context.getBuildFields();
        var connectField:Field = null;
        var disconnectField:Field = null;

        // find the connection function
        for(field in fields) {
            switch(field.name) {
                case '___connectRoutes': connectField = field;
                case '___disconnectRoutes': connectField = field;
            }
        }

        // make sure we have the connection field
        if(connectField == null) {
            connectField = {
                name: '___connectRoutes',
                doc: null, meta: [], access: [AOverride, APublic],
                pos: Context.currentPos(),
                kind: FFun({ params:[], args:[], ret:null, expr:macro { tusk.debug.Log.info('Connecting routes for \'' + Type.getClassName(Type.getClass(this)) + '\'...'); } })
            };
            fields.push(connectField);
        }

        // make sure we have the disconnection field
        if(disconnectField == null) {
            disconnectField = {
                name: '___disconnectRoutes',
                doc: null, meta: [], access: [AOverride, APublic],
                pos: Context.currentPos(),
                kind: FFun({ params:[], args:[], ret:null, expr:macro { tusk.debug.Log.info('Disconnecting routes for \'' + Type.getClassName(Type.getClass(this)) + '\'...'); } })
            };
            fields.push(disconnectField);
        }

        // now find all our methods to auto-connect
        for(field in fields) {
            switch(field.name) {
                case 'onStart',
                     'onUpdate',
                     'onRender',
                     'onDestroy': {
                     	connectEvent(connectField, field);
                     }
            }
        }

        return fields;
    }

    /**
     * Assuming we've found events to connect, use this to insert
     * the routing expression into the connection method
     * @param connectField the field corresponding to the `___connectRoutes` method
     * @param eventField   the field corresponding to the detected event method
     */
    private static function connectEvent(connectField:Field, eventField:Field) {
        #if !docgen
        var eventName:String = eventField.name.substr(2);
        switch(connectField.kind) {
            default:
            case FFun(f):
                switch(f.expr.expr) {
                    default:
                    case EBlock(exprs):
                        exprs.push(Context.parse('tusk.Tusk.routeEvent(tusk.events.EventType.${eventName}, ${eventField.name})', eventField.pos));
                }
        }
        #end
    }

    /**
     * Assuming we've found events to disconnect, use this to insert
     * the routing expression into the connection method
     * @param connectField the field corresponding to the `___disconnectRoutes` method
     * @param eventField   the field corresponding to the detected event method
     */
    private static function disconnectEvent(disconnectField:Field, eventField:Field) {
        #if !docgen
        var eventName:String = eventField.name.substr(2);
        switch(disconnectField.kind) {
            default:
            case FFun(f):
                switch(f.expr.expr) {
                    default:
                    case EBlock(exprs):
                        exprs.push(Context.parse('tusk.Tusk.unrouteEvent(tusk.events.EventType.${eventName}, ${eventField.name})', eventField.pos));
                }
        }
        #end
    }
}