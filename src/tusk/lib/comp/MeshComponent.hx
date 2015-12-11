package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Mesh;

#if snow
import snow.modules.opengl.GL;
import snow.modules.opengl.GL.GLBuffer;
#else
typedef GLBuffer = Int;
#end

/**
 * A tusk standard libary component for defining a mesh
 */
class MeshComponent extends Component {
	public var path:String;
	@:dontSerialize
	public var mesh:Mesh;

	@:dontSerialize
	public var vertexBuffer:GLBuffer = #if snow null #else 0 #end;
	public var bufferDirty:Bool = true;

	public function new(?path:String, ?mesh:Mesh) {
		this.path = mesh == null ? path : mesh.path;
		this.mesh = mesh;
		super();
	}
}