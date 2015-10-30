package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;

/**
 * For automatically adding in variable and property
 * serialization as a build macro.
 *
 * **NOTE**: only public, non-static variables and properties will be serialized!
 *
 * @see https://github.com/Masadow/HaxeSerializer
 */
@:noCompletion class AutoSerializer {
    /**
     * Run the auto serializer on the class. Used automatically on all components with:
     * ```haxe
     * @:autoBuild(tusk.macros.AutoSerializer.apply())
     * ```
     * @return an array of the fields in the class
     */
    macro public static function apply():Array<Field> {
        var pos = Context.currentPos();
        var fields = Context.getBuildFields();

        // collect all the public, non-stance variables and properties
        // and record their `s.serialize(fielName)` and `fieldName = u.unserialize()` calls
        var serializers:Array<Expr> = new Array<Expr>();
        var unserializers:Array<Expr> = new Array<Expr>();
        for(field in fields) {
            /*if((field.kind == FieldType.FProp || field.kind == FieldType.FVar)
               && (field.access != null
               && field.access.indexOf(Access.APublic) > -1
               && field.access.indexOf(Access.AStatic) == -1
               && field.access.indexOf(Access.APrivate) == -1)) {
                var fieldName = field.name;
                serializers.push(macro s.serialize($i{fieldName}));
                unserializers.push(macro $i{fieldName} = u.unserialize());
            }*/
            var doSerialize = true;
            for(entry in field.meta) {
                if(entry != null && entry.name == ":dontSerialize") {
                    doSerialize = false;
                    break;
                }
            }
            if(!doSerialize) {
                continue;
            }

            var kindOk:Bool = true;
            switch(field.kind) {
                case FVar(t, eo): kindOk = true;
                case FProp(get , set, t, eo): kindOk = true;
                default: kindOk = false;
            }

            if(   doSerialize
               && kindOk
               && field.access != null
               && field.access.indexOf(Access.APublic) > -1
               && field.access.indexOf(Access.AStatic) == -1
               && field.access.indexOf(Access.APrivate) == -1) {
                var fieldName = field.name;
                serializers.push(macro s.serialize($i{fieldName}));
                unserializers.push(macro $i{fieldName} = u.unserialize());
            }
        }

        // add the hxSerialize field
        var hxSerialize:FieldType = FFun({
            ret: null,
            params: [],
            expr: {
                pos: pos,
                expr: EBlock(serializers)
            },
            args: [{
                value: null,
                type: macro: haxe.Serializer,
                opt: false,
                name: "s"
            }]
        });
        fields.push({
            pos: pos,
            name: "hxSerialize",
            meta: [],
            kind: hxSerialize,
            doc: null,
            access: [APublic]
        });

        // add the hxUnserialize field
        var hxUnserialize:FieldType = FFun({
            ret: null,
            params: [],
            expr: {
                pos: pos,
                expr: EBlock(unserializers)
            },
            args: [{
                value: null,
                type: macro: haxe.Unserializer,
                opt: false,
                name: "u"
            }]
        });
        fields.push({
            pos: pos,
            name: "hxUnserialize",
            meta: [],
            kind: hxSerialize,
            doc: null,
            access: [APublic]
        });

        return fields;
    }
}