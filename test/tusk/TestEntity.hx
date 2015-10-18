package tusk;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestEntity extends BuddySuite {
	public function new() {
		describe('Using an entity', {
			it('should increment the entity ID counter when it gets created');
			it('should be possible to enable or disable it');
		});
	}
}