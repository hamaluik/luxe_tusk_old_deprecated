package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

typedef EditorState = {
	var paused:Bool;
	var timescale:Float;
}

class EditorView extends ReactComponentOfState<EditorState> {
	public function new() {
		super();
		state = {
			paused: false,
			timescale: Tusk.instance.timescale
		};
	}

	override public function render() {
		return jsx('
			<div>
				<div className="controls">
					<button className="button-primary" onClick=$togglePaused>${renderPausedText()}</button>
					<input type="range" min="0" max="2" step="0.01" value=${state.timescale} onChange=$handleTimescaleChange />
					<input type="number" min="0" max="2" step="0.01" value=${state.timescale} onChange=$handleTimescaleChange />
				</div>
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
			paused: !state.paused,
			timescale: Tusk.instance.timescale
		});
	}

	private function handleTimescaleChange(e) {
		Tusk.instance.timescale = e.target.value;
		setState({
			paused: Tusk.instance.timescale == 0,
			timescale: Tusk.instance.timescale
		});
	}
}

#end