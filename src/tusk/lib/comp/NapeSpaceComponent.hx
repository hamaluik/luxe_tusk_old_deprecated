package tusk.lib.comp;

#if nape

import tusk.Component;

import nape.space.Space;

class NapeSpaceComponent extends Component {
	public var space:Space;

	public function new(gravity:glm.Vec2) {
		space = new Space(nape.geom.Vec2.weak(gravity.x, gravity.y));
		super();
	}
}

#end