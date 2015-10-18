package tusk;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestEntityTools extends BuddySuite {
	public function new() {
		describe('Using entity tools', {
			it('should be able to add or remove components on the entity based on their type');
			it('should only allow one instance of each component type at a time ??TODO??');
			it('should allow retrieving a component instance based on its type');
			it('should allow you to replace a component instance with a new one');
		});
	}
}