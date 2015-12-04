package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

typedef EditorState = {
	var paused:Bool;
}

class EditorView extends ReactComponentOfState<EditorState> {
	public function new() {
		super();
		state = {
			paused: false
		};
	}

	override public function render() {
		return jsx('
			<div>
				<div className="controls"><button className="button-primary" onClick=$togglePaused>${renderPausedText()}</button></div>
				<$SceneListView />
			</div>
		');
	}

	private function renderPausedText() {
		return state.paused ? 'Resume' : 'Pause';
	}

	private function togglePaused() {
		Tusk.instance.timescale = !state.paused ? 0.0 : 1.0;
		setState({
			paused: !state.paused
		});
	}
}

#end