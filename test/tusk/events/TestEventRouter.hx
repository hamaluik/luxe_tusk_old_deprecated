package tusk.events;

import buddy.*;
import tusk.events.*;
import tusk.debug.Exception;
using buddy.Should;

class TestEventRouter extends BuddySuite {
	public function new() {
		describe('Using the event router', {
			var router:EventRouter;
			var testValueA:Int;
			var testValueB:Int;

			before({
				router = new EventRouter();
				testValueA = 0;
				testValueB = 0;
			});

			it('should allow you to register event handlers', {
				router.registerHandler.bind(EventType.Start, function(data:StartEvent) {}).should.not.throwType(Exception);
			});
			it('shouldn\'t allow you to register null event handlers', {
				router.registerHandler.bind(EventType.Start, null).should.throwType(Exception);
			});
			it('should allow you to unregister event handlers', {
				router.unregisterHandler.bind(EventType.Start, function(data:StartEvent) {}).should.not.throwType(Exception);
			});
			it('should route events to a connected handler', {
				router.registerHandler(EventType.Start, function(data:StartEvent) {
					testValueA = 42;
				});
				testValueA.should.be(0);
				router.onEvent.bind(EventType.Start).should.not.throwType(Exception);
				testValueA.should.be(42);
			});
			it('shouldn\'t route events to handlers on other listeners', {
				router.registerHandler(EventType.Start, function(data:StartEvent) {
					testValueA = 42;
				});
				testValueA.should.be(0);
				router.onEvent.bind(EventType.Update).should.not.throwType(Exception);
				testValueA.should.be(0);
			});
			it('should route events to ALL connected handlers', {
				router.registerHandler(EventType.Start, function(data:StartEvent) {
					testValueA = 42;
				});
				router.registerHandler(EventType.Start, function(data:StartEvent) {
					testValueB = 5;
				});
				testValueA.should.be(0);
				testValueB.should.be(0);
				router.onEvent.bind(EventType.Start).should.not.throwType(Exception);
				testValueA.should.be(42);
				testValueB.should.be(5);
			});
			it('should pass event data to the handler', {
				router.registerHandler(EventType.Update, function(data:UpdateEvent) {
					testValueA = Std.int(data.dt);
					testValueB = Std.int(data.alpha);
				});
				testValueA.should.be(0);
				testValueB.should.be(0);
				router.onEvent.bind(EventType.Update, {
					dt: 123,
					alpha: 78
				}).should.not.throwType(Exception);
				testValueA.should.be(123);
				testValueB.should.be(78);
			});

			after({
				router = null;
			});
		});
	}
}