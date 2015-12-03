package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Component;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import tusk.resources.Mesh;
import tusk.resources.Material;

import haxe.ds.IntMap;

import glm.Projection;
import glm.Vec4;
import glm.Mat3;
import glm.Mat4;
import glm.GLM;

#if snow
import snow.modules.opengl.GL;
#end

/**
 * Processor which fills out camera matrices for the renderer
 */
class FadeEffectRendererProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(MaterialComponent.tid).include(MeshComponent.tid).include(FadeEffectComponent.tid).include(TransformComponent.tid);
		super(entities);
	}

	override public function onUpdate(data:UpdateEvent) {
		for(entity in entities) {
			var fadeEffect:FadeEffectComponent = cast entity.get(FadeEffectComponent.tid);
			fadeEffect.t += data.dt;

			if(fadeEffect.t >= 1.0 && !fadeEffect.done.isResolved()) {
				fadeEffect.finish();
			}
		}
	}

	override public function onRender(data:RenderEvent) {
		for(camera in Camera2DProcessor.cameras) {
			for(entity in entities) {
				// get our components
				var transform:TransformComponent = cast entity.get(TransformComponent.tid);
				var mesh:MeshComponent = cast entity.get(MeshComponent.tid);
				var material:MaterialComponent = cast entity.get(MaterialComponent.tid);
				var fadeEffect:FadeEffectComponent = cast entity.get(FadeEffectComponent.tid);

				// render!
				material.material.onRender(function(mat:Material) {
					mat.setMat4("projection", camera.projectionMatrix);
					mat.setMat4("view", camera.viewMatrix);
					mat.setMat4("model", transform.modelMatrix);
					material.material.setFloat('fadeAlpha',
						tusk.math.Ease.InOutCubic(fadeEffect.fadeIn ? (1.0 - fadeEffect.t) : fadeEffect.t, 0, 1, 1.0));
				}, mesh.vertexBuffer, mesh.mesh.vertices.length);
			}
		}
	}
}