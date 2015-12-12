package tusk.defaults;

import promhx.Deferred;
import promhx.Promise;
import tusk.resources.Font;
import tusk.resources.Texture;

class Fonts {
	public static function loadSubatomic_Screen():Promise<Font> {
		if(Tusk.assets.isLoaded("Subatomic_Screen.fnt")) {
			var d:Deferred<Font> = new Deferred<Font>();
			d.resolve(Tusk.assets.getFont("Subatomic_Screen.fnt"));
			return d.promise();
		}
        return Tusk.assets.loadTexture('Subatomic_Screen.png', haxe.Resource.getBytes('Subatomic_Screen.png')).pipe(function(texture:Texture) {
            return Tusk.assets.loadFont('Subatomic_Screen.fnt', haxe.Resource.getString('Subatomic_Screen.fnt'), texture);
        });
	}
}