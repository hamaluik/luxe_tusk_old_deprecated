package tusk.resources;

import glm.Vec2;
import glm.Vec3;

class Mesh extends Asset {
	public var vertices:Array<Vec3>;
	public var uvs:Array<Vec2>;

	public function new(path:String) {
		super(path);
	}
}