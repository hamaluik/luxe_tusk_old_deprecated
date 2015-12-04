package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Font;

import glm.Vec4;

enum TextAlign {
	Left;
	Centre;
	Right;
}

class TextComponent extends Component {
	public var text(default, set):String = "";
	public function set_text(t:String):String {
		textDirty = true;
		return text = t;
	}
	public var textDirty:Bool = true;

	public var font:Font;
	public var align:TextAlign;
	public var colour:Vec4;

	public function new(font:Font, text:String, ?align:TextAlign, ?colour:Vec4) {
		this.font = font;
		this.text = text;
		this.align = align == null ? TextAlign.Left : align;
		this.colour = colour == null ? new Vec4(0, 0, 0, 1) : colour;
		super();
	}
}