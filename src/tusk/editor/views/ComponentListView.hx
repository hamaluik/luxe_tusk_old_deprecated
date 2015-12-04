package tusk.editor.views;

#if editor

import haxe.ds.IntMap;

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

typedef ComponentListState = {
	var components:IntMap<tusk.Component>;
}

typedef ComponentListProps = {
	var entity:tusk.Entity;
}

class ComponentListView extends ReactComponentOfPropsAndState<ComponentListProps, ComponentListState> {
	public function new() {
		super();
		state = {
			components: new IntMap<tusk.Component>()
		};
	}

	private function update() {
		setState({
			components: props.entity.components
		});
	}

	override public function componentDidMount() {
		update();
		props.entity.componentsChanged.listen(update);
	}

	override public function componentWillUnmount() {
		props.entity.componentsChanged.unlisten(update);
	}

	override public function render() {
		return jsx('<ul>${renderChildren()}</ul>');
	}

	private function renderChildren() {
		return [for(component in state.components.iterator()) {
			jsx('<$ComponentView key=${component._tid} component=${component} />');
		}];
	}
}

#end