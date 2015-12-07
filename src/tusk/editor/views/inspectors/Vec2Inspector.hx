package tusk.editor.views.inspectors;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;
import glm.Vec2;

typedef Vec2InspectorProps = {
	var component:tusk.Component;
	var field:String;
}

typedef Vec2InspectorState = {
	var value:Vec2;
}

class Vec2Inspector extends ReactComponentOfPropsAndState<Vec2InspectorProps, Vec2InspectorState> implements Inspector {
	public function new() {
		super();
		state = {
			value: new Vec2()
		}
	}

	public function update() {
		var v:Vec2 = cast Reflect.field(props.component, props.field);
		setState({value: v});
	}

	override public function componentDidMount() {
		tusk.editor.Editor.inspectors.push(this);
		update();
	}

	override public function componentWillUnmount() {
		tusk.editor.Editor.inspectors.remove(this);
	}

	override public function render() {
		return jsx('<li className="inspector"><span className="fieldName">${props.field}</span> <input type="number" value=${state.value.x} onChange=$handleChangeX /> <input type="number" value=${state.value.y} onChange=$handleChangeY /></li>');
	}

	private function handleChangeX(e) {
		setState({value: state.value.set(e.target.value, state.value.y)});
		Reflect.setField(props.component, props.field, state.value);
	}

	private function handleChangeY(e) {
		setState({value: state.value.set(state.value.x, e.target.value)});
		Reflect.setField(props.component, props.field, state.value);
	}
}

#end