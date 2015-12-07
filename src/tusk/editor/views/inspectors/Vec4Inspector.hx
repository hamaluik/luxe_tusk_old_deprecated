package tusk.editor.views.inspectors;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;
import glm.Vec4;

typedef Vec4InspectorProps = {
	var component:tusk.Component;
	var field:String;
}

typedef Vec4InspectorState = {
	var value:Vec4;
}

class Vec4Inspector extends ReactComponentOfPropsAndState<Vec4InspectorProps, Vec4InspectorState> implements Inspector {
	public function new() {
		super();
		state = {
			value: new Vec4()
		}
	}

	public function update() {
		var v:Vec4 = cast Reflect.field(props.component, props.field);
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
		return jsx('<li className="inspector"><span className="fieldName">${props.field}</span> <input type="number" value=${state.value.x} onChange=$handleChangeX /> <input type="number" value=${state.value.y} onChange=$handleChangeY /> <input type="number" value=${state.value.z} onChange=$handleChangeZ /> <input type="number" value=${state.value.w} onChange=$handleChangeW /></li>');
	}

	private function handleChangeX(e) {
		setState({value: state.value.set(e.target.value, state.value.y, state.value.z, state.value.w)});
		Reflect.setField(props.component, props.field, state.value);
	}

	private function handleChangeY(e) {
		setState({value: state.value.set(state.value.x, e.target.value, state.value.z, state.value.w)});
		Reflect.setField(props.component, props.field, state.value);
	}

	private function handleChangeZ(e) {
		setState({value: state.value.set(state.value.x, state.value.y, e.target.value, state.value.w)});
		Reflect.setField(props.component, props.field, state.value);
	}

	private function handleChangeW(e) {
		setState({value: state.value.set(state.value.x, state.value.y, state.value.z, e.target.value)});
		Reflect.setField(props.component, props.field, state.value);
	}
}

#end