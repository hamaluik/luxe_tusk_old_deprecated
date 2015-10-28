import haxe.macro.Expr;
import tusk.macros.ComponentIndexer;

class TempClass {
    macro public static function ID(type:Expr):Expr {
        return macro ComponentIndexer.ID(type);
    }
}