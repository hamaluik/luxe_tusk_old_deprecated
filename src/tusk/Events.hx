package tusk;

typedef Start = {};
typedef Update = { var dt:Float; var alpha:Float; };
typedef Destroy = {};

@:enum abstract EventType(Int) from Int to Int {
	var Start    = 1;
	var Update   = 2;
	var Destroy  = 3;
}