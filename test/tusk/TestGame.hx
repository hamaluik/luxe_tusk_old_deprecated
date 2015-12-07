package tusk;

import buddy.*;
import tusk.events.*;
using buddy.Should;

private class MockGame extends Game {
	public var a:Bool = false;

    override public function setup() {
    	a = true;
    }
}

class TestGame extends BuddySuite {
	public function new() {
		describe('Using a game', {
			it('should be able to subscribe to core events', {
				var game:MockGame = new MockGame();
				var tusk:Tusk = new Tusk(game);
				tusk.ready();
				game.a.should.be(true);
			});
		});
	}
}