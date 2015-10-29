package tusk.debug;

import haxe.CallStack;

/**
 * Any and all exceptions thrown by Tusk will be of this type!
 */
class Exception {
	/**
	 * Set to `true` to show the (post-target) stack trace
	 * in the output message.
	 */
	public static var showStackTrace:Bool = false;

	/**
	 * The message given when the exception was thrown
	 */
	public var message(default, null):String;

	/**
	 * The type of exception that was thrown
	 */
	public var type(default, null):ExceptionType;

	/**
	 * Whether the exception is fatal or not
	 */
	public var fatal(default, null):Bool;

	/**
	 * The callstack at the time the exception was thrown
	 */
	public var stack(default, null):Array<StackItem>;

	/**
	 * The Haxe AST position given when the exception was thrown
	 */
	public var pos(default, null):haxe.PosInfos;

	/**
	 * Throw a new exception
	 * @param  message A message to attach to the exception
	 */
	public function new(message:String = '', fatal:Bool = false, ?type:ExceptionType, ?pos:haxe.PosInfos) {
		this.message = message;
		this.type = type == null ? ExceptionType.Unknown : type;
		this.fatal = fatal;
		this.stack = CallStack.callStack();
		this.pos = pos;
	}

	private function translateStackItem(item:StackItem):String {
		return switch(item) {
			case CFunction: "in function";
			case Module(m): "in module " + m;
			case FilePos(s, file, line): "in file '" + file + "' at line " + line + (s == null ? "" : (": " + translateStackItem(s)));
			case Method(className, method): "in class '" + className + "' in method '" + method + "'";
			case LocalFunction(v): "in local function (" + v + ")";
			default: "?";
		};
	}

	private function translateExceptionType(type:ExceptionType):String {
		return switch(type) {
			case Assert: "assert";
			case AssetNotFound: "asset not found";
			case FileNotFound: "file not found";
			case InvalidAssetType: "invalid asset type";
			case NotImplementedYet: "not implemented yet";
			default: "unknown";
		}
	}

	/**
	 * @return The exception in a String in human-readable form.
	 */
	public function toString():String {
		var stackString:Array<String> = stack.map(translateStackItem);
		var posInfo:String = pos == null ? "" : (" in class: " + pos.className + " (" + pos.fileName + ") in function " + pos.methodName + "() at line " + pos.lineNumber);
		return (fatal ? "fatal " : "") + translateExceptionType(type) + " exception" + posInfo + ": " + message + (showStackTrace ? ("\nstack trace:\n  " + stackString.join("\n  ")) : '');
	}
}