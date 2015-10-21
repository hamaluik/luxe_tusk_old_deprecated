package tusk.debug;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestException extends BuddySuite {
	public function new() {
		describe('Creating exceptions', {
			it('should allow a message to be set', {
				var e:Exception = new Exception('test');
				e.message.should.be('test');
			});
			it('should allow a \'fatal\' flag to be set', {
				var e:Exception = new Exception('test', true);
				e.fatal.should.be(true);
			});
		});
	}
}