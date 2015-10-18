package tusk;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestMatcher extends BuddySuite {
	public function new() {
		describe('Using a matcher', {
			it('should be able to chain-construct itself (`new Matcher().includes().includes().excludes()`)');
			it('should be able to match an entity with included components');
			it('should not match an entity which is missing included components');
			it('should not match entity that contain excluded components');
			it('shouldn\'t allow you to both include and exclude the same component');
			it('should take into account a components `enabled` status when matching entities');
		});
	}
}