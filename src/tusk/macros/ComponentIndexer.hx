package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;

import haxe.ds.StringMap;

/**
 * At compile-time, assigns each component module a unique
 * integer number (`tid`) so that components can be looked
 * up in an `IntMap` rather than a `StringMap`.
 */
@:noCompletion class ComponentIndexer {
    private static var nextID:Int = 0;
    private static var componentMap:StringMap<Int> = new StringMap<Int>();

    /**
     * Index the component. Applied to components using:
     * ```haxe
     * @:autoBuild(tusk.macros.ComponentIndexer.index())
     * ```
     * @return an array of the fields in the class
     */
    macro public static function index():Array<Field> {
        var fields = Context.getBuildFields();
        if(Context.getLocalClass() != null) {
            var name:String = Context.getLocalClass().get().module;
            updateID(name);

            fields.push({
                pos: Context.currentPos(),
                name: "tid",
                meta: [],
                kind: FVar(macro: Int, macro $v{componentMap.get(name)}),
                doc: "The type ID of the component's class.",
                access: [APublic, AStatic, AInline]
            });
        }
        return fields;
    }

    private static function updateID(name:String) {
        if(!componentMap.exists(name)) {
            componentMap.set(name, nextID);
            trace(name + ' => ' + nextID);
            nextID++;
        }
    }

    /*macro public static function ID(e:Expr) {
        switch(Context.typeof(e)) {
            case TType(t, params): {
                var name:String = t.get().module;
                updateID(name);
                return macro $v{componentMap.get(name)};
            }
            default: throw "Unknown type: " + Context.typeof(e);
        }
        return macro null;
    }*/
}