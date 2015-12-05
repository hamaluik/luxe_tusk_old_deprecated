package tusk.editor.views;

#if editor

import api.react.ReactComponent;
import api.react.ReactMacro.jsx;

import js.html.Element;

import haxe.ds.StringMap;
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
		/*var i:Dynamic = Reflect.field(props.component, 'inspectFields');
		var ix:Dynamic = Reflect.callMethod(props.component, i, []);
		var ti:tusk.lib.comp.TransformComponent = cast props.component;
		var x:StringMap<String> = ti.inspectFields();
		var c:Class<Dynamic> = Type.getClass(props.component);
		var cn:String = Type.getClassName(c);
		for(field in Type.getInstanceFields(Type.getClass(props.component))) {
			trace(field + ': ' + Type.typeof(Reflect.field(props.component, field)));
		}
		Type.getS
		js.Lib.debug();*/
		//var inspectors:StringMap<String> = cast Reflect.callMethod(props.component, Reflect.field(props.component, 'inspectFields'), []);
		//js.Lib.debug();
		
		var meta:Dynamic<Array<Dynamic>> = haxe.rtti.Meta.getType(Type.getClass(props.component));
		var fields:Array<String> = cast meta.inspectorFields;
		var types:Array<String> = cast meta.inspectorTypes;

		if(state.expanded) {
			return [for(i in 0...fields.length) {
				jsx('<li key=${i}>${fields[i]}:${types[i]}</li>');
			}];
		}
		return null;
	}
}

#end