package tusk.modules;

import tusk.debug.Log;

class Sound {
	private var tusk:Tusk;

	@:allow(tusk.Tusk)
	private function new(tusk:Tusk) {
		this.tusk = tusk;
	}

	/**
	 * Loads a sound, and alerts a callback when it has loaded
	 * @param  id              the relative filename of the sound to load
	 * @param  onLoadComplete  a callback of the form `Void->Void` which takes the sound ID and is called
	 *                         when the sound has finished loading
	 */
    public function load(id:String, onLoadComplete:Void->Void) {
    	#if snow
		tusk.app.audio.create(id, id)
			.then(function(sound:snow.system.audio.Sound) {
				Log.trace("Loaded sound: " + id);
				onLoadComplete();
			});
		#end
    }

    /**
     * Plays a loaded sound
     * @param  id the string-based ID of the sound
     */
    public function play(id:String) {
    	#if snow
        tusk.app.audio.play(id);
        #end
    }
}