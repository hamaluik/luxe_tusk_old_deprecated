package;
import buddy.*;
import tusk.*;

using buddy.Should;

class TestMain implements Buddy<[Tests]>{}

class Tests extends BuddySuite {
	public function new() {
		describe('Using tusk', {
			it('should allow rapid development');
			it('should generate better test cases');
		});
	}
}