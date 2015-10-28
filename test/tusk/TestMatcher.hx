package tusk;

import buddy.*;
import tusk.*;
import tusk.debug.Exception;
using buddy.Should;

import fixtures.CompA;
import fixtures.CompB;

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
				var a:Matcher = m.include(CompA.tid);
				a.should.be(m);
				var b:Matcher = m.exclude(CompB.tid);
				b.should.be(m);
			});
			it('should be able to match an entity with included components', {
				e.push(new CompA());
				m.include(CompA.tid);
				var r:Bool = m.matchesEntity(e);
				Tusk.removeEntity(e);
				r.should.be(true);
			});
			it('should not match an entity which is missing included components', {
				m.include(CompA.tid);
				var r:Bool = m.matchesEntity(e);
				r.should.be(false);
			});
			it('should not match entity that contains excluded components', {
				e.push(new CompA());
				e.push(new CompB());
				m.include(CompA.tid).exclude(CompB.tid);
				var r:Bool = m.matchesEntity(e);
				r.should.be(false);
			});
			it('shouldn\'t allow you to both include and exclude the same component', {
				m.include(CompA.tid);
				m.exclude.bind(CompA.tid).should.throwType(Exception);
			});

			after({
				e = null;
				m = null;
				tusk = null;
			});
		});
	}
}