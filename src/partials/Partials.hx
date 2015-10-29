package partials;

import haxe.macro.Context;
import haxe.macro.Compiler;
import haxe.macro.Expr;

import haxe.rtti.Meta;

import haxe.ds.StringMap;

/**
 * Utility macros for defining multiple parts of a class in different files. To define a class
 * as a partial, simply implement the partials.Partial interface. To indicate the "host" class
 * for a series of partials, use the `@:partials()` metadata on the class, like so:
 *
 * ```haxe
 * package my.package;
 * 
 * @:partials(my.package.PartialDefinitionA, my.package.partials.PartialDefinitionB)
 * class MyClassThatWouldBeReallyLongWithoutPartials implements partials.Partial {
 *     public function new() {
 *         trace("My partials are here!");
 *         foo();
 *         bar();
 *     }
 * }
 * ```
 * 
 * ```haxe
 * package my.package;
 * 
 * class PartialDefinitionA implements partials.Partial {
 *     public function foo() {
 *         trace("FOO!");
 *     }
 * }
 * ```
 * ```
 * 
 * ```haxe
 * package my.package.partials;
 * 
 * class PartialDefinitionB implements partials.Partial {
 *     public function bar() {
 *         trace("BAR!");
 *     }
 * }
 * ```
 *
 * This would output:
 * 
 * ```
 * My partials are here!
 * FOO!
 * BAR!
 * ```
 */
class Partials {
    private static var partials:StringMap<Array<Field>> = new StringMap<Array<Field>>();

    private static function getModuleName(e:Expr):String {
        return switch(e.expr) {
            case EConst(c):
                switch(c) {
                    case CIdent(s): s;
                    default: null;
                }
            case EField(e, field):
                getModuleName(e) + "." + field;
            default: null;
        };
    }

    // TODO: necessary?
    /*private static function translatePositions(expr:Expr):Expr {
        //expr.pos = Context.currentPos();
        return Context.makeExpr(expr.expr, Context.currentPos());
    }

    private static function repositionMeta(meta:Null<Metadata>):Null<Metadata> {
        if(meta == null) return null;
        for(entry in meta) {
            entry.pos = Context.currentPos();
            if(entry.params != null) {
                for(param in entry.params) {
                    param = translatePositions(param);
                }
            }
        }
        return meta;
    }*/

    macro public static function process():Array<Field> {
        var localFields:Array<Field> = Context.getBuildFields();

        // see if it is a partial host
        if(Context.getLocalClass().get().meta.has(":partials")) {
            // yup, it is!
            var params:Array<Expr> = Context.getLocalClass().get().meta.extract(":partials")[0].params;
            for(param in params) {
                // force-import the referenced module
                var moduleName:String = getModuleName(param);
                Context.getModule(moduleName);

                // ok, now that it's imported, bring in all of its fields
                var moduleFields:Array<Field> = partials.get(moduleName);
                for(field in moduleFields) {
                    field.pos = Context.currentPos();
                    localFields.push(field);
                }
            }
        }
        else {
            // nope, just a regular partial
            // save its fields
            partials.set(Context.getLocalModule(), localFields);

            // and trash it
            Compiler.exclude(Context.getLocalModule());
            return new Array<Field>();
        }

        return localFields;
    }
}