package tusk.modules.partials;

class Textures implements partials.Partial {
	/**
	 * Load a texture. If the texture has already been
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
			snowPromise = Tusk.instance.app.assets.image(path);
		}
		else {
			// load from bytes
			snowPromise = Tusk.instance.app.assets.image_from_bytes(path, snow.api.buffers.Uint8Array.fromBytes(bytes));
		}
		// resolve the promise
		snowPromise.then(
			function(image:snow.system.assets.Asset.AssetImage) {
				var texture:tusk.resources.Texture = new tusk.resources.Texture(path, image);
				assets.set(path, texture);
				def.resolve(texture);
			},
			function(image:snow.system.assets.Asset.AssetImage) {
				def.throwError(new Exception('Unable to load texture \'${path}\'!', ExceptionType.FileNotFound));
			}
		);
		#else
		def.throwError(new Exception('Texture loading isn\'t supported without snow!'));
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
	public function getTexture(path:String):Texture {
		if(!assets.exists(path)) {
			throw new Exception('Texture \'${path}\' hasn\'t been loaded yet!', ExceptionType.AssetNotFound);
		}
		try {
			return cast(assets.get(path), Texture);
		}
		catch(e:String) {
			throw new Exception('Asset \'${path}\' isn\'t a texture!', ExceptionType.InvalidAssetType);
		}
	}
}