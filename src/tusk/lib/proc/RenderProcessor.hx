package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

class RenderProcessor extends Processor {
	private var camera:CameraComponent;
	private var cameraPosition:PositionComponent;

	// TODO: RenderProcessors contain information on their camera
	// and a static reference to the scene's batched entities
	// render processors then process their 
	public function new(camera:CameraComponent, cameraPosition:PositionComponent, ?entities:Array<Entity>) {
		matcher = new Matcher().include(PositionComponent.tid).include(MeshComponent.tid);
		this.camera = camera;
		this.cameraPosition = cameraPosition;
		Log.info("RenderProcessor created!");
		super(entities);
	}
	
	override public function onUpdate(data:UpdateEvent):Void {
		for(entity in entities) {
			var mesh:MeshComponent = cast entity.get(MeshComponent.tid);
			if(mesh.mesh == null) {
				mesh.mesh = Tusk.assets.getMesh(mesh.meshPath);
			}
			if(mesh.material == null) {
				mesh.material = Tusk.assets.getMaterial(mesh.materialPath);
			}
		}
	}

	override public function onRender(data:RenderEvent):Void {

	}
}