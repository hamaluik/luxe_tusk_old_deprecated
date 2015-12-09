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

	public function clone(newPath:String):Mesh {
		var m:Mesh = new Mesh(newPath);
		if(vertices != null) {
			m.vertices = new Array<Vec3>();
			for(vertex in vertices) {
				m.vertices.push(vertex.clone());
			}
		}

		if(uvs != null) {
			m.uvs = new Array<Vec2>();
			for(uv in uvs) {
				m.uvs.push(uv.clone());
			}
		}

		if(colours != null) {
			m.colours = new Array<Vec4>();
			for(colour in colours) {
				m.colours.push(colour.clone());
			}
		}

		return m;
	}
}