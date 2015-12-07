package tusk.editor.views.inspectors;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

typedef BoolInspectorProps = {
	var component:tusk.Component;
	var field:String;
}

typedef BoolInspectorState = {
	var value:Bool;
}

class BoolInspector extends ReactComponentOfPropsAndState<BoolInspectorProps, BoolInspectorState> implements Inspector {
	public function new() {
		super();
		state = {
			value: false
		}
	}

	public function update() {
		var v:Bool = cast Reflect.field(props.component, props.field);
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
		return jsx('<li className="inspector"><span className="fieldName">${props.field}</span> <input type="checkbox" checked=${state.value} onChange=$handleChange /></li>');
	}

	private function handleChange(e) {
		Reflect.setField(props.component, props.field, e.target.value);
		setState({value: e.target.value == 'on'});
	}
}

#end