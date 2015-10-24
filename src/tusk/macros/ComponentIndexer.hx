package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;

import haxe.ds.StringMap;

@:noCompletion class ComponentIndexer {
    public static var nextID:Int = 0;
    public static var componentMap:StringMap<Int> = new StringMap<Int>();

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

    macro public static function ID(e:Expr) {
        switch(Context.typeof(e)) {
            case TType(t, params): {
                var name:String = t.get().module;
                updateID(name);
                return macro $v{componentMap.get(name)};
            }
            default: throw "Unknown type: " + Context.typeof(e);
        }
        return macro null;
    }
}