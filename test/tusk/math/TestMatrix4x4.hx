package tusk.math;

import buddy.*;
import tusk.math.Matrix4x4;
import tusk.events.*;
import tusk.debug.Exception;
using buddy.Should;

class TestMatrix4x4 extends BuddySuite {
	public function new() {
		describe('Using the 4x4 matrix class', {
			it('should provide an \'easy\' interface for constructing matrices');
			it('should be able to multliply matrices');
			it('should be able to export matrices in an array for GL');
		});
	}
}