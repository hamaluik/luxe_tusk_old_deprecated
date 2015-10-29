package tusk.resources;

class Sound {
	public var id:String;
	#if snow
	private var sound:snow.system.audio.Sound;
	#end

	#if snow
	public function new(id:String, sound:snow.system.audio.Sound) {
		this.id = id;
		this.sound = sound;
	}
	#else
	public function new(id:String, sound:Dynamic) {
		this.id = id;
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