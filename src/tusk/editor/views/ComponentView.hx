package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

using StringTools;

typedef ComponentState = {
	var expanded:Bool;
}

typedef ComponentProps = {
	var component:tusk.Component;
}

class ComponentView extends ReactComponentOfPropsAndState<ComponentProps, ComponentState> {
	public function new() {
		super();
		state = {
			expanded: true,
		};
	}

	override public function render() {
		var className:String = Type.getClassName(Type.getClass(props.component));
		var name:String = className.substring(className.lastIndexOf('.') + 1).replace('Component', '');
		return jsx('
			<li className="component">
				<div onClick=$toggleExpand>${renderExpander()} ${name}</div>
				${renderComponent()}
			</li>
		');
	}

	private function renderExpander() {
		return state.expanded ? '-' : '+';
	}

	private function toggleExpand() {
		setState({
			expanded: !state.expanded
		});
	}

	private function renderComponent() {
		if(state.expanded) {
			return jsx('<span>Inspectors...</span>');
		}
		return null;
	}
}

#end