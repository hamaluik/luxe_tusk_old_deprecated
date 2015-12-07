package tusk.editor.views.inspectors;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

typedef IntInspectorProps = {
	var component:tusk.Component;
	var field:String;
}

typedef IntInspectorState = {
	var value:Int;
}

class IntInspector extends ReactComponentOfPropsAndState<IntInspectorProps, IntInspectorState> implements Inspector {
	public function new() {
		super();
		state = {
			value: 0
		}
	}

	public function update() {
		var v:Int = cast Reflect.field(props.component, props.field);
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
		return jsx('<li className="inspector"><span className="fieldName">${props.field}</span> <input type="number" value=${state.value} step="1" onChange=$handleChange /></li>');
	}

	private function handleChange(e) {
		Reflect.setField(props.component, props.field, e.target.value);
		setState({value: e.target.value});
	}
}

#end