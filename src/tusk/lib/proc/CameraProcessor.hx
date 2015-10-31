package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Component;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import haxe.ds.IntMap;

/**
 * Processor which fills out camera matrices for the renderer
 */
class CameraProcessor extends Processor {
	private var renderProcessors:IntMap<RenderProcessor> = new IntMap<RenderProcessor>();

	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(CameraComponent.tid).include(PositionComponent.tid);
		super(entities);
	}

	override public function onEntityChanged(entity:Entity, event:Entity.ChangeEvent):Void {
		// get the relevant components
		var camera:CameraComponent = cast entity.get(CameraComponent.tid);
		var pos:PositionComponent = cast entity.get(PositionComponent.tid);

		// deal with it!
		switch(event) {
			case Entity.ChangeEvent.EntityAdded: {
				// spawn a new processor!
				var renderer:RenderProcessor = new RenderProcessor(camera, pos, Tusk.instance.game.entities);
				renderer.___connectRoutes();
				renderer.onStart({});
				renderProcessors.set(entity.id, renderer);
			};
			case Entity.ChangeEvent.EntityRemoved: {
				// destroy the processor!
				var renderer:RenderProcessor = renderProcessors.get(entity.id);
				renderer.onDestroy({});
				renderer.___disconnectRoutes();
				renderProcessors.remove(entity.id);
			};
			case Entity.ChangeEvent.ComponentAdded(component): {
				Log.warning("camera processor received a component added event that it doesn't respond to!");
			};
			case Entity.ChangeEvent.ComponentRemoved(component): {
				Log.warning("camera processor received a component removed event that it doesn't respond to!");
			};
		}
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		// TODO: cameras create RenderProcessors
		for(entity in entities) {
			// get the relevant components
			var camera:CameraComponent = cast entity.get(CameraComponent.tid);
			var pos:PositionComponent = cast entity.get(PositionComponent.tid);

			if(camera.projectionMatrixDirty) {
				// TODO: better.
				var w = camera.width;
				var h = camera.height;
				var f = camera.far;
				var n = camera.near;
				camera.projectionMatrix = new tusk.math.Matrix4x4([
					(2.0/w), 0, 0, 0,
					0, (2.0/h), 0, 0,
					0, 0, (1/(f-n)), (-n/(f-n)),
					0, 0, 0, 1
				]);
				camera.projectionMatrixDirty = false;
			}

			if(camera.viewModelMatrixDirty) {
		        camera.viewModelMatrix = new tusk.math.Matrix4x4([
		            1, 0, 0, 0,
		            0, 1, 0, 0,
		            0, 0, 1, 0,
		            -pos.position.x, -pos.position.y, -pos.position.z, 1]);
		        camera.viewModelMatrixDirty = false;
			}
		}
	}
}