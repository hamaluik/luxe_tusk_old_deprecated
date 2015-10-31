package tusk.modules.partials;

import tusk.resources.*;

class Materials implements partials.Partial {
	public function loadMaterial(path:String):Promise<Material> {
		throw new tusk.debug.Exception(tusk.debug.ExceptionType.NotImplementedYet);
	}

	public function getMaterial(path:String):Material {
		throw new tusk.debug.Exception(tusk.debug.ExceptionType.NotImplementedYet);
	}
}