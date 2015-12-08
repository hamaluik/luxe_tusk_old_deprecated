package tusk.resources;

import glm.Vec2;
import glm.Vec3;
import glm.Vec4;

class Mesh extends Asset {
	public var vertices:Array<Vec3>;
	public var uvs:Array<Vec2>;
	public var colours:Array<Vec4>;

	public function new(path:String) {
		super(path);
	}
}