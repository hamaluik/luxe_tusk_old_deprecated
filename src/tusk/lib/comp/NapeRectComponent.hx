package tusk.lib.comp;

#if nape

import nape.phys.Material;
import nape.space.Space;
import nape.phys.Body;
import nape.phys.BodyType;
import nape.shape.Polygon;
import tusk.Component;

class NapeRectComponent extends Component {
	public var body:Body;

	public function new(space:Space, bodyType:BodyType, center:glm.Vec2, size:glm.Vec2, ?material:Material) {
		body = new Body(bodyType);
		var verts = Polygon.box(size.x, size.y);
		body.shapes.add(new Polygon(verts, material));
		body.position.setxy(center.x, center.y);
		body.rotation = 0;
		body.space = space;
		super();
	}
}

#end