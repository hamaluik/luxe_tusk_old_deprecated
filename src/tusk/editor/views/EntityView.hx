package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

typedef EntityState = {
	var expanded:Bool;
}

typedef EntityProps = {
	var entity:tusk.Entity;
}

class EntityView extends ReactComponentOfPropsAndState<EntityProps, EntityState> {
	public function new() {
		super();
		state = {
			expanded: false
		};
	}

	override public function render() {
		return jsx('
			<li className="entity">
				<div onClick=$toggleExpand>${renderExpander()} ${renderEntityName()}</div>
				${renderComponents()}
			</li>
		');
	}

	private function renderEntityName() {
		return props.entity.name == null ? 'Entity ${props.entity.id}' : props.entity.name;
	}

	private function renderExpander() {
		return state.expanded ? '-' : '+';
	}

	private function toggleExpand() {
		setState({
			expanded: !state.expanded
		});
	}

	private function renderComponents() {
		if(state.expanded) {
			return jsx('<$ComponentListView entity=${props.entity} />');
		}
		return null;
	}
}

#end