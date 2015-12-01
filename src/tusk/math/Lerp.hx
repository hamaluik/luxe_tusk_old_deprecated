package tusk.math;

import glm.Vec2;
import glm.Vec3;
import glm.Vec4;

class Lerp {
	public static function LerpF(a:Float, b:Float, t:Float):Float {
		return a + t * (b - a);
	}

	public static function LerpV2(a:Vec2, b:Vec2, t:Float):Vec2 {
		a.x = LerpF(a.x, b.x, t);
		a.y = LerpF(a.y, b.y, t);
		return a;
	}

	public static function LerpV3(a:Vec3, b:Vec3, t:Float):Vec3 {
		a.x = LerpF(a.x, b.x, t);
		a.y = LerpF(a.y, b.y, t);
		a.z = LerpF(a.z, b.z, t);
		return a;
	}

	public static function LerpV4(a:Vec4, b:Vec4, t:Float):Vec4 {
		a.x = LerpF(a.x, b.x, t);
		a.y = LerpF(a.y, b.y, t);
		a.z = LerpF(a.z, b.z, t);
		a.w = LerpF(a.w, b.w, t);
		return a;
	}
}