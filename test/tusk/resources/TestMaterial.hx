package tusk.resources;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestMaterial extends BuddySuite {
	public function new() {
		describe('Using materials', {
			it('should require you to set a shader for the material');
			it('should allow you to set uniforms in the shader program');
			it('should provide a means for preparing the render function to render this material');
		});
	}
}