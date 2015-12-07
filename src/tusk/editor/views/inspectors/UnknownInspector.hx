package tusk.editor.views.inspectors;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

typedef UnknownInspectorProps = {
	var component:tusk.Component;
	var field:String;
	var type:String;
}

class UnknownInspector extends ReactComponentOfProps<UnknownInspectorProps> {
	public function new() {
		super();
	}

	override public function render() {
		return jsx('<li><span className="fieldName">${props.field} (${props.type})</span></li>');
	}
}

#end