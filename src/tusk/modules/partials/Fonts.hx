package tusk.modules.partials;

import tusk.resources.*;

class Fonts implements partials.Partial {

	public function loadFont(path:String, ?fntContents:String):Promise<Font> {
		var def:Deferred<Font> = new Deferred<Font>();
		var promise = def.promise();

		// check to see if it's already been loaded
		if(isLoaded(path)) {
			def.resolve(getFont(path));
			return promise;
		}

		#if snow
		var snowPromise:snow.api.Promise;

		if(fntContents == null) {
			// load from path
			snowPromise = Tusk.instance.app.assets.text(path);
		}
		else {
			// load from string
			snowPromise = new snow.api.Promise(function(resolve, reject) {
				resolve(fntContents);
			});
		}
		// resolve the promise
		snowPromise.then(
			function(contents:String) {
				// process the contents into a font
				Font.load(path, contents).then(function(font:Font) {
					// store it
					assets.set(path, font);
					def.resolve(font);
				}).catchError(function(err:Dynamic) {
					throw err;
				});
			},
			function(contents:String) {
				def.throwError(new Exception("Unable to load font '${path}'!", ExceptionType.FileNotFound));
			}
		);
		#else
		def.throwError(new Exception("Font loading isn't supported without snow!"));
		#end

		return promise;
	}

	public function getFont(path:String):Font {
		if(!assets.exists(path)) {
			throw new Exception("Font '${path}' hasn't been loaded yet!", ExceptionType.AssetNotFound);
		}
		try {
			return cast(assets.get(path), Font);
		}
		catch(e:String) {
			throw new Exception("Asset '${path}' isn't a font!", ExceptionType.InvalidAssetType);
		}
	}
}