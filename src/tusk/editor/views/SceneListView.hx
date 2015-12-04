package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

typedef SceneListState = {
	var scenes:Array<tusk.Scene>;
}

class SceneListView extends ReactComponentOfState<SceneListState> {
	public function new() {
		super();
		state = {
			scenes: Tusk.game.currentScenes
		};
	}

	private function update() {
		setState({
			scenes: Tusk.game.currentScenes
		});
	}

	override public function componentDidMount() {
		Tusk.scenesChanged.listen(update);
	}

	override public function componentWillUnmount() {
		Tusk.scenesChanged.unlisten(update);
	}

	override public function render() {
		return jsx('<ul>${renderChildren()}</ul>');
	}

	private function renderChildren() {
		var i:Int = -1;
		return [for(scene in state.scenes) {
			i++;
			jsx('<$SceneView key=${i} scene=${scene} />');
		}];
	}
}

#end