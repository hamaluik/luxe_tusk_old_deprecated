package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import tusk.resources.Sound;

class SoundProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(SoundComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			var s:SoundComponent = cast entity.get(SoundComponent.tid);

			if(!s.playing && s.play) {
				var sound:Sound = Tusk.assets.getSound(s.path);
				Tusk.sound.play(sound);
				sound.onEnd = function() {
					s.playing = false;
					s.finish();
				}
				s.play = false;
				s.playing = true;
			}
			else if(s.playing && s.stop) {
				var sound:Sound = Tusk.assets.getSound(s.path);
				Tusk.sound.stop(sound);
				s.stop = false;
				s.playing = false;
			}
		}
	}
}