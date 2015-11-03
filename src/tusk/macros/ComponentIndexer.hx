package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;

using haxe.macro.ExprTools;

import haxe.ds.StringMap;
import haxe.ds.IntMap;

/**
 * At compile-time, assigns each component module a unique
 * integer number (`tid`) so that components can be looked
 * up in an `IntMap` rather than a `StringMap`.
 */
class ComponentIndexer {
    private static var nextID:Int = 0;
    private static var componentMap:StringMap<Int> = new StringMap<Int>();
    private static var indexMap:IntMap<String> = new IntMap<String>();

    /**
     * Index the component. Applied to components using:
     * ```haxe
     * @:autoBuild(tusk.macros.ComponentIndexer.index())
     * ```
     * @return an array of the fields in the class
     */
    macro public static function index():Array<Field> {
        var fields = Context.getBuildFields();
        var name:String = Context.getLocalClass().get().module;
        ensureID(name);

        // find the tid field
        var staticTIDField:Field = null;
        for(field in fields) {
            if(field.name == "tid") {
                staticTIDField = field;
                break;
            }
        }

        // add the static ID
        if(staticTIDField != null) {
            fields.remove(staticTIDField);
        }
        staticTIDField = {
            pos: Context.currentPos(),
            name: "tid",
            meta: [],
            kind: FVar(macro: Int, macro $v{componentMap.get(name)}),
            doc: "The type ID of the component class.",
            access: [APublic, AStatic, AInline]
        };
        fields.push(staticTIDField);

        // override the instance type ID
        fields.push({
            pos: Context.currentPos(),
            name: "get__tid",
            meta: [],
            kind: FFun({
                ret: macro: Int,
                params: [],
                expr: macro { return $v{componentMap.get(name)}; },
                args: []
            }),
            doc: "The type ID of the component's class.",
            access: [APublic, AOverride]
        });
        return fields;
    }

    private static function ensureID(name:String) {
        if(!componentMap.exists(name)) {
            componentMap.set(name, nextID);
            indexMap.set(nextID, name);
            //trace(name + ' => ' + nextID);
            nextID++;
        }
    }

    private static function getCompName(e:Expr):String {
        return switch(e.expr) {
            case EConst(c):
                switch(c) {
                    case CIdent(s): s;
                    default: null;
                }
            case EField(e, field):
                getCompName(e) + "." + field;
            default: null;
        };
    }

    /**
     * Get the integer ID of the given class. Will attempt to find the fully qualified
     * classname (including module).
     * @param e<Class<tusk.Component>> a tusk.Component child class (ex: `SoundComponent`)
     */
    macro public static function ID(e:ExprOf<Class<tusk.Component>>):ExprOf<Int> {
        var compName:String = getCompName(e);
        var t:haxe.macro.Type = Context.getType(compName);
        var name:String = switch(t) {
            case TInst(t, p):
                t.toString();
            default: null;
        }
        ensureID(name);
        return macro $v{componentMap.get(name)};
    }


    @:noCompletion
    @:dox(hide)
    macro public static function GetName(e:ExprOf<Int>):Expr {
        // TODO
        /*trace(e);
        trace(macro ${e});
        //var id:Int = $v{e};
        for(name in componentMap.keys()) {
            if(componentMap.get(name) == id) {
                return macro $v{componentMap.get(name)};
            }
        }*/
        //return macro $v{indexMap.get(e)};
        return macro null;
    }
}