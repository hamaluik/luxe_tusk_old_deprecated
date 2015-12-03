package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Sound;

class SplashScreen_ShakeComponent extends Component {
	public var shakeDelayTimer:Float = 0.5;
	public var shaking:Bool = true;
	public var t:Float = 0;

	public function new() {
		super();
	}
}