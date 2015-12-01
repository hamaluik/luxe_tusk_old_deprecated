package tusk.resources;

import haxe.io.Path;
import haxe.ds.IntMap;

import glm.Vec2;
import promhx.Deferred;
import promhx.Promise;

using StringTools;

class FontChar {
	public var id:Int;
	public var minUV:Vec2 = new Vec2();
	public var maxUV:Vec2 = new Vec2();
	public var offset:Vec2 = new Vec2();
	public var xAdvance:Float;

	public function new(){}
}

class Font extends Asset {
	public var face:String;
	public var size:Float;

	public var lineHeight:Float;
	public var baseLine:Float;

	public var imageWidth:Float;
	public var imageHeight:Float;
	public var imageFileName:String;
	public var texture(default, null):Texture;

	public var chars(default, null):IntMap<FontChar> = new IntMap<FontChar>();

	#if snow
	public static function load(path:String, contents:String):Promise<Font> {
		var def:Deferred<Font> = new Deferred<Font>();
		var promise = def.promise();
		var font:Font = new Font(path);

		var lines:Array<String> = contents.split('\n');
		for(line in lines) {
			var parts:Array<String> = line.split(' ');
			if(parts.length < 1) continue;
			switch(parts[0]) {
				case 'info': {
					for(part in parts) {
						var idValue:Array<String> = part.split('=');
						if(idValue.length != 2) continue;
						switch(idValue[0]) {
							case 'face': font.face = idValue[1];
							case 'size': font.size = Std.parseFloat(idValue[1]);
						}
					}
				}
				case 'common': {
					for(part in parts) {
						var idValue:Array<String> = part.split('=');
						if(idValue.length != 2) continue;
						switch(idValue[0]) {
							case 'lineHeight': font.lineHeight = Std.parseFloat(idValue[1]);
							case 'baseLine': font.baseLine = Std.parseFloat(idValue[1]);
							case 'scaleW': font.imageWidth = Std.parseFloat(idValue[1]);
							case 'scaleH': font.imageHeight = Std.parseFloat(idValue[1]);
						}
					}
				}
				case 'page': {
					for(part in parts) {
						var idValue:Array<String> = part.split('=');
						if(idValue.length != 2) continue;
						switch(idValue[0]) {
							case 'file': font.imageFileName = idValue[1].replace('"', '');
						}
					}
				}
				case 'char': {
					var char:FontChar = new FontChar();
					for(part in parts) {
						var idValue:Array<String> = part.split('=');
						if(idValue.length != 2) continue;
						switch(idValue[0]) {
							case 'id': char.id = Std.parseInt(idValue[1]);
							case 'x': char.minUV.x = Std.parseFloat(idValue[1]) / font.imageWidth;
							case 'y': char.minUV.y = Std.parseFloat(idValue[1]) / font.imageHeight;
							case 'width': char.maxUV.x = Std.parseFloat(idValue[1]) / font.imageWidth;
							case 'height': char.maxUV.y = Std.parseFloat(idValue[1]) / font.imageHeight;
							case 'xoffset': char.offset.x = Std.parseFloat(idValue[1]);
							case 'yoffset': char.offset.y = Std.parseFloat(idValue[1]);
							case 'xadvance': char.xAdvance = Std.parseFloat(idValue[1]);
						}
					}
					char.maxUV.addVec2(char.minUV);
					font.chars.set(char.id, char);
				}
			}
		}

		// ok, font information should be loaded
		// now load the texture
		var basePath:String = Path.directory(path);
		var texturePath:String = Path.join([basePath, font.imageFileName]);
		Tusk.assets.loadTexture(texturePath).then(function(fontTexture:Texture) {
			font.texture = fontTexture;
			def.resolve(font);
		});

		return promise;
	}

	private function new(path:String) {
		super(path);
	}
	#else
	private function new(path:String) {
		super(path);
	}
	#end
}