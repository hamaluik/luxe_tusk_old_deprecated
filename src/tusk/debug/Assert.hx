package tusk.debug;

import haxe.macro.Context;
import haxe.macro.Expr;

/**
 * Runtime assertions.
 * 
 * All assertions an `Exception` if they fail, and can be conditionally compiled into
 * the source by adding the `assertions` definition.
 */
class Assert {
	/**
	 * Generally used in debugging run-time checks to make sure a value is true
	 * @param  expr the value to check
	 * @see https://github.com/deltaluca/goodies/blob/master/goodies/Assert.hx
	 */
    macro public static function assert(e:Expr):Expr {
		#if assertions
            var pos = Context.currentPos();
            var print = (new haxe.macro.Printer()).printExpr(e);
            return macro {
                if (!($e)) throw new tusk.debug.AssertException('Assertion error (${$v{pos}}): ${$v{print}}');
            };
		#else
			return macro null;
		#end
    }
}