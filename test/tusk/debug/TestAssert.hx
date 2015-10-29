package tusk.debug;

import buddy.*;
import tusk.events.*;
using buddy.Should;

class TestAssert extends BuddySuite {
	public function new() {
		describe('Creating assertions', {
			it('should not do anything if an assertion passes', {
				function() {
					var v:Int = 42;
					Assert.assert(v == 42);
				}.should.not.throwType(tusk.debug.Exception);
			});
			it('should throw an Exception if an assertion fails', {
				function() {
					var v:Int = -7;
					Assert.assert(v >= 0);
				}.should.throwType(tusk.debug.Exception);
			});
		});
	}
}