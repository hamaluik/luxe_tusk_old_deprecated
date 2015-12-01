package tusk;

import tusk.resources.Mesh;
import glm.Vec2;
import glm.Vec3;

class Primitives {
	private function new(){}

	public static function loadQuad() {
		var m:Mesh = new Mesh("quad");

		m.vertices = new Array<Vec3>();
		m.vertices.push(new Vec3(0, 0));
		m.vertices.push(new Vec3(1, 0));
		m.vertices.push(new Vec3(1, 1));

		m.vertices.push(new Vec3(1, 1));
		m.vertices.push(new Vec3(0, 1));
		m.vertices.push(new Vec3(0, 0));

		m.uvs = new Array<Vec2>();
		m.uvs.push(new Vec2(0, 1));
		m.uvs.push(new Vec2(1, 1));
		m.uvs.push(new Vec2(1, 0));

		m.uvs.push(new Vec2(1, 0));
		m.uvs.push(new Vec2(0, 0));
		m.uvs.push(new Vec2(0, 1));

		Tusk.assets.loadMesh("quad", m);
	}
}