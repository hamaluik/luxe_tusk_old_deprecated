package tusk;

import tusk.debug.Exception;

/**
 * The matcher class implements the low-level logic for determining if an entity matches a system
 */
class Matcher {
	private var includes:Array<Class<Component>> = new Array<Class<Component>>();
	private var excludes:Array<Class<Component>> = new Array<Class<Component>>();

	public function new() { }
	
	/**
	 * Chainable function for including component requirements
	 * @param  type<Component> the type of component to include
	 * @return                          `this`
	 */
	public function include(type:Class<Component>):Matcher
	{
		if(excludes.indexOf(type) >= 0) {
			throw new Exception("Can't add component '" + Type.getClassName(type) + "' because it is already in the excludes list!");
		}
		if(includes.indexOf(type) < 0) {
			includes.push(type);
		}
		return this;
	}
	
	/**
	 * Chainable function for excluding component requirements
	 * @param  type<Component> the type of component to exclude
	 * @return                          `this`
	 */
	public function exclude(type:Class<Component>):Matcher {
		if(includes.indexOf(type) >= 0) {
			throw new Exception("Can't add component '" + Type.getClassName(type) + "' because it is already in the includes list!");
		}
		if(excludes.indexOf(type) < 0) {
			excludes.push(type);
		}
		return this;
	}
	
	/**
	 * Determines whether or not a component is included in this matcher
	 * @param  type<Component> the type of component to check
	 * @return                          whether or not the component is included
	 */
	public function isIncluded(type:Class<Component>):Bool {
		return includes.indexOf(type) > -1;
	}
	
	/**
	 * Determines whether or not a component is excluded in this matcher
	 * @param  type<Component> the type of component to check
	 * @return                          whether or not the component is excluded
	 */
	public function isExcluded(type:Class<Component>):Bool {
		return excludes.indexOf(type) > -1;
	}
	
	/**
	 * Determines whether or not an entity matches this matcher
	 * @param  entity the entity to investigate
	 * @return        whether the entity matches or not
	 */
	public function matchesEntity(entity:Entity):Bool {
		for(include in includes) {
			if(!entity.hasType(include)) {
				return false;
			}
		}
		for(exclude in excludes) {
			if(entity.hasType(exclude)) {
				return false;
			}
		}
		return true;
	}

	/**
	 * Returns a filtered list of entities which match this matcher
	 * @param  entities<Entity> the full list of entities to examine
	 * @return                  [description]
	 */
	public function matchEntities(entities:Array<Entity>):Array<Entity> {
		return entities.filter(function(entity:Entity):Bool {
			return matchesEntity(entity);
		});
	}
}