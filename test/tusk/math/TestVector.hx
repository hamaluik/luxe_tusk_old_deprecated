package tusk.math;

import buddy.*;
import tusk.math.Vector;
import tusk.events.*;
import tusk.debug.Exception;
using buddy.Should;

class TestVector extends BuddySuite {
	public function new() {
		describe('Using vectors', {
			it("should create zero vectors that are actually 0", {
				var v:Vector = Vector.zero;
				v.x.should.be(0);
				v.y.should.be(0);
				v.z.should.be(0);
			});
			it("should calculate the length (2-norm) of a vector", {
				(new Vector(1, 1).length).should.beCloseTo(1.41421356237, 11);
			});
			it("should normalize a vector with a magnitude > 0", {
				(new Vector(10, 4).normalize().length).should.beCloseTo(1, 10);
			});
			it("shouldn't crash when normalizing a vector with a magnitude of 0", {
				(new Vector(0, 0).normalize( ).length).should.beCloseTo(0, 10);
			});
			it("should respect scalar math", {
				var v:Vector = new Vector(10, 4);
			});
			it("should be able to add and subtract other vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
			});
			it("should be able to calculate the scalar cross-product between two vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
			});
			it("should be able to calculate the triple cross-product between three vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
				var c:Vector = new Vector(-4, 2);
			});
			it("should be able to calculate the dot product between two vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
			});
			it("should be able to make a string representation of itself", {
				var v:Vector = new Vector(3, 4, 1);
				v.toString().should.be("[3, 4, 1]");
			});
			it('should be serializable', {
				var a:Vector = new Vector(1, 2, 3);

				var s:haxe.Serializer = new haxe.Serializer();
				s.serialize(a);
				var serialized:String = s.toString();

				var u:haxe.Unserializer = new haxe.Unserializer(serialized);
				var b:Vector = u.unserialize();
				b.x.should.be(1);
				b.y.should.be(2);
				b.z.should.be(3);
			});
		});
	}
}