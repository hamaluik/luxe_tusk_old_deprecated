package tusk;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestComponent extends BuddySuite {
	public function new() {
		describe('Using a component', {
			it('should notify the game when it becomes enabled or disabled');
			it('should notify the game when it is added or removed from an entity');
		});
	}
}