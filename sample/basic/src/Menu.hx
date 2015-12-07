import glm.Vec4;
import tusk.debug.Log;
import tusk.lib.proc.Renderer2DProcessor;
import tusk.Tusk;
import tusk.Scene;

import tusk.resources.Text;
import tusk.modules.tiled.TileMap;

class Menu extends Scene {
	public function new() {
		super('Menu');
	}

	override public function onLoad(_) {
		Log.info("Loading menu screen..");

		var tm:TileMap = new TileMap();
		Tusk.assets.loadText('assets/tilemaps/office.json').then(function(office:Text) {
			Log.info('Got office JSON, length: ${office.text.length} Bytes!');
		});

		this.useProcessor(new Renderer2DProcessor(new Vec4(0.25, 0.25, 0.25, 1.0)));
	}
}