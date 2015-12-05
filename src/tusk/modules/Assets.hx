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
	tusk.modules.partials.Meshes,
	tusk.modules.partials.Fonts)
class Assets implements partials.Partial {
	private var assets:StringMap<Asset> = new StringMap<Asset>();

	@:allow(tusk.Tusk)
	private function new() {}

	/**
	 * Utility for determining if an asset has been loaded
	 * @param  path the path of the asset file
	 * @return      whether it has been loaded or not
	 */
	public function isLoaded(path:String):Bool {
		var exists:Bool = assets.exists(path);
		return exists;
	}
}