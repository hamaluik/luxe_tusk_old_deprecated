package tusk.modules.partials;

import tusk.resources.*;

class Materials implements partials.Partial {
	public function loadMaterial(path:String, ?material:Material):Promise<Material> {
		var def:Deferred<Material> = new Deferred<Material>();
		var promise = def.promise();

		if(material != null) {
			// the material exists! add it straight away
			assets.set(path, material);
			def.resolve(material);
			return promise;
		}
		
		// TODO: load materials from file!
		throw new tusk.debug.Exception(tusk.debug.ExceptionType.NotImplementedYet);
	}

	public function getMaterial(path:String):Material {
		if(!assets.exists(path)) {
			throw new Exception('Material \'${path}\' hasn\'t been loaded yet!', ExceptionType.AssetNotFound);
		}
		try {
			return cast(assets.get(path), Material);
		}
		catch(e:String) {
			throw new Exception('Asset \'${path}\' isn\'t a material!', ExceptionType.InvalidAssetType);
		}
	}
}