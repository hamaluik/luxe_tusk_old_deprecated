package tusk;

import buddy.*;
import tusk.*;
import tusk.debug.Exception;
using buddy.Should;

import fixtures.CompA;

class TestEntity extends BuddySuite {
	public function new() {
		describe('Using an entity', {
			var tusk:Tusk;
			var e:Entity;
			before({
				tusk = new Tusk(new Game());
				e = new Entity();
			});

			it('should increment the entity ID counter when it gets created', {
				var e1:Entity = new Entity();
				var e2:Entity = new Entity();
				e2.id.should.be(e1.id + 1);
			});
			it('should be possible to enable or disable it');
			it('should be possible to add components to it', {
				var has:Bool = e.hasType(CompA.tid);
				has.should.be(false);
				e.push.bind(new CompA()).should.not.throwType(Exception);
				has = e.hasType(CompA.tid);
				has.should.be(true);
			});
			it('shouldn\'t allow adding multiple components of the same type', {
				e.push(new CompA());
				e.push.bind(new CompA()).should.throwType(Exception);
			});
			it('should retrieve a component given its type', {
				var ca:CompA = new CompA();
				e.push(ca);
				var r:CompA = cast e.get(CompA.tid);
				r.should.be(ca);
			});
			it('should be able to remove components from an entity', {
				e.push(new CompA());
				var has:Bool = e.hasType(CompA.tid);
				has.should.be(true);
				e.removeType(CompA.tid);
				has = e.hasType(CompA.tid);
				has.should.be(false);
			});
			it('should be able to distinguish between inherited and parent component classes', {
				e.push(new Component());
				var ca:CompA = new CompA();
				e.push.bind(ca).should.not.throwType(Exception);
				e.get(CompA.tid).should.be(ca);
			});

			after({
				e = null;
				tusk = null;
			});
		});
	}
}