package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class SplashScreen_RoarShakeProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(TransformComponent.tid).include(MeshComponent.tid).include(SplashScreen_ShakeComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			var t:TransformComponent = cast entity.get(TransformComponent.tid);
			var s:SplashScreen_ShakeComponent = cast entity.get(SplashScreen_ShakeComponent.tid);

			if(s.shakeDelayTimer > 0) {
				s.shakeDelayTimer -= data.dt;
				continue;
			}

			if(s.shaking) {
				s.t += data.dt;
				// use a fancy "tween" function to adjust the amplitude
				var a:Float = -0.1490 * Math.pow(s.t, 4) + 1.2605
					* Math.pow(s.t, 3) - 3.6256 * Math.pow(s.t, 2)
					+ 3.6298 * s.t - 0.1685;

				// store the old position
				t.lastPosition = t.position;

				if(s.t >= 3.297) {
					s.shaking = false;
					t.position.x = 0;
					t.position.y = 0;
				}
				else {
					// move it!
					t.position.x = (Math.random() * 2 - 1) * 10 * a;
					t.position.y = (Math.random() * 2 - 1) * 10 * a;
				}
			}
		}
	}
}