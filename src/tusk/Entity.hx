package tusk;

import haxe.ds.IntMap;
import haxe.Serializer;
import haxe.Unserializer;

#if editor
import tusk.editor.EditorEvent;
#end

/**
 * Enum describing the changes that an entity undergoes
 */
enum ChangeEvent {
	EntityAdded;
	EntityRemoved;
	ComponentAdded(component:Component);
	ComponentRemoved(component:Component);
}

/**
 * Container class for collections of components
 */
class Entity {	
	private static var nextID:Int = 0;

	public var name(default, null):String = null;

	/**
	 * The ID of this entity, automatically set when it is created
	 */
	public var id(default, null):Int;

	/**
	 * What scene this entity currently belongs to
	 */
	public var scene:Scene = null;

	/**
	 * All the components that currently belong to this entity
	 */
	public var components:IntMap<Component>;

    #if editor
    public var componentsChanged:EditorEvent = new EditorEvent();
    #end

	public function new(scene:Scene, ?name:String, ?components:Array<Component>) {
		this.name = name;
		this.components = new IntMap<Component>();
		if(components != null) {
			for(component in components) {
				this.components.set(component._tid, component);
			}
		}
		id = nextID;
		nextID++;
		this.scene = scene;
		Tusk.addEntity(this, scene);
	}

	/**
	 * @param  tid The component type to check
	 * @return     Whether the component type belongs to this entity
	 */
	public function hasType(tid:Int):Bool {
		return components.exists(tid);
	}

	/**
	 * @param  tid The component to check
	 * @return     Whether the type of component belongs to this entity
	 */
	public function has(component:Component):Bool {
		return hasType(component._tid);
	}

	/**
	 * @param  tid A component type
	 * @return     The instance of the component attached to this entity
	 *             which has the proper type, or `null` if no such component
	 *             exists.
	 */
	public function get(tid:Int):Component {
		return components.get(tid);
	}

	/**
	 * @param  component A component to add to the entity. Only one component
	 *                   of each type can be on an entity at once (an exception
	 *                   will be thrown if this is violated).
	 * @return           `this` (useful for chaining)
	 */
	public function push(component:Component):Entity {
		var componentName:String = Type.getClassName(Type.getClass(component));
		if(has(component)) {
			throw new tusk.debug.Exception("Can't add component '" + componentName + "' because entity already has it!");
		}
		components.set(component._tid, component);
		Tusk.entityChanged(this, ChangeEvent.ComponentAdded(component));
		return this;
	}

	/**
	 * @param  tid  A component type to remove from the entity
	 * @return      `this` (useful for chaining)
	 */
	public function removeType(tid:Int):Entity {
		if(components.remove(tid)) {
			var component:Component = get(tid);
			Tusk.entityChanged(this, ChangeEvent.ComponentRemoved(component));
		}
		return this;
	}

	/**
	 * @param  component A component to remove from the entity
	 * @return           `this` (useful for chaining)
	 */
	public function remove(component:Component):Entity {
		return removeType(component._tid);
	}

	/**
	 * Called by the haxe serializer when serializing.
	 * @param the haxe serializer
	 */
	@:keep
	function hxSerialize(s:Serializer) {
		s.serialize(components);
	}

	/**
	 * Called by the haxe serializer when unserializing.
	 * @param the haxe unserializer
	 */
	@:keep
	function hxUnserialize(u:Unserializer) {
		components = u.unserialize();
	}
}