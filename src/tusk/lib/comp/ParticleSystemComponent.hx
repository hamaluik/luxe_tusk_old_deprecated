package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Mesh;

import glm.Vec2;
import glm.Vec3;
import glm.Vec4;

#if snow
import snow.modules.opengl.GL;
import snow.modules.opengl.GL.GLBuffer;
import snow.api.buffers.Float32Array;
#else
import tusk.lib.comp.MeshComponent.GLBuffer;
typedef Float32Array = Array<Float>;
#end

typedef CustomParticleUpdater = Particle->ParticleSystemComponent->Float->Void;

class Particle {
	public var alive:Bool = false;
	public var vel:Vec3 = new Vec3();
	public var lifeTime:Float = 1;
	public var t:Float = 0;
	
	public var pos:Vec3 = new Vec3();
	public var lastPos:Vec3 = new Vec3();
	public var colour:Vec4 = new Vec4();
	public var lastColour:Vec4 = new Vec4();
	public var size:Float = 1;
	public var lastSize:Float = 1;

	public var seed:Float = 0;

	public function new(){}
}

class ParticleSystemComponent extends Component {
	public var particleCount:Int = 0;
	public var particles:Array<Particle> = null;

	public var emissionRate:Float = 100; // particles / second
	public var lifeTime:Vec2 = new Vec2(5, 10); // lifetime min / max

	public var startColour:Vec4 = new Vec4(1, 1, 1, 0.75);
	public var endColour:Vec4 = new Vec4(1, 1, 1, 0.5);

	public var startSize:Float = 2;
	public var endSize:Float = 2;

	public var startPositionRange:Vec3 = new Vec3(256, 0, 0);
	public var startVelocityMin:Vec3 = new Vec3(0, 0, 0);
	public var startVelocityMax:Vec3 = new Vec3(0, 0, 0);
	public var gravity:Vec3 = new Vec3(0, -10, 0);

	public var preSimulateTime:Float = 0;
	public var customUpdater:CustomParticleUpdater = null;

	@:dontSerialize
	public var emissionAccumulator:Float = 0;

	@:dontSerialize
	public var bufferData:Float32Array;

	@:dontSerialize
	public var vertexBuffer:GLBuffer = #if snow null #else 0 #end;

	public function new(particleCount:Int, preSimulateTime:Float) {
		this.particleCount = particleCount;
		this.preSimulateTime = preSimulateTime;
		super();
	}
}