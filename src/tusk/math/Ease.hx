package tusk.math;

class Ease {
	public static function InQuad(t:Float, b:Float, c:Float, d:Float):Float {
		return c*(t/=d)*t + b;
	}

	public static function OutQuad(t:Float, b:Float, c:Float, d:Float):Float {
		return -c *(t/=d)*(t-2) + b;
	}

	public static function InOutQuad(t:Float, b:Float, c:Float, d:Float):Float {
		if ((t/=d/2) < 1) return c/2*t*t + b;
		return -c/2 * ((--t)*(t-2) - 1) + b;
	}

	public static function InCubic(t:Float, b:Float, c:Float, d:Float):Float {
		return c*(t/=d)*t*t + b;
	}

	public static function OutCubic(t:Float, b:Float, c:Float, d:Float):Float {
		return c*((t=t/d-1)*t*t + 1) + b;
	}

	public static function InOutCubic(t:Float, b:Float, c:Float, d:Float):Float {
		if ((t/=d/2) < 1) return c/2*t*t*t + b;
		return c/2*((t-=2)*t*t + 2) + b;
	}

	public static function InQuart(t:Float, b:Float, c:Float, d:Float):Float {
		return c*(t/=d)*t*t*t + b;
	}

	public static function OutQuart(t:Float, b:Float, c:Float, d:Float):Float {
		return -c * ((t=t/d-1)*t*t*t - 1) + b;
	}

	public static function InOutQuart(t:Float, b:Float, c:Float, d:Float):Float {
		if ((t/=d/2) < 1) return c/2*t*t*t*t + b;
		return -c/2 * ((t-=2)*t*t*t - 2) + b;
	}

	public static function InQuint(t:Float, b:Float, c:Float, d:Float):Float {
		return c*(t/=d)*t*t*t*t + b;
	}

	public static function OutQuint(t:Float, b:Float, c:Float, d:Float):Float {
		return c*((t=t/d-1)*t*t*t*t + 1) + b;
	}

	public static function InOutQuint(t:Float, b:Float, c:Float, d:Float):Float {
		if ((t/=d/2) < 1) return c/2*t*t*t*t*t + b;
		return c/2*((t-=2)*t*t*t*t + 2) + b;
	}

	public static function InSine(t:Float, b:Float, c:Float, d:Float):Float {
		return -c * Math.cos(t/d * (Math.PI/2)) + c + b;
	}

	public static function OutSine(t:Float, b:Float, c:Float, d:Float):Float {
		return c * Math.sin(t/d * (Math.PI/2)) + b;
	}

	public static function InOutSine(t:Float, b:Float, c:Float, d:Float):Float {
		return -c/2 * (Math.cos(Math.PI*t/d) - 1) + b;
	}

	public static function InExpo(t:Float, b:Float, c:Float, d:Float):Float {
		return (t==0) ? b : c * Math.pow(2, 10 * (t/d - 1)) + b;
	}

	public static function OutExpo(t:Float, b:Float, c:Float, d:Float):Float {
		return (t==d) ? b+c : c * (-Math.pow(2, -10 * t/d) + 1) + b;
	}

	public static function InOutExpo(t:Float, b:Float, c:Float, d:Float):Float {
		if (t==0) return b;
		if (t==d) return b+c;
		if ((t/=d/2) < 1) return c/2 * Math.pow(2, 10 * (t - 1)) + b;
		return c/2 * (-Math.pow(2, -10 * --t) + 2) + b;
	}

	public static function InCirc(t:Float, b:Float, c:Float, d:Float):Float {
		return -c * (Math.sqrt(1 - (t/=d)*t) - 1) + b;
	}

	public static function OutCirc(t:Float, b:Float, c:Float, d:Float):Float {
		return c * Math.sqrt(1 - (t=t/d-1)*t) + b;
	}

	public static function InOutCirc(t:Float, b:Float, c:Float, d:Float):Float {
		if ((t/=d/2) < 1) return -c/2 * (Math.sqrt(1 - t*t) - 1) + b;
		return c/2 * (Math.sqrt(1 - (t-=2)*t) + 1) + b;
	}

	public static function InElastic(t:Float, b:Float, c:Float, d:Float):Float {
		var s:Float=1.70158;var p:Float=0;var a:Float=c;
		if (t==0) return b;  if ((t/=d)==1) return b+c;  p=d*.3;
		if (a < Math.abs(c)) { a=c; var s:Float=p/4; }
		else var s = p/(2*Math.PI) * Math.asin (c/a);
		return -(a*Math.pow(2,10*(t-=1)) * Math.sin( (t*d-s)*(2*Math.PI)/p )) + b;
	}

	public static function OutElastic(t:Float, b:Float, c:Float, d:Float):Float {
		var s:Float=1.70158;var p:Float=0;var a:Float=c;
		if (t==0) return b;  if ((t/=d)==1) return b+c;  p=d*.3;
		if (a < Math.abs(c)) { a=c; var s:Float=p/4; }
		else var s = p/(2*Math.PI) * Math.asin (c/a);
		return a*Math.pow(2,-10*t) * Math.sin( (t*d-s)*(2*Math.PI)/p ) + c + b;
	}

	public static function InOutElastic(t:Float, b:Float, c:Float, d:Float):Float {
		var s:Float=1.70158;var p:Float=0;var a:Float=c;
		if (t==0) return b;  if ((t/=d/2)==2) return b+c;  p=d*(.3*1.5);
		if (a < Math.abs(c)) { a=c; var s:Float=p/4; }
		else var s = p/(2*Math.PI) * Math.asin (c/a);
		if (t < 1) return -.5*(a*Math.pow(2,10*(t-=1)) * Math.sin( (t*d-s)*(2*Math.PI)/p )) + b;
		return a*Math.pow(2,-10*(t-=1)) * Math.sin( (t*d-s)*(2*Math.PI)/p )*.5 + c + b;
	}

	public static function InBack(t:Float, b:Float, c:Float, d:Float):Float {
		var s:Float = 1.70158;
		return c*(t/=d)*t*((s+1)*t - s) + b;
	}

	public static function OutBack(t:Float, b:Float, c:Float, d:Float):Float {
		var s:Float = 1.70158;
		return c*((t=t/d-1)*t*((s+1)*t + s) + 1) + b;
	}

	public static function InOutBack(t:Float, b:Float, c:Float, d:Float):Float {
		var s:Float = 1.70158;
		if ((t/=d/2) < 1) return c/2*(t*t*(((s*=(1.525))+1)*t - s)) + b;
		return c/2*((t-=2)*t*(((s*=(1.525))+1)*t + s) + 2) + b;
	}

	public static function InBounce(t:Float, b:Float, c:Float, d:Float):Float {
		return c - OutBounce(d-t, b, c, d) + b;
	}

	public static function OutBounce(t:Float, b:Float, c:Float, d:Float):Float {
		if ((t/=d) < (1/2.75)) {
			return c*(7.5625*t*t) + b;
		} else if (t < (2/2.75)) {
			return c*(7.5625*(t-=(1.5/2.75))*t + .75) + b;
		} else if (t < (2.5/2.75)) {
			return c*(7.5625*(t-=(2.25/2.75))*t + .9375) + b;
		} else {
			return c*(7.5625*(t-=(2.625/2.75))*t + .984375) + b;
		}
	}

	public static function InOutBounce(t:Float, b:Float, c:Float, d:Float):Float {
		if (t < d/2) return InBounce(t*2, 0, c, d) * .5 + b;
		return OutBounce(t*2-d, 0, c, d) * .5 + c*.5 + b;
	}
}