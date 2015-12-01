package tusk;

import glm.Mat4;

import tusk.resources.Shader;
import tusk.resources.Material;

#if snow
import snow.modules.opengl.GL;
import snow.modules.opengl.GL.GLBuffer;
#end

class Materials {
	private function new() {}

	public static function loadUnlitTextured() {
		var shader:tusk.resources.Shader = new tusk.resources.Shader("unlit.textured",
			haxe.Resource.getString("unlit.textured.vert"),
			haxe.Resource.getString("unlit.textured.frag"));
		var mat = new Material("unlit.textured", shader);

		GL.useProgram(mat.shader.program);
		var posLocation:Int = mat.shader.getAttributeLocation("position");
		var uvLocation:Int = mat.shader.getAttributeLocation("uv");

		mat.onRender = function(projectionViewMatrix:Mat4, modelMatrix:Mat4, vertexBuffer:GLBuffer, vertexCount:Int) {
			GL.useProgram(mat.shader.program);
			GL.blendFunc(GL.SRC_ALPHA, GL.ONE_MINUS_SRC_ALPHA);

			if(mat.textures.iterator().hasNext()) {
				GL.activeTexture(GL.TEXTURE0);
				// NOTE: WE ARE EXPECTING AT LEAST 1 TEXTURE TO BE SET IN THE MATERIAL
				GL.bindTexture(GL.TEXTURE_2D, mat.textures.iterator().next().texture);
			}

			mat.setMat4("modelView", modelMatrix);
			mat.setMat4("projection", projectionViewMatrix);
			mat.setTexture("texture", 0);

			GL.enableVertexAttribArray(posLocation);
			GL.enableVertexAttribArray(uvLocation);
			GL.bindBuffer(GL.ARRAY_BUFFER, vertexBuffer);

			GL.vertexAttribPointer(posLocation, 3, GL.FLOAT, false, 5*4, 0);
			GL.vertexAttribPointer(uvLocation, 2, GL.FLOAT, false, 5*4, 3*4);

			GL.drawArrays(GL.TRIANGLES, 0, vertexCount);

			GL.bindTexture(GL.TEXTURE_2D, null);
			GL.bindBuffer(GL.ARRAY_BUFFER, null);
			GL.disableVertexAttribArray(posLocation);
			GL.disableVertexAttribArray(uvLocation);
			GL.useProgram(null);
		}

		Tusk.assets.loadMaterial("unlit.textured", mat);
	}
}