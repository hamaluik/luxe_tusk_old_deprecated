package tusk.lib.proc;

import tusk.debug.Log;
import tusk.lib.comp.TextComponent.TextAlign.Left;
import tusk.Matcher;
import tusk.Processor;
import tusk.events.*;
import tusk.lib.comp.*;

import glm.Vec3;
import glm.Vec2;
import tusk.resources.Font.FontChar;

class TextProcessor extends Processor {
	public function new(?entities:Array<Entity>) {
		matcher = new Matcher().include(MeshComponent.tid).include(TextComponent.tid);
		super(entities);
	}

	override public function onUpdate(event:UpdateEvent) {
		for(entity in entities) {
			var text:TextComponent = cast entity.get(TextComponent.tid);
			if(text.textDirty) {
				var mesh:MeshComponent = cast entity.get(MeshComponent.tid);
				mesh.bufferDirty = true;
				if(mesh.mesh == null) {
					mesh.mesh = Tusk.assets.getMesh(mesh.path);
				}
				mesh.mesh.vertices = new Array<Vec3>();
				mesh.mesh.uvs = new Array<Vec2>();

				// split it into lines
				var lines:Array<String> = text.text.split('\n');
				var offsets:Array<Float> = new Array<Float>();
				var yPos:Float = 0;
				for(line in lines) {
					// deal with alignment
					var textWidth:Float = 0;
					for(i in 0...line.length) {
						var code:Int = line.charCodeAt(i);
						var char:FontChar = text.font.chars.get(code);
						textWidth += char.xAdvance;
					}
					offsets.push(switch(text.align) {
						case Left: 0;
						case Right: -textWidth;
						case Centre: -textWidth / 2.0;
					});
				}

				var yPos:Float = switch(text.valign) {
					case Top: 0;
					case Bottom: lines.length * text.font.baseLine;
					case Centre: (lines.length * text.font.baseLine) / 2.0;
				};
				for(j in 0...lines.length) {
					var line:String = lines[j];
					var xPos:Float = offsets[j];
					var yTop:Float = yPos + text.font.baseLine;

					for(i in 0...line.length) {
						var code:Int = line.charCodeAt(i);
						var char:FontChar = text.font.chars.get(code);
						var offset:Vec3 = new Vec3(
							char.offset.x,
							yTop - char.size.y - char.offset.y,
							0);

						//    2
						//  / |
						// 0--1
						mesh.mesh.vertices.push(new Vec3(xPos, yPos) + offset);
						mesh.mesh.uvs.push(new Vec2(char.minUV.x, char.maxUV.y));
						mesh.mesh.vertices.push(new Vec3(xPos + char.size.x, yPos) + offset);
						mesh.mesh.uvs.push(new Vec2(char.maxUV.x, char.maxUV.y));
						mesh.mesh.vertices.push(new Vec3(xPos + char.size.x, yPos + char.size.y) + offset);
						mesh.mesh.uvs.push(new Vec2(char.maxUV.x, char.minUV.y));

						// 1--0
						// | /  
						// 2   
						mesh.mesh.vertices.push(new Vec3(xPos + char.size.x, yPos + char.size.y) + offset);
						mesh.mesh.uvs.push(new Vec2(char.maxUV.x, char.minUV.y));
						mesh.mesh.vertices.push(new Vec3(xPos, yPos + char.size.y) + offset);
						mesh.mesh.uvs.push(new Vec2(char.minUV.x, char.minUV.y));
						mesh.mesh.vertices.push(new Vec3(xPos, yPos) + offset);
						mesh.mesh.uvs.push(new Vec2(char.minUV.x, char.maxUV.y));

						xPos += char.xAdvance;
					}

					yPos -= text.font.baseLine;
				}

				//Log.info('Text is ${xPos} units big');
				//Log.info('There are ${mesh.mesh.vertices.length} vertices in the text mesh!');
				text.textDirty = false;
			}
		}
	}
}