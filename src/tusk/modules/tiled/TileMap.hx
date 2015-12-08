package tusk.modules.tiled;

import haxe.Json;
import glm.Vec2;
import glm.Vec3;
import glm.Vec4;
import promhx.Promise;
import tusk.resources.Mesh;
import tusk.debug.Log;

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
	public var layers:Array<Layer>;
	public var tilesets:Array<TileSet>;
	public var backgroundcolor:Vec4;
	public var renderorder:TileMapRenderOrder;
	public var properties:Dynamic;
	public var nextobjectid:Int;
	public var version:Int;

	public function new(){}

	public static function fromJSON(json:String):TileMap {
		var tm:TileMap = cast Json.parse(json);
		return tm;
	}

	public static function buildMesh(tm:TileMap, path:String, zSpacing:Float=0.1):Promise<Mesh> {
		var m:Mesh = new Mesh(path);
		m.vertices = new Array<Vec3>();
		m.uvs = new Array<Vec2>();

		// figure out the tiles
		// only deal with singular tilesets for now
		if(tm.tilesets.length != 1) {
			throw new tusk.debug.Exception('TileMap loader can only deal with singular tilesets for now!');
		}
		var tileSize:Vec2 = new Vec2(tm.tilesets[0].tilewidth, tm.tilesets[0].tileheight);
		var tileSizeInUV:Vec2 = new Vec2(
			tm.tilesets[0].tilewidth / tm.tilesets[0].imagewidth,
			tm.tilesets[0].tileheight / tm.tilesets[0].imageheight
		);
		var tileUVBases:Array<Vec2> = new Array<Vec2>();
		tileUVBases.push(null); // the 'empty' tile
		// build the tileset!
		var tilePos:Vec2 = new Vec2(0, 0);
		while(tilePos.y < tm.tilesets[0].imageheight) {
			tilePos.x = 0;
			while(tilePos.x < tm.tilesets[0].imagewidth) {
				tileUVBases.push(new Vec2(
					tilePos.x / tm.tilesets[0].imagewidth,
					tilePos.y / tm.tilesets[0].imageheight
				));
				tilePos.x += tm.tilesets[0].tilewidth;
			}
			tilePos.y += tm.tilesets[0].tileheight;
		}

		// now build the actual vertices
		var pos:Vec3 = new Vec3(0, 0, 0);
		for(layer in tm.layers) {
			if(layer.type != tusk.modules.tiled.Layer.LayerType.Tile) {
				continue;
			}

			// now build the layer!
			pos.x = 0;
			pos.y = layer.height * tileSize.y;
			for(gid in layer.data) {
				// skip empty tiles
				if(gid != 0) {
					//    2
					//  / |
					// 0--1
					m.vertices.push(new Vec3(pos.x, pos.y, pos.z));
					m.uvs.push(new Vec2(tileUVBases[gid].x, tileUVBases[gid].y + tileSizeInUV.y));

					m.vertices.push(new Vec3(pos.x + tileSize.x, pos.y, pos.z));
					m.uvs.push(new Vec2(tileUVBases[gid].x + tileSizeInUV.x, tileUVBases[gid].y + tileSizeInUV.y));

					m.vertices.push(new Vec3(pos.x + tileSize.x, pos.y + tileSize.y, pos.z));
					m.uvs.push(new Vec2(tileUVBases[gid].x + tileSizeInUV.x, tileUVBases[gid].y));

					// 1--0
					// | /  
					// 2   
					m.vertices.push(new Vec3(pos.x + tileSize.x, pos.y + tileSize.y, pos.z));
					m.uvs.push(new Vec2(tileUVBases[gid].x + tileSizeInUV.x, tileUVBases[gid].y));

					m.vertices.push(new Vec3(pos.x, pos.y + tileSize.y, pos.z));
					m.uvs.push(new Vec2(tileUVBases[gid].x, tileUVBases[gid].y));

					m.vertices.push(new Vec3(pos.x, pos.y, pos.z));
					m.uvs.push(new Vec2(tileUVBases[gid].x, tileUVBases[gid].y + tileSizeInUV.y));
				}

				pos.x += tileSize.x;
				if(pos.x >= (layer.width * tileSize.x)) {
					pos.x = 0;
					pos.y -= tileSize.y;
				}
			}

			pos.z += zSpacing;
		}

		return Tusk.assets.loadMesh(path, m);
	}
}