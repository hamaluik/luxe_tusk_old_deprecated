package tusk.debug;

/**
 * A special exception thrown by assertions
 */
class AssertException extends Exception {
	/**
	 * Throw a new exception
	 * @param  message A message to attach to the exception
	 */
	public function new(message:String = '', ?pos:haxe.PosInfos) {
		super(message, pos);
	}
}