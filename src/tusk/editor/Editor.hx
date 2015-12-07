package tusk.editor;

import tusk.debug.Log;

#if editor
import api.react.ReactDOM;
import api.react.ReactMacro.jsx;
import js.Browser;

import tusk.editor.views.EditorView;
import tusk.editor.views.inspectors.Inspector;

class Editor {
	public static var inspectors:Array<Inspector> = new Array<Inspector>();

	private function new(){}
	public static function init() {
		#if editor
		ReactDOM.render(jsx('<$EditorView />'), Browser.document.getElementById('editor'));
		#end
	}
}

#end