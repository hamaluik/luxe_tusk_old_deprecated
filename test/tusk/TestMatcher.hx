package tusk;

import buddy.*;
import tusk.*;
import tusk.debug.Exception;
using buddy.Should;

private class CompA extends Component {}
private class CompB extends Component {}

class TestMatcher extends BuddySuite {
	public function new() {
		describe('Using a matcher', {
			var tusk:Tusk;
			var m:Matcher;
			var e:Entity;

			before({
				tusk = new Tusk(new Game());
				m = new Matcher();
				e = new Entity();
			});
			it('should be able to chain-construct itself (`new Matcher().include().include().exclude()`)', {
				var a:Matcher = m.include(CompA);
				a.should.be(m);
				var b:Matcher = m.exclude(CompB);
				b.should.be(m);
			});
			it('should be able to match an entity with included components', {
				e.push(new CompA());
				m.include(CompA);
				var r:Bool = m.matchesEntity(e);
				Tusk.removeEntity(e);
				r.should.be(true);
			});
			it('should not match an entity which is missing included components', {
				m.include(CompA);
				var r:Bool = m.matchesEntity(e);
				r.should.be(false);
			});
			it('should not match entity that contains excluded components', {
				e.push(new CompA());
				e.push(new CompB());
				m.include(CompA).exclude(CompB);
				var r:Bool = m.matchesEntity(e);
				r.should.be(false);
			});
			it('shouldn\'t allow you to both include and exclude the same component', {
				m.include(CompA);
				m.include.bind(CompA).should.throwType(Exception);
			});
			it('should take into account a components `enabled` status when matching entities', {
				var ca:CompA = new CompA();
				ca.enabled = false;
				e.push(ca);
				m.include(CompA);
				var r:Bool = m.matchesEntity(e);
				r.should.be(false);
			});

			after({
				e = null;
				m = null;
				tusk = null;
			});
		});
	}
}