package tusk.modules.partials;

import tusk.resources.*;

class Meshes implements partials.Partial {
	public function loadMesh(path:String, ?mesh:Mesh):Promise<Mesh> {
		var def:Deferred<Mesh> = new Deferred<Mesh>();
		var promise = def.promise();

		if(mesh != null) {
			// the mesh exists! add it straight away
			assets.set(path, mesh);
			def.resolve(mesh);
			return promise;
		}
		
		// TODO: load meshes from file!
		throw new tusk.debug.Exception(tusk.debug.ExceptionType.NotImplementedYet);
	}

	public function getMesh(path:String):Mesh {
		if(!assets.exists(path)) {
			throw new Exception('Mesh \'${path}\' hasn\'t been loaded yet!', ExceptionType.AssetNotFound);
		}
		try {
			return cast(assets.get(path), Mesh);
		}
		catch(e:String) {
			throw new Exception('Asset \'${path}\' isn\'t a mesh!', ExceptionType.InvalidAssetType);
		}
	}
}