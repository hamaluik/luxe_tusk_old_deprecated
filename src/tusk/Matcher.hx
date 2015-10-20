package tusk;

/**
 * The matcher class implements the low-level logic for determining if an entity matches a system
 */
class Matcher {
	private var includes:Array<Class<Component>> = new Array<Class<Component>>();
	private var excludes:Array<Class<Component>> = new Array<Class<Component>>();

	public function new() { }
	
	/**
	 * Chainable function for including component requirements
	 * @param  componentType<Component> the type of component to include
	 * @return                          `this`
	 */
	public function include(componentType:Class<Component>):Matcher
	{
		return this;
	}
	
	/**
	 * Chainable function for excluding component requirements
	 * @param  componentType<Component> the type of component to exclude
	 * @return                          `this`
	 */
	public function exclude(componentType:Class<Component>):Matcher {
		return this;
	}
	
	/**
	 * Determines whether or not a component is included in this matcher
	 * @param  componentType<Component> the type of component to check
	 * @return                          whether or not the component is included
	 */
	public function isIncluded(componentType:Class<Component>):Bool {
		for (include in includes) {
			if (include == componentType) {
				return true;
			}
		}
		return false;
	}
	
	/**
	 * Determines whether or not a component is excluded in this matcher
	 * @param  componentType<Component> the type of component to check
	 * @return                          whether or not the component is excluded
	 */
	public function isExcluded(componentType:Class<Component>):Bool {
		for (exclude in excludes) {
			if (exclude == componentType) {
				return true;
			}
		}
		return false;
	}
	
	/**
	 * Determines whether or not an entity matches this matcher
	 * @param  entity the entity to investigate
	 * @return        whether the entity matches or not
	 */
	public function matchesEntity(entity:Entity):Bool {
		for(include in includes) {
			if(!entity.hasType(include) || !entity.get(include).enabled) {
				return false;
			}
		}
		for(exclude in excludes) {
			if(entity.hasType(exclude) && entity.get(exclude).enabled) {
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