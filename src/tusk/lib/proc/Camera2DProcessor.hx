package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Component;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import haxe.ds.IntMap;

import glm.Projection;
import glm.Mat3;
import glm.Mat4;
import glm.GLM;

/**
 * Processor which fills out camera matrices for the renderer
 */
class Camera2DProcessor extends Processor {
	// keep a list of all the cameras for the renderer to use
	public static var cameras:Array<Camera2DComponent> = new Array<Camera2DComponent>();

	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(Camera2DComponent.tid).include(TransformComponent.tid);
		super(entities);
	}

	override public function onEntityChanged(entity:Entity, event:Entity.ChangeEvent):Void {
		var added:Bool = switch(event) {
			case Entity.ChangeEvent.EntityAdded: true;
			case Entity.ChangeEvent.ComponentAdded(c): c._tid == Camera2DComponent.tid;
			case Entity.ChangeEvent.EntityRemoved: false;
			case Entity.ChangeEvent.ComponentRemoved(c): false;
		}
		if(added) {
			cameras.push(cast entity.get(Camera2DComponent.tid));
		}
		else {
			cameras.remove(cast entity.get(Camera2DComponent.tid));
		}
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			// get the relevant components
			var camera:Camera2DComponent = cast entity.get(Camera2DComponent.tid);
			var transform:TransformComponent = cast entity.get(TransformComponent.tid);

			// check if the projection-view matrix is dirty
			/*if(transform.position != transform.lastPosition || transform.rotation != transform.lastRotation) {
				camera.viewMatrixDirty = true;
			}*/

			// if we need to update the projection matrix, do so
			if(camera.projectionMatrixDirty) {
				camera.projectionMatrix = Projection.ortho(camera.min.x, camera.max.x, camera.min.y, camera.max.y, camera.near, camera.far);
				camera.projectionMatrixDirty = false;
			}

			// if we need to update the view matrix, do so
			if(camera.viewMatrixDirty) {
				camera.viewMatrix = GLM.translate(-1 * transform.position) * Mat4.fromMat3(Mat3.fromQuat(transform.rotation));
				camera.viewMatrixDirty = false;
			}
		}
	}
}