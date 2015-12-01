package tusk.defaults;

import promhx.Promise;
import tusk.resources.Font;
import tusk.resources.Texture;

class Fonts {
	public static function loadSubatomic_Screen():Promise<Font> {
        return Tusk.assets.loadTexture('Subatomic_Screen.png', haxe.Resource.getBytes('Subatomic_Screen.png')).pipe(function(texture:Texture) {
            return Tusk.assets.loadFont('Subatomic_Screen.fnt', haxe.Resource.getString('Subatomic_Screen.fnt'));
        });
	}
}