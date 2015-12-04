import glm.Vec4;
import tusk.debug.Log;
import tusk.lib.proc.Renderer2DProcessor;
import tusk.Scene;

class Menu extends Scene {
	public function new() {
		super('Menu');
	}

	override public function onLoad(_) {
		Log.info("Loading menu screen..");

		this.useProcessor(new Renderer2DProcessor(new Vec4(0.25, 0.25, 0.25, 1.0)));
	}
}