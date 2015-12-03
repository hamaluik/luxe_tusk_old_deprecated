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

	private function checkBuffers() {
		for(entity in entities) {
			// get our components
			var mesh:MeshComponent = cast entity.get(MeshComponent.tid);

			// build the mesh buffer if that is necessary
			if(mesh.bufferDirty || mesh.vertexBuffer == null) {
				mesh.vertexBuffer = GL.createBuffer();
				GL.bindBuffer(GL.ARRAY_BUFFER, mesh.vertexBuffer);
				var data:Array<Float> = new Array<Float>();
				for(i in 0...mesh.mesh.vertices.length) {
					// add the position
					data.push(mesh.mesh.vertices[i].x);
					data.push(mesh.mesh.vertices[i].y);
					data.push(mesh.mesh.vertices[i].z);

					// add the uvs
					data.push(mesh.mesh.uvs[i].x);
					data.push(mesh.mesh.uvs[i].y);
				}
				GL.bufferData(GL.ARRAY_BUFFER, new snow.api.buffers.Float32Array(data), GL.STATIC_DRAW);
				GL.bindBuffer(GL.ARRAY_BUFFER, null);
				mesh.bufferDirty = false;
			}
		}
	}

	override public function onStart(data:StartEvent):Void {
		checkBuffers();

		// enable GL modes
		GL.enable(GL.DEPTH_TEST);
		GL.enable(GL.BLEND);
	}

	override public function onEntityChanged(entity:Entity, event:Entity.ChangeEvent):Void {
		checkBuffers();
	}

	override public function onRender(data:RenderEvent) {
		GL.viewport(0, 0, Tusk.instance.app.window.width, Tusk.instance.app.window.height);
		GL.clearColor(clearColour.r, clearColour.g, clearColour.b, clearColour.a);
		GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT);

		for(camera in Camera2DProcessor.cameras) {
			for(entity in entities) {
				// get our components
				var transform:TransformComponent = cast entity.get(TransformComponent.tid);
				var mesh:MeshComponent = cast entity.get(MeshComponent.tid);
				var material:MaterialComponent = cast entity.get(MaterialComponent.tid);

				// render!
				material.material.onRender(function(mat:Material) {
					mat.setMat4("projection", camera.projectionMatrix);
					mat.setMat4("view", camera.viewMatrix);
					mat.setMat4("model", transform.modelMatrix);
					mat.setTexture("texture", 0);
				}, mesh.vertexBuffer, mesh.mesh.vertices.length);
			}
		}
	}
}