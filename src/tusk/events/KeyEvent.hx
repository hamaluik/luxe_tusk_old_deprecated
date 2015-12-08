package tusk.events;

#if snow
typedef Key = snow.system.input.Keycodes.Keycodes;
typedef Scan = snow.system.input.Keycodes.Scancodes;
typedef ModState = snow.types.Types.ModState;
#else
typedef Key = Dynamic;
typedef Scan = Dynamic;
typedef ModState = Dynamic;
#end

class KeyEvent extends Event {
	public var keyCode:Int;
	public var scanCode:Int;
	public var repeat:Bool;
	public var mod:ModState;
	
	public function new(keyCode:Int, scanCode:Int, repeat:Bool, mod:ModState) {
		this.keyCode = keyCode;
		this.scanCode = scanCode;
		this.repeat = repeat;
		this.mod = mod;
		super();
	}
}