package tusk.lib.proc;

import tusk.debug.Log;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import tusk.resources.Material;

#if snow
import snow.modules.opengl.GL;
#end

class MeshProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(MeshComponent.tid).include(MaterialComponent.tid);
		super(entities);
	}

	override public function onUpdate(event:UpdateEvent) {
		#if snow
		for(entity in entities) {
			// get our components
			var mesh:MeshComponent = cast entity.get(MeshComponent.tid);
			var mat:MaterialComponent = cast entity.get(MaterialComponent.tid);
			if(mesh.mesh == null) {
				mesh.mesh = Tusk.assets.getMesh(mesh.path);
			}

			// build the mesh buffer if that is necessary
			if(mesh.bufferDirty || mesh.vertexBuffer == null) {
				mesh.vertexBuffer = GL.createBuffer();
				GL.bindBuffer(GL.ARRAY_BUFFER, mesh.vertexBuffer);
				var data:Array<Float> = new Array<Float>();
				for(i in 0...mesh.mesh.vertices.length) {
					// add the position
					if(mat.material.attributeFlags.has(AttributeTypes.Pos3)) {
						data.push(mesh.mesh.vertices[i].x);
						data.push(mesh.mesh.vertices[i].y);
						data.push(mesh.mesh.vertices[i].z);
					}
					// add the uvs
					if(mat.material.attributeFlags.has(AttributeTypes.UV)) {
						data.push(mesh.mesh.uvs[i].x);
						data.push(mesh.mesh.uvs[i].y);
					}
					// add the colour
					if(mat.material.attributeFlags.has(AttributeTypes.Colour4)) {
						data.push(mesh.mesh.colours[i].r);
						data.push(mesh.mesh.colours[i].g);
						data.push(mesh.mesh.colours[i].b);
						data.push(mesh.mesh.colours[i].a);
					}
				}
				GL.bufferData(GL.ARRAY_BUFFER, new snow.api.buffers.Float32Array(data), GL.STATIC_DRAW);
				GL.bindBuffer(GL.ARRAY_BUFFER, null);
				mesh.bufferDirty = false;
			}
		}
		#end
	}
}