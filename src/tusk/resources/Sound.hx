package tusk.resources;

class Sound extends Asset {
	#if snow
	private var sound:snow.system.audio.Sound;
	#end

	#if snow
	public function new(path:String, sound:snow.system.audio.Sound) {
		super(path);
		this.sound = sound;
	}
	#else
	public function new(path:String, sound:Dynamic) {
		super(path);
	}
	#end

	/**
	 * Callback to be used when the sound is finished playing
	 */
    public var onEnd(default, set):Void->Void = null;
    #if snow
    private var onEndHandler:snow.system.audio.Sound->Void;
    #end
    public function set_onEnd(cb:Void->Void) {
    	#if snow
    	if(cb != null) {
    		onEndHandler = function(_) { cb(); };
    		sound.on('end', onEndHandler);
    	}
    	else {
    		sound.off('end', onEndHandler);
    	}
    	#end
    	return onEnd = cb;
    }
}