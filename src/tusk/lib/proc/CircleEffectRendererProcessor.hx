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
class CircleEffectRendererProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(MaterialComponent.tid).include(MeshComponent.tid).include(CircleEffectComponent.tid).include(TransformComponent.tid);
		super(entities);
	}

	override public function onUpdate(data:UpdateEvent) {
		for(entity in entities) {
			var circleEffect:CircleEffectComponent = cast entity.get(CircleEffectComponent.tid);
			circleEffect.t += data.dt;

			if(circleEffect.t >= 1.0 && !circleEffect.effectDone.isResolved()) {
				circleEffect.effectDone.resolve(true);
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
				var circleEffect:CircleEffectComponent = cast entity.get(CircleEffectComponent.tid);

				// render!
				material.material.onRender(function(mat:Material) {
					mat.setMat4("projection", camera.projectionMatrix);
					mat.setMat4("view", camera.viewMatrix);
					mat.setMat4("model", transform.modelMatrix);
					material.material.setVec2('resolutionCenter',
						new glm.Vec2(Tusk.instance.app.window.width, Tusk.instance.app.window.height) / 2.0);
					material.material.setFloat('circleDistance',
						tusk.math.Ease.InOutCubic(circleEffect.circleIn ? circleEffect.t : (1.0 - circleEffect.t), 0, 1024, 1.0));
				}, mesh.vertexBuffer, mesh.mesh.vertices.length);
			}
		}
	}
}