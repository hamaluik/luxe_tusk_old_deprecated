package tusk.defaults;

import tusk.resources.Mesh;
import glm.Vec2;
import glm.Vec3;

import promhx.Promise;

class Primitives {
	private function new(){}

	public static function loadQuad(unitSize:Float=1.0):Promise<Mesh> {
		var m:Mesh = new Mesh("quad");

		m.vertices = new Array<Vec3>();
		m.vertices.push(new Vec3(-0.5 * unitSize, -0.5 * unitSize));
		m.vertices.push(new Vec3( 0.5 * unitSize, -0.5 * unitSize));
		m.vertices.push(new Vec3( 0.5 * unitSize,  0.5 * unitSize));

		m.vertices.push(new Vec3( 0.5 * unitSize,  0.5 * unitSize));
		m.vertices.push(new Vec3(-0.5 * unitSize,  0.5 * unitSize));
		m.vertices.push(new Vec3(-0.5 * unitSize, -0.5 * unitSize));

		m.uvs = new Array<Vec2>();
		m.uvs.push(new Vec2(0.0, 1.0));
		m.uvs.push(new Vec2(1.0, 1.0));
		m.uvs.push(new Vec2(1.0, 0.0));

		m.uvs.push(new Vec2(1.0, 0.0));
		m.uvs.push(new Vec2(0.0, 0.0));
		m.uvs.push(new Vec2(0.0, 1.0));

		return Tusk.assets.loadMesh("quad", m);
	}
}