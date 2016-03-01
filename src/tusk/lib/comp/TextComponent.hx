package tusk.lib.comp;

import tusk.Component;
import tusk.resources.Font;

import glm.Vec4;

enum TextAlign {
	Left;
	Centre;
	Right;
}

enum TextVerticalAlign {
	Top;
	Centre;
	Bottom;
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
	public var valign:TextVerticalAlign;
	public var colour:Vec4;

	public function new(font:Font, text:String, ?align:TextAlign, ?valign:TextVerticalAlign, ?colour:Vec4) {
		this.font = font;
		this.text = text;
		this.align = align == null ? TextAlign.Left : align;
		this.valign = valign == null ? TextVerticalAlign.Top : valign;
		this.colour = colour == null ? new Vec4(0, 0, 0, 1) : colour;
		super();
	}
}