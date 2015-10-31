package tusk.modules.partials;

import tusk.resources.*;

class Meshes implements partials.Partial {
	public function loadMesh(path:String):Promise<Mesh> {
		throw new tusk.debug.Exception(tusk.debug.ExceptionType.NotImplementedYet);
	}

	public function getMesh(path:String):Mesh {
		throw new tusk.debug.Exception(tusk.debug.ExceptionType.NotImplementedYet);
	}
}