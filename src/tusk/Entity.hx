package tusk;

import haxe.ds.StringMap;

/**
 * Container class for collections of components
 */
class Entity {
	/**
	 * All the components that currently belong to this entity
	 */
	private var components:StringMap<Component>;

	public function new(?components:Array<Component>) {
		this.components = new StringMap<Component>();
		if(components != null) {
			for(component in components) {
				this.components.set(Type.getClassName(Type.getClass(component)), component);
			}
		}
		Tusk.addEntity(this);
	}

	/**
	 * @param  type<Component> The component type to check
	 * @return                 Whether the component type belongs to this entity
	 */
	public function hasType(type:Class<Component>):Bool {
		return components.exists(Type.getClassName(type));
	}

	/**
	 * @param  type<Component> The component to check
	 * @return                 Whether the type of component belongs to this entity
	 */
	public function has(component:Component):Bool {
		return hasType(Type.getClass(component));
	}

	/**
	 * @param  type<Component> A component type
	 * @return                 The instance of the component attached to this entity
	 *                         which has the proper type, or `null` if no such component
	 *                         exists.
	 */
	public function get(type:Class<Component>):Component {
		return components.get(Type.getClassName(type));
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
		components.set(componentName, component);
		Tusk.entityChanged(this);
		return this;
	}

	/**
	 * @param  component A component to remove the entity
	 * @return           `this` (useful for chaining)
	 */
	public function remove(component:Component):Entity {
		if(components.remove(Type.getClassName(Type.getClass(component)))) {
			Tusk.entityChanged(this);
		}
		return this;
	}
}