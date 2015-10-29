package tusk.math;

import buddy.*;
import tusk.math.Matrix4x4;
import tusk.events.*;
import tusk.debug.*;
using buddy.Should;

class TestMatrix4x4 extends BuddySuite {
	public function new() {
		describe('Using the 4x4 matrix class', {
			it('should provide an \'easy\' interface for constructing matrices', {
				function(){
					return new Matrix4x4([0, 0, 0, 0,  0, 0, 0, 0,  0, 0, 0, 0,  0, 0, 0, 0]);
				}.should.not.throwType(Exception);
			});
			it('should throw an exception if constructing a matrice with the wrong number of elements', {
				function(){
					return new Matrix4x4([0, 0, 0, 0]);
				}.should.throwType(Exception);
			});
			it('should be able to multliply matrices', {
				// TODO: better test
				var a:Matrix4x4 = new Matrix4x4();
				var b:Matrix4x4 = new Matrix4x4([1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0,  0, 0, 0, 1]);
				var c = a.multiplyMatrix(b);
				var r = c.get(0, 0);
				r.should.be(0);
			});
			it('should be able to export matrices in an array for GL', {
				var a:Matrix4x4 = new Matrix4x4([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]);
				var r:Float = a.buffer[1];
				r.should.be(2);
			});
			it('should be serializable', {
				var a:Matrix4x4 = new Matrix4x4([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]);

				var s:haxe.Serializer = new haxe.Serializer();
				s.serialize(a);
				var serialized:String = s.toString();

				var u:haxe.Unserializer = new haxe.Unserializer(serialized);
				var b:Matrix4x4 = u.unserialize();
				var r:Float = b.buffer[11];
				r.should.be(12);
			});
		});
	}
}