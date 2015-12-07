package tusk.editor.views.inspectors;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;
import glm.Vec3;

typedef Vec3InspectorProps = {
	var component:tusk.Component;
	var field:String;
}

typedef Vec3InspectorState = {
	var value:Vec3;
}

class Vec3Inspector extends ReactComponentOfPropsAndState<Vec3InspectorProps, Vec3InspectorState> implements Inspector {
	public function new() {
		super();
		state = {
			value: new Vec3()
		}
	}

	public function update() {
		var v:Vec3 = cast Reflect.field(props.component, props.field);
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
		return jsx('<li className="inspector"><span className="fieldName">${props.field}</span> <input type="number" value=${state.value.x} onChange=$handleChangeX /> <input type="number" value=${state.value.y} onChange=$handleChangeY /> <input type="number" value=${state.value.z} onChange=$handleChangeZ /></li>');
	}

	private function handleChangeX(e) {
		setState({value: state.value.set(e.target.value, state.value.y, state.value.z)});
		Reflect.setField(props.component, props.field, state.value);
	}

	private function handleChangeY(e) {
		setState({value: state.value.set(state.value.x, e.target.value, state.value.z)});
		Reflect.setField(props.component, props.field, state.value);
	}

	private function handleChangeZ(e) {
		setState({value: state.value.set(state.value.x, state.value.y, e.target.value)});
		Reflect.setField(props.component, props.field, state.value);
	}
}

#end