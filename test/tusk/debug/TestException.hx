package tusk.debug;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestException extends BuddySuite {
	public function new() {
		describe('Creating exceptions', {
			it('should allow a \'fatal\' flag to be set');
		});
	}
}