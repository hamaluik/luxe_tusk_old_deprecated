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
				mesh.mesh.vertices = new Array<Vec3>();
				mesh.mesh.uvs = new Array<Vec2>();

				// deal with alignment
				var textWidth:Float = 0;
				for(i in 0...text.text.length) {
					var code:Int = text.text.charCodeAt(i);
					var char:FontChar = text.font.chars.get(code);
					textWidth += char.xAdvance;
				}

				var xPos:Float = switch(text.align) {
					case Left: 0;
					case Right: -textWidth;
					case Centre: -textWidth / 2.0;
				}
				var yPos:Float = 0;

				for(i in 0...text.text.length) {
					var code:Int = text.text.charCodeAt(i);
					var char:FontChar = text.font.chars.get(code);

					//    2
					//  / |
					// 0--1
					mesh.mesh.vertices.push(new Vec3(xPos - char.offset.x, yPos - char.offset.y));
					mesh.mesh.uvs.push(new Vec2(char.minUV.x, char.maxUV.y));
					mesh.mesh.vertices.push(new Vec3(xPos - char.offset.x + char.size.x, yPos - char.offset.y));
					mesh.mesh.uvs.push(new Vec2(char.maxUV.x, char.maxUV.y));
					mesh.mesh.vertices.push(new Vec3(xPos - char.offset.x + char.size.x, yPos - char.offset.y + char.size.y));
					mesh.mesh.uvs.push(new Vec2(char.maxUV.x, char.minUV.y));

					// 1--0
					// | /  
					// 2   
					mesh.mesh.vertices.push(new Vec3(xPos - char.offset.x + char.size.x, yPos - char.offset.y + char.size.y));
					mesh.mesh.uvs.push(new Vec2(char.maxUV.x, char.minUV.y));
					mesh.mesh.vertices.push(new Vec3(xPos - char.offset.x, yPos - char.offset.y + char.size.y));
					mesh.mesh.uvs.push(new Vec2(char.minUV.x, char.minUV.y));
					mesh.mesh.vertices.push(new Vec3(xPos - char.offset.x, yPos - char.offset.y));
					mesh.mesh.uvs.push(new Vec2(char.minUV.x, char.maxUV.y));

					xPos += char.xAdvance;
				}

				Log.info('Text is ${xPos} units big');
				Log.info('There are ${mesh.mesh.vertices.length} vertices in the text mesh!');
				text.textDirty = false;
			}
		}
	}
}