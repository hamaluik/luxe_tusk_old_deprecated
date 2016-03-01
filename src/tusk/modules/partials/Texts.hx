package tusk.modules.partials;

import tusk.resources.*;

class Texts implements partials.Partial {

	public function loadText(path:String, ?contents:String):Promise<Text> {
		var def:Deferred<Text> = new Deferred<Text>();
		var promise = def.promise();

		// check to see if it's already been loaded
		if(isLoaded(path)) {
			def.resolve(getText(path));
			return promise;
		}

		#if snow
		var snowPromise:snow.api.Promise;

		if(contents == null) {
			// load from path
			snowPromise = Tusk.instance.app.assets.text(path);
		}
		else {
			// load from string
			snowPromise = new snow.api.Promise(function(resolve, reject) {
				resolve(contents);
			});
		}
		// resolve the promise
		snowPromise.then(
		 	function(snowText:snow.system.assets.Asset.AssetText) {
		 		var text:Text = new Text(path, snowText.text);
				assets.set(path, text);
				def.resolve(text);
			},
			function(contents:snow.system.assets.Asset.AssetText) {
				def.throwError(new Exception('Unable to load text \'${path}\'!', ExceptionType.FileNotFound));
			}
		);
		#else
		def.throwError(new Exception('Text loading isn\'t supported without snow!'));
		#end

		return promise;
	}

	public function getText(path:String):Text {
		if(!assets.exists(path)) {
			throw new Exception('Text \'${path}\' hasn\'t been loaded yet!', ExceptionType.AssetNotFound);
		}
		try {
			return cast(assets.get(path), Text);
		}
		catch(e:String) {
			throw new Exception('Asset \'${path}\' isn\'t a text!', ExceptionType.InvalidAssetType);
		}
	}
}