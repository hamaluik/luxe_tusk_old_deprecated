package tusk.modules.tiled;

import haxe.Json;

@:enum abstract TileMapOrientation(String) {
	var Orthogonal = 'orthogonal';
	var Isometric = 'isometric';
	var Staggered = 'staggered';
}

@:enum abstract TileMapRenderOrder(String) {
	var RightDown = 'right-down';
	var RightUp = 'right-up';
	var LeftDown = 'left-down';
	var LeftUp = 'left-up';
}

class TileMap {
	public var width:Int;
	public var height:Int;
	public var tilewidth:Int;
	public var tileheight:Int;
	public var orientation:TileMapOrientation;
	public var layers:Array<TileLayer>;
	public var tilesets:Array<TileSet>;
	public var backgroundcolor:String;
	public var renderorder:TileMapRenderOrder;
	public var properties:Dynamic;
	public var nextobjectid:Int;
	public var version:Int;

	public function new(){}

	public static function fromJSON(json:String):TileMap {
		var tm:TileMap = cast Json.parse(json);
		return tm;
	}
}