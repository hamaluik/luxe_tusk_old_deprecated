package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Expr;
import haxe.ds.StringMap;

typedef FieldInspector = {
    var type:String;
    var field:Expr;
}

@:noCompletion class ComponentInspector {
    public static var componentInspectors:StringMap<StringMap<FieldInspector>> = new StringMap<StringMap<FieldInspector>>();

    macro public static function build():Array<Field> {
        var pos = Context.currentPos();
        var fields = Context.getBuildFields();

        var inspectorFields:StringMap<FieldInspector> = new StringMap<FieldInspector>();

        // loop through all the fields in the component
        var printer:haxe.macro.Printer = new haxe.macro.Printer();
        for(field in fields) {
            // make sure we can build an inspector for the component
            var useField:Bool = true;
            for(entry in field.meta) {
                if(entry != null && entry.name == ":dontSerialize") {
                    useField = false;
                    break;
                }
            }
            if(!useField) {
                continue;
            }
            // make sure it is accessible and not static
            if(   field.access != null
               && field.access.indexOf(Access.APublic) > -1
               && field.access.indexOf(Access.AStatic) == -1
               && field.access.indexOf(Access.APrivate) == -1) {
                //trace('C: ' + Context.getLocalModule() + ', F: ' + field.name + ', T: ' + field.kind.getParameters());
                var typeName:String = switch(field.kind) {
                    case FVar(t, e): printer.printComplexType(t);
                    case FProp(g, s, t, e): printer.printComplexType(t);
                    default: null;
                }
                if(typeName != null) {
                    //trace('C: ' + Context.getLocalModule() + ', F: ' + field.name + ', T: ' + typeName);
                    inspectorFields.set(field.name, {
                        type: typeName,
                        field: macro $i{field.name}
                    });
                }
            }
        }

        componentInspectors.set(Context.getLocalModule(), inspectorFields);

        /*var requiresOverride:Bool = Context.getLocalClass().get().superClass.t.get().name == 'PromiseComponent';
        // now create a function which tells the editor about the component's fields
        var inspectFields:FieldType = FFun({
            expr: {macro return null;},
            ret: TPath({
                name: 'StringMap',
                pack: ['haxe','ds'],
                params: [
                    TPType(TPath({name: 'String', pack: [], params: []}))
                ]
            }),
            params: [],
            args: []
        });
        fields.push({
            pos: Context.currentPos(),
            name: 'inspectFields',
            meta: [],
            kind: inspectFields,
            doc: null,
            access: requiresOverride ? [APublic, AOverride] : [APublic]
        });*/

        return fields;
    }
}