package tusk.modules.partials;

class Sounds implements partials.Partial {
	/**
	 * Load a sound. If the sound has already been loaded, will return the instance
	 * of that sound.
	 * @param  path the path of the sound asset file
	 * @return      A promise which, when fulfilled with return the loaded sound
	 */
	public function loadSound(path:String):Promise<Sound> {
		var def = new Deferred<Sound>();
		var promise = def.promise();

		// check to see if it's already been loaded
		if(isLoaded(path)) {
			def.resolve(getSound(path));
			return promise;
		}

		#if snow
		// it must not have been loaded. Load it!
		Tusk.sound.load(path,
			function(snd:snow.system.audio.Sound) {
				var sound:Sound = new Sound(path, snd);
				assets.set(path, sound);
				def.resolve(sound);
			},
			function(snd:snow.system.audio.Sound) {
				def.throwError(new Exception("Unable to load sound '${path}'!", ExceptionType.FileNotFound));
			}
		);
		#else
		def.throwError(new Exception("Sound loading isn't supported without snow!"));
		#end

		return promise;
	}

	/**
	 * Retrieves the instance of an already loaded sound
	 * @param  path the sound path
	 * @return      the previously-loaded sound
	 * @throws tusk.debug.Exception if the sound hasn't been loaded, or if `path` points
	 *                              to an asset which isn't a sound
	 */
	public function getSound(path:String):Sound {
		if(!assets.exists(path)) {
			throw new Exception("Sound '${path}' hasn't been loaded yet!", ExceptionType.AssetNotFound);
		}
		try {
			return cast(assets.get(path), Sound);
		}
		catch(e:String) {
			throw new Exception("Asset '${path}' isn't a sound!", ExceptionType.InvalidAssetType);
		}
	}
}