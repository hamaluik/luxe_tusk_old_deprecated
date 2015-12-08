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
 * A tŭsk standard libary component for defining a mesh
 */
class MeshComponent extends Component {
	public var meshPath:String;
	@:dontSerialize
	public var mesh:Mesh;

	@:dontSerialize
	public var vertexBuffer:GLBuffer = #if snow null #else 0 #end;
	public var bufferDirty:Bool = true;

	public function new(?meshPath:String, ?mesh:Mesh) {
		this.meshPath = meshPath;
		this.mesh = mesh;
		super();
	}
}