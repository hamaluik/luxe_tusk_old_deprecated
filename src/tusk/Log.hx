package tusk;

import haxe.io.Path;
import haxe.macro.Context;
import haxe.macro.Expr;
import haxe.EnumFlags;

enum LogFunctions {
	FATAL;
	ERROR;
	WARN;
	INFO;
	DEBUG;
	TRACE;
}

class Log {
	public static var functions:EnumFlags<LogFunctions> = {
		var f:EnumFlags<LogFunctions> = new EnumFlags<LogFunctions>();
		f.set(FATAL);
		f.set(ERROR);
		f.set(WARN);
		f.set(INFO);
		#if debug
			f.set(DEBUG);
		#end
		f;
	};

	public static function log(value:Dynamic, func:LogFunctions, ?pos:haxe.PosInfos):Void {
		#if web
			var message = value.toString();
			switch(func) {
				case FATAL: untyped console.log('%cf.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'font-weight: bold; font-size: 2em; color: white; background: #A84B38;');
				case ERROR: untyped console.log('%ce.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'font-weight: bold; color: white; background: #A84B38;');
				case WARN: untyped console.log('%cw.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: white; background: #EA8220;');
				case INFO: untyped console.log('%ci.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: blue;');
				case DEBUG: untyped console.log('%cd.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: #A84B38;');
				case TRACE: untyped console.log('%ct.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: #009700;');
				default: untyped console.log('l.' + pos.fileName + ':' + pos.lineNumber + ': ' + message);
			}
		#else
			trace(v, pos);
		#end
	}

	// the whole world has gone to shit
	macro public static function logFatal(value:Dynamic):Expr {
		if(functions.has(FATAL)) {
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.FATAL);
		}
		return macro null;
	}

	// crashes / exceptions
	macro public static function logError(value:Dynamic):Expr {
		if(functions.has(ERROR)) {
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.ERROR);
		}
		return macro null;
	}

	// incorrect behaviour but we can continue
	macro public static function logWarning(value:Dynamic):Expr {
		if(functions.has(WARN)) {
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.WARN);
		}
		return macro null;
	}

	// indicator of normal behaviour
	macro public static function logInfo(value:Dynamic):Expr {
		if(functions.has(INFO)) {
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.INFO);
		}
		return macro null;
	}

	// behind the scene stuff
	macro public static function logDebug(value:Dynamic):Expr {
		if(functions.has(DEBUG)) {
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.DEBUG);
		}
		return macro null;
	}

	// delving deep
	macro public static function logTrace(value:Dynamic):Expr {
		if(functions.has(TRACE)) {
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.TRACE);
		}
		return macro null;
	}
}