package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

typedef SceneState = {
	var expanded:Bool;
}

typedef SceneProps = {
	var scene:tusk.Scene;
}

class SceneView extends ReactComponentOfPropsAndState<SceneProps, SceneState> {
	public function new() {
		super();
		state = {
			expanded: true
		};
	}

	override public function render() {
		return jsx('
			<li className="scene">
				<div onClick=$toggleExpand>${renderExpander()} ${renderSceneName()}</div>
				${renderEntities()}
			</li>
		');
	}

	private function renderSceneName() {
		return props.scene.name == null ? 'unnamed scene' : props.scene.name;
	}

	private function renderExpander() {
		return state.expanded ? '-' : '+';
	}

	private function toggleExpand() {
		setState({
			expanded: !state.expanded
		});
	}

	private function renderEntities() {
		if(state.expanded) {
			return jsx('<$EntityListView scene=${props.scene} />');
		}
		return null;
	}
}

#end