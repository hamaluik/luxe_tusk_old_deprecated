package;
import buddy.*;
import tusk.*;

using buddy.Should;

class TestMain implements Buddy<[Tests]>{}

class Tests extends BuddySuite {
	public function new() {
		describe('Using Tusk', {
			var tusk:tusk.Tusk = new Tusk();

			it('should correctly add positive integers', {
				tusk.add(1, 2).should.be(3);
			});
			it('should correctly add positive decimals', {
				tusk.add(1.3, 4.1).should.beCloseTo(5.4, 2);
			});
		});
	}
}