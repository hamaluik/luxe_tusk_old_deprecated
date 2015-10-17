package tusk.util;

import buddy.*;
import tusk.util.Vector;
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
			});
			it("should calculate the length (2-norm) of a vector", {
				(new Vector(1, 1).length).should.beCloseTo(1.41421356237, 11);
			});
			it("should normalize a vector with a magnitude > 0", {
				(new Vector(10, 4).normalized.length).should.beCloseTo(1, 10);
			});
			it("shouldn't crash when normalizing a vector with a magnitude of 0", {
				(new Vector(0, 0).normalized.length).should.beCloseTo(0, 10);
			});
			it("should respect scalar math", {
				var v:Vector = new Vector(10, 4);
				(v * 2.5).x.should.beCloseTo(25, 10);
				(v * 2.5).y.should.beCloseTo(10, 10);
				(v / 2).x.should.beCloseTo(5, 10);
				(v / 2).y.should.beCloseTo(2, 10);
				(v + 3).x.should.beCloseTo(13, 10);
				(v + 3).y.should.beCloseTo(7, 10);
				(v - 7).x.should.beCloseTo(3, 10);
				(v - 7).y.should.beCloseTo(-3, 10);
			});
			it("should be able to add and subtract other vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
				(a + b).x.should.beCloseTo(13, 10);
				(a + b).y.should.beCloseTo(11, 10);
				(a - b).x.should.beCloseTo(-7, 10);
				(a - b).y.should.beCloseTo(-3, 10);
			});
			it("should be able to calculate the scalar cross-product between two vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
				(a * b).should.beCloseTo(-19, 10);
				(b * a).should.beCloseTo(19, 10);
			});
			it("should be able to calculate the triple cross-product between three vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
				var c:Vector = new Vector(-4, 2);
				Vector.tripleCrossProduct(a, b, c).x.should.beCloseTo(192, 10);
				Vector.tripleCrossProduct(a, b, c).y.should.beCloseTo(-144, 10);
			});
			it("should be able to calculate the dot product between two vectors", {
				var a:Vector = new Vector(3, 4);
				var b:Vector = new Vector(10, 7);
				(a % b).should.beCloseTo(58, 10);
			});
			it("should be able to make a string representation of itself", {
				var v:Vector = new Vector(3, 4);
				v.toString().should.be("[3, 4]");
			});
		});
	}
}