package tusk;

import haxe.io.Path;
import haxe.macro.Context;
import haxe.macro.Expr;
import haxe.EnumFlags;

/**
 * Generally not used by user-facing code, this `enum` is for tracking
 * the type of log that is being written.
 */
enum LogFunctions {
	/**
	 * Show-stopping error
	 */
	Fatal;

	/**
	 * Crashes / exceptions
	 */
	Error;

	/**
	 * Incorrect behaviour but can continue
	 */
	Warn;

	/**
	 * Indicates correct behaviour
	 */
	Info;

	/**
	 * Behind-the-scenes poking around
	 */
	Debug;

	/**
	 * Full object tracing for deep inspection
	 */
	Trace;
}

/**
 * Macros and functions responsible for logging. To enable or disable specific logs, change
 * the compile-time definitions.
 * 
 * The following definitions are valid and correspond to
 * the macros defined below:
 * <ul>
 * <li>`log_fatal`
 * <li>`log_error`
 * <li>`log_warning`
 * <li>`log_info`
 * <li>`debug`
 * <li>`log_trace`
 * </ul>
 */
class Log {
	/**
	 * Replacement for `trace`, this will format the logs depending on the situation.
	 * For example, on web, it will add appropriate colours to each log message in the console.
	 * @param v    the message / object to log
	 * @param func what type of message it is
	 * @param pos  automatically passed by the compiler
	 */
	public static function log(v:Dynamic, func:LogFunctions, ?pos:haxe.PosInfos):Void {
		#if web
			var message = v.toString();
			switch(func) {
				case Fatal: {
					untyped console.log('%cf.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'font-weight: bold; font-size: 2em; color: white; background: #A84B38;');
					throw new String('FATAL EXCEPTION: ' + pos.fileName + ':' + pos.lineNumber + ': ' + message);
				}
				case Error: untyped console.log('%ce.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'font-weight: bold; color: white; background: #A84B38;');
				case Warn: untyped console.log('%cw.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: white; background: #EA8220;');
				case Info: untyped console.log('%ci.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: blue;');
				case Debug: untyped console.log('%cd.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: #A84B38;');
				case Trace: untyped console.log('%ct.' + pos.fileName + ':' + pos.lineNumber + ': ' + message, 'color: #009700;');
				default: untyped console.log('l.' + pos.fileName + ':' + pos.lineNumber + ': ' + message);
			}
		#else
			trace(v, pos);
		#end
	}

	/**
	 * Use for show-stopping errors
	 * @param value the message / object to log
	 */
	macro public static function logFatal(value:Dynamic):Expr {
		#if log_fatal
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.Fatal);
		#else
			return macro null;
		#end
	}


	/**
	 * Use for crashes and exceptions, and any other errors that aren't
	 * necessarily show-stopping but require intervention.
	 * @param value the message / object to log
	 */
	macro public static function logError(value:Dynamic):Expr {
		#if log_error
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.Error);
		#else
			return macro null;
		#end
	}

	/**
	 * Use for indicating incorrect behaviour (but execution can be continued).
	 * @param value the message / object to log
	 */
	macro public static function logWarning(value:Dynamic):Expr {
		#if log_warning
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.Warn);
		#else
			return macro null;
		#end
	}

	/**
	 * Use to indicate normal behaviour
	 * @param value the message / object to log
	 */
	macro public static function logInfo(value:Dynamic):Expr {
		#if log_info
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.Info);
		#else
			return macro null;
		#end
	}

	/**
	 * Use for logging behind-the-scenes information.
	 * @param value the message / object to log
	 */
	macro public static function logDebug(value:Dynamic):Expr {
		#if debug
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.Debug);
		#else
			return macro null;
		#end
	}

	/**
	 * Used when delving deep into what is going on
	 * @param value the message / object to log
	 */
	macro public static function logTrace(value:Dynamic):Expr {
		#if log_trace
			return macro @:pos(Context.currentPos()) tusk.Log.log($value, tusk.Log.LogFunctions.Trace);
		#else
			return macro null;
		#end
	}
}