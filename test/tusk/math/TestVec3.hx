package tusk.math;

import buddy.*;
import tusk.math.Vector;
import tusk.events.*;
import tusk.debug.Exception;
using buddy.Should;

class TestVector extends BuddySuite {
	public function new() {
		describe('Using vectors', {
			it("should create zero vectors", {
			});
			it("should calculate the length (2-norm) of a vector", {
			});
			it("should normalize a vector with a magnitude > 0", {
			});
			it("shouldn't crash when normalizing a vector with a magnitude of 0", {
			});
			it("should respect scalar math", {
			});
			it("should be able to add and subtract other vectors", {
			});
			it("should be able to calculate the scalar cross-product between two vectors", {
			});
			it("should be able to calculate the triple cross-product between three vectors", {
			});
			it("should be able to calculate the dot product between two vectors", {
			});
			it('should be serializable', {
			});
		});
	}
}