package tusk;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestProcessor extends BuddySuite {
	public function new() {
		describe('Using a processor', {
			it('should be able to subscribe to core events');
			it('should be possible to enable and disable itself and other processors');
		});
	}
}