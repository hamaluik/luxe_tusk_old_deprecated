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
class Renderer2DProcessor extends Processor {
	private var clearColour:Vec4 = new Vec4(1.0, 1.0, 1.0, 1.0);

	public function new(?clearColour:Vec4, ?entities:Array<Entity>) {
		if(clearColour != null) this.clearColour = clearColour;
		matcher = new Matcher().include(MaterialComponent.tid).include(MeshComponent.tid).include(TransformComponent.tid);
		super(entities);
	}

	override public function onRender(data:RenderEvent) {
		#if snow
		GL.enable(GL.DEPTH_TEST);
		GL.enable(GL.BLEND);
		GL.viewport(0, 0, Tusk.instance.app.window.width, Tusk.instance.app.window.height);
		GL.clearColor(clearColour.r, clearColour.g, clearColour.b, clearColour.a);
		GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);

		for(camera in Camera2DProcessor.cameras) {
			for(entity in entities) {
				// get our components
				var transform:TransformComponent = cast entity.get(TransformComponent.tid);
				var mesh:MeshComponent = cast entity.get(MeshComponent.tid);
				var material:MaterialComponent = cast entity.get(MaterialComponent.tid);

				if(mesh.mesh == null) {
					continue;
				}

				// render!
				material.material.onRender(function(mat:Material) {
					mat.setMat4("projection", camera.projectionMatrix);
					mat.setMat4("view", camera.viewMatrix);
					mat.setMat4("model", transform.modelMatrix);
					mat.setTexture("texture", 0);

					if(entity.hasType(TextComponent.tid)) {
						var tc:TextComponent = cast entity.get(TextComponent.tid);
						//js.Lib.debug();
						mat.setVec4("colour", tc.colour);
					}

				}, mesh.vertexBuffer, mesh.mesh.vertices.length);
			}
		}
		#end
	}
}