package tusk.modules.tiled;

@:enum abstract LayerType(String) {
	var Tile = 'tilelayer';
	var Object = 'objectgroup';
	var Image = 'imagelayer';
}

@:enum abstract DrawOrder(String) {
	var TopDown = 'topdown';
	var Index = 'index';
}

class Layer {
	public var width:Int;
	public var height:Int;
	public var name:String;
	public var type:LayerType;
	public var visible:Bool;
	public var x:Int;
	public var y:Int;
	public var data:Array<Int>;
	public var objects:Array<Object>;
	public var properties:Dynamic;
	public var opacity:Float;
	public var draworder:DrawOrder;
}