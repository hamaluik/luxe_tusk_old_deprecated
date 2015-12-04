package tusk.editor;

import tusk.debug.Log;

#if editor
import api.react.ReactDOM;
import api.react.ReactMacro.jsx;
import js.Browser;

import tusk.editor.views.EditorView;

class Editor {
	private function new(){}
	public static function init() {
		#if editor
		ReactDOM.render(jsx('<$EditorView />'), Browser.document.getElementById('editor'));
		#end
	}
}

#end