package tusk.modules;

import haxe.ds.StringMap;
import haxe.io.Bytes;

import promhx.Promise;
import promhx.Deferred;

import tusk.debug.*;

import tusk.resources.*;

class Assets {
	private var tusk:Tusk;
	private var assets:StringMap<Asset> = new StringMap<Asset>();

	@:allow(tusk.Tusk)
	private function new(tusk:Tusk) {
		this.tusk = tusk;
	}

	/**
	 * Utility for determining if an asset has been loaded
	 * @param  path the path of the asset file
	 * @return      whether it has been loaded or not
	 */
	public function isLoaded(path:String):Bool {
		return assets.exists(path);
	}

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

	/**
	 * Load a texture and bind it to a GL texture. If the texture has already been
	 *  loaded, will return the instance of that texture.
	 * @param  path the path of the texture asset file
	 * @return      A promise which, when fulfilled with return the loaded texture
	 */
	public function loadTexture(path:String, ?bytes:Bytes):Promise<Texture> {
		var def = new Deferred<Texture>();
		var promise = def.promise();

		// check to see if it's already been loaded
		if(isLoaded(path)) {
			def.resolve(getTexture(path));
			return promise;
		}

		#if snow
		var snowPromise:snow.api.Promise;

		if(bytes == null) {
			// load from path
			snowPromise = tusk.app.assets.image(path);
		}
		else {
			// load from bytes
			snowPromise = tusk.app.assets.image_from_bytes(path, snow.api.buffers.Uint8Array.fromBytes(bytes));
		}
		// resolve the promise
		snowPromise.then(
			function(image:snow.system.assets.Asset.AssetImage) {
				var texture:tusk.resources.Texture = new tusk.resources.Texture(path, image);
				assets.set(path, texture);
				def.resolve(texture);
			},
			function(image:snow.system.assets.Asset.AssetImage) {
				def.throwError(new Exception("Unable to load texture '${path}'!", ExceptionType.FileNotFound));
			}
		);
		#else
		def.throwError(new Exception("Texture loading isn't supported without snow!"));
		#end

		return promise;
	}

	/**
	 * Retrieves the instance of an already loaded texture
	 * @param  path the texture path
	 * @return      the previously-loaded texture
	 * @throws tusk.debug.Exception if the texture hasn't been loaded, or if `path` points
	 *                              to an asset which isn't a texture
	 */
	public function getTexture(path:String):tusk.resources.Texture {
		if(!assets.exists(path)) {
			throw new Exception("Texture '${path}' hasn't been loaded yet!", ExceptionType.AssetNotFound);
		}
		try {
			return cast(assets.get(path), Texture);
		}
		catch(e:String) {
			throw new Exception("Asset '${path}' isn't a texture!", ExceptionType.InvalidAssetType);
		}
	}
}