package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import glm.GLM;
import glm.Mat3;
import glm.Mat4;

using tusk.math.Lerp;

class TransformProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(TransformComponent.tid);
		super(entities);
	}

	override public function onRender(data:RenderEvent) {
		for(entity in entities) {
			var t:TransformComponent = cast entity.get(TransformComponent.tid);

			// update the model matrix using alpha interpolation
			t.modelMatrix =
				  GLM.translate(t.lastPosition.LerpV3(t.position, data.alpha))
				* GLM.scale(t.lastScale.LerpV3(t.scale, data.alpha));
		}
	}
}