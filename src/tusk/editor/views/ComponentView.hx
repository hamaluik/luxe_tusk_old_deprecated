package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;
import haxe.ds.StringMap;
using StringTools;
import tusk.editor.views.inspectors.*;

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
				<ul>${renderComponent()}</ul>
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
		var meta:Dynamic<Array<Dynamic>> = haxe.rtti.Meta.getType(Type.getClass(props.component));
		var fields:Array<String> = cast meta.inspectorFields;
		var types:Array<String> = cast meta.inspectorTypes;

		if(state.expanded) {
			return [for(i in 0...fields.length) {
				switch(types[i]) {
					case 'Bool': jsx('<$BoolInspector key=${i} component=${props.component} field=${fields[i]} />');
					case 'Int': jsx('<$IntInspector key=${i} component=${props.component} field=${fields[i]} />');
					case 'Float': jsx('<$FloatInspector key=${i} component=${props.component} field=${fields[i]} />');
					case 'String': jsx('<$StringInspector key=${i} component=${props.component} field=${fields[i]} />');
					case 'Vec2': jsx('<$Vec2Inspector key=${i} component=${props.component} field=${fields[i]} />');
					case 'Vec3': jsx('<$Vec3Inspector key=${i} component=${props.component} field=${fields[i]} />');
					case 'Vec4': jsx('<$Vec4Inspector key=${i} component=${props.component} field=${fields[i]} />');
					case 'Quat': jsx('<$QuatInspector key=${i} component=${props.component} field=${fields[i]} />');
					default: jsx('<$UnknownInspector key=${i} component=${props.component} field=${fields[i]} type=${types[i]} />');
				}
			}];
		}
		return null;
	}
}

#end