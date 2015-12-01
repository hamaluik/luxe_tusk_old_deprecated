package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import glm.GLM;
import glm.Mat3;
import glm.Mat4;

class TransformProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(TransformComponent.tid);
		super(entities);
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			var t:TransformComponent = cast entity.get(TransformComponent.tid);
			if(t.modelMatrixDirty) {
				//t.modelMatrix = GLM.translate(t.position) * GLM.scale(t.scale) * Mat4.fromMat3(Mat3.fromQuat(t.rotation));
				t.modelMatrix = GLM.scale(t.scale);
			}
		}
	}
}