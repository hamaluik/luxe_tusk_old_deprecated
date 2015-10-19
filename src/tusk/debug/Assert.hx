package tusk.debug;

import haxe.io.Path;
import haxe.macro.Context;
import haxe.macro.Expr;
import haxe.EnumFlags;
import tusk.debug.Exception;

/**
 * Runtime assertions.
 * 
 * All assertions an `Exception` if they fail, and can be conditionally compiled into
 * the source by adding the `assertions` definition.
 */
class Assert {
	/**
	 * Generally used in debugging run-time checks to make sure values are the same
	 * @param  a the first value to check
	 * @param  b the second value to check
	 * @return   a `macro` which will throw an exception if the two aren't equal
	 */
	macro public static function areEqual(a:Dynamic, b:Dynamic):Expr {
		#if assertions
			return macro @:pos(Context.currentPos()) if(a != b) throw new Exception('assertion (' + a + ' == ' + b + ') failed!');
		#else
			return macro null;
		#end
	}

	/**
	 * Generally used in debugging run-time checks to make sure a value is true
	 * @param  a the value to check
	 * @return   a `macro` which will throw an exception if the value doesn't evaluate to true
	 */
	macro public static function isTrue(a:Dynamic):Expr {
		#if assertions
			return macro @:pos(Context.currentPos()) if(!a) throw new Exception('assertion (' + a + ' == true) failed!');
		#else
			return macro null;
		#end
	}

	/**
	 * Generally used in debugging run-time checks to make sure a value is false
	 * @param  a the value to check
	 * @return   a `macro` which will throw an exception if the value doesn't evaluate to false
	 */
	macro public static function isFalse(a:Dynamic):Expr {
		#if assertions
			return macro @:pos(Context.currentPos()) if(a) throw new Exception('assertion (' + a + ' == false) failed!');
		#else
			return macro null;
		#end
	}
}