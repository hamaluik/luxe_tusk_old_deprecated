package tusk.modules;

import haxe.ds.StringMap;
import promhx.Promise;
import promhx.Deferred;

import tusk.resources.*;

class Assets {
	private var tusk:Tusk;
	private var assets:StringMap<Asset> = new StringMap<Asset>();

	@:allow(tusk.Tusk)
	private function new(tusk:Tusk) {
		this.tusk = tusk;
	}

	public function isLoaded(path:String):Bool {
		return assets.exists(path);
	}

	public function loadSound(path:String):Promise<Sound> {
		var def = new Deferred<Sound>();
		var promise = def.promise();

		#if snow
		Tusk.sound.load(path,
			function(snd:snow.system.audio.Sound) {
				var sound:Sound = new Sound(path, snd);
				assets.set(path, Asset.Sound(sound));
				def.resolve(sound);
			},
			function(snd:snow.system.audio.Sound) {
				def.throwError(new tusk.debug.FileNotFoundException("Unable to load sound ${path}!"));
			}
		);
		#else
		def.throwError(new tusk.debug.Exception("Sound loading isn't supported without snow!"));
		#end

		return promise;
	}

	public function getSound(path:String):Sound {
		if(!assets.exists(path)) {
			throw new tusk.debug.AssetNotFoundException("Sound ${path} hasn't been loaded yet!");
		}

		return switch(assets.get(path)) {
			case Asset.Sound(sound): sound;
			default: {
				throw new tusk.debug.Exception("Asset '${path}' isn't a sound!");
				null;
			}
		}
	}
}