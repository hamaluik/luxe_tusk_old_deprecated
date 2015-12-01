package tusk.modules;

import haxe.ds.StringMap;
import haxe.io.Bytes;

import promhx.Promise;
import promhx.Deferred;

import tusk.debug.*;

import tusk.resources.*;

@:partials(
	tusk.modules.partials.Textures,
	tusk.modules.partials.Sounds,
	tusk.modules.partials.Materials,
	tusk.modules.partials.Meshes/*,
	tusk.modules.partials.Fonts*/)
class Assets implements partials.Partial {
	private var app:Tusk;
	private var assets:StringMap<Asset> = new StringMap<Asset>();

	@:allow(tusk.Tusk)
	private function new(app:Tusk) {
		this.app = app;
	}

	/**
	 * Utility for determining if an asset has been loaded
	 * @param  path the path of the asset file
	 * @return      whether it has been loaded or not
	 */
	public function isLoaded(path:String):Bool {
		return assets.exists(path);
	}

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
			snowPromise = app.app.assets.text(path);
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