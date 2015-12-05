package tusk.macros;

import haxe.macro.Context;
import haxe.macro.Type;
import haxe.macro.Expr;
import haxe.ds.StringMap;

using Lambda;

typedef FieldInspector = {
    var type:String;
    var field:Expr;
}

@:noCompletion class ComponentInspector {
    public static var componentInspectors:StringMap<StringMap<FieldInspector>> = new StringMap<StringMap<FieldInspector>>();
    private static var generated:Bool = false;

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
        var exprs:Array<Expr> = new Array<Expr>();
        exprs.push(macro var x:haxe.ds.StringMap<String> = new haxe.ds.StringMap<String>());
        exprs.push(macro return x);
        var inspectFields:FieldType = FFun({
            expr: macro return null,
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

        // make sure the onGenerate callback is set
        if(!generated) {
            Context.onGenerate(onGenerate);
            generated = true;
        }

        return fields;
    }

    private static function isAComponent(c:ClassType):Bool {
        if(c.superClass != null) {
            return isAComponent(c.superClass.t.get());
        }
        return c.module == 'tusk.Component';
    }

    private static function onGenerate(types:Array<Type>) {
        types.filter(function(type:Type) {
            return switch(type) {
                case TInst(c, _): return isAComponent(c.get()) && componentInspectors.exists(c.get().module);
                default: return false;
            }
        }).map(function(type:Type):ClassType {
            return switch(type) {
                case TInst(c, _): c.get();
                default: null;
            }
        }).foreach(function(ct:ClassType):Bool {
            var className:String = ct.module;
            var fieldsArray:Array<Expr> = new Array<Expr>();
            var typesArray:Array<Expr> = new Array<Expr>();

            var fieldMap:StringMap<FieldInspector> = componentInspectors.get(className);
            for(fieldName in fieldMap.keys()) {
                fieldsArray.push(macro '${fieldName}');
                typesArray.push(macro '${fieldMap.get(fieldName).type}');
            }
            ct.meta.add('inspectorFields', fieldsArray, Context.currentPos());
            ct.meta.add('inspectorTypes', typesArray, Context.currentPos());
            return true;
        });

        /*for(type in types) {
            switch(type) {
                case TInst(c, _): {
                        // find all classes
                        var ct:ClassType = c.get();
                        if(isAComponent(ct)) {
                            // filter them to be components
                            var className:String = ct.module;
                            var fieldsArray:Array<Expr> = new Array<Expr>();
                            var typesArray:Array<Expr> = new Array<Expr>();

                            if(componentInspectors.exists(className)) {
                                var fieldMap:StringMap<FieldInspector> = componentInspectors.get(className);
                                for(fieldName in fieldMap.keys()) {
                                    fieldsArray.push(macro '${fieldName}');
                                    typesArray.push(macro '${fieldMap.get(fieldName).type}');
                                }
                            }

                            ct.meta.add('inspectorFields', fieldsArray, Context.currentPos());
                            ct.meta.add('inspectorTypes', typesArray, Context.currentPos());
                        }
                    }
                default: {}
            }
        }*/
    }
}