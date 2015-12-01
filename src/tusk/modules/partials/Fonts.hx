package tusk.modules.partials;

import tusk.resources.*;

class Fonts implements partials.Partial {
	public function loadFont(path:String, ?fntContents:String):Promise<Font> {
		var def:Deferred<Font> = new Deferred<Font>();
		var promise = def.promise();

		if(fntContents == null) {
			// load it from file
			app.assets.
		}
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