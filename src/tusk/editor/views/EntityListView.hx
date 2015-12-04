package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

typedef EntityListState = {
	var entities:Array<tusk.Entity>;
}

typedef EntityListProps = {
	var scene:tusk.Scene;
}

class EntityListView extends ReactComponentOfPropsAndState<EntityListProps, EntityListState> {
	public function new() {
		super();
		state = {
			entities: new Array<tusk.Entity>()
		};
	}

	private function update() {
		setState({
			entities: props.scene.entities
		});
	}

	override public function componentDidMount() {
		update();
		props.scene.entitiesChanged.listen(update);
	}

	override public function componentWillUnmount() {
		props.scene.entitiesChanged.unlisten(update);
	}

	override public function render() {
		return jsx('<ul>${renderChildren()}</ul>');
	}

	private function renderChildren() {
		return [for(entity in state.entities) {
			jsx('<$EntityView key=${entity.id} entity=${entity} />');
		}];
	}
}

#end