package tusk.math;

import buddy.*;
import tusk.math.Mat4;
import tusk.events.*;
import tusk.debug.*;
using buddy.Should;

class TestMat4 extends BuddySuite {
	public function new() {
		describe('Using 4x4 matrices', {
			var ma:Mat4;
			before({
				ma = new Mat4();
			});

			it('should allow array access', {
				ma[0].should.be(0);
			});
			it('should take an array of floats as a constructor', {
				function() {
					ma = new Mat4([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
				}.should.not.throwType(tusk.debug.Exception);
				function() {
					ma = new Mat4([]);
				}.should.throwType(tusk.debug.Exception);
			});
			it('should be able to create a zero matrix', {
				ma.zero();
				for(i in 0...16) {
					ma[i].should.be(0);
				}
			});
			it('should be able to transpose itself', {
				ma.fromArray([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]);
				ma.transpose();
				var out:Array<Float> = [0, 4, 8 , 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15];
				for(i in 0...16) {
					ma[i].should.be(out[i]);
				}
			});
			it('should be able to multliply itself by another matrix', {
				ma.fromArray([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]);
				var mb:Mat4 = new Mat4([0, 4, 8 , 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15]);
				ma.multiply(mb);
				var out:Array<Float> = [224, 248, 272, 296, 248, 276, 304, 332, 272, 304, 336, 368, 296, 332, 368, 404];
				for(i in 0...16) {
					ma[i].should.be(out[i]);
				}
			});
			it('should be able to multliply matrices using the multiplication operator', {
				ma.fromArray([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]);
				var mb:Mat4 = new Mat4([0, 4, 8 , 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15]);
				var mc:Mat4 = ma * mb;
				var out:Array<Float> = [224, 248, 272, 296, 248, 276, 304, 332, 272, 304, 336, 368, 296, 332, 368, 404];
				for(i in 0...16) {
					mc[i].should.be(out[i]);
				}
			});
			it('should be serializable', {
				ma.fromArray([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]);

				var s:haxe.Serializer = new haxe.Serializer();
				s.serialize(ma);
				var serialized:String = s.toString();

				var u:haxe.Unserializer = new haxe.Unserializer(serialized);
				var mb:Mat4 = u.unserialize();
				
				var out:Array<Float> = [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15];
				for(i in 0...16) {
					mb[i].should.be(out[i]);
				}
			});

			after({
				ma = null;
			});
		});
	}
}