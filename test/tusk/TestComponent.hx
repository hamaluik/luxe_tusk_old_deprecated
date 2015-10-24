package tusk;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestComponent extends BuddySuite {
	public function new() {
		describe('Using a component', {
			var tusk:Tusk;
			before({
				tusk = new Tusk(new Game());
			});

			it('should notify the game when it is added or removed from an entity');

			after({
				tusk = null;
			});
		});
	}
}