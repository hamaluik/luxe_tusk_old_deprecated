package tusk;

import tusk.debug.Exception;
import tusk.macros.ComponentIndexer;

/**
 * The matcher class implements the low-level logic for determining if an entity matches a system
 */
class Matcher {
	private var includes:Array<Int> = new Array<Int>();
	private var excludes:Array<Int> = new Array<Int>();

	public function new() { }
	
	/**
	 * Chainable function for including component requirements
	 * @param  tid the tid of component to include
	 * @return     `this`
	 */
	public function include(tid:Int):Matcher
	{
		if(excludes.indexOf(tid) >= 0) {
			throw new Exception("Can't add component '" + tid + "' because it is already in the excludes list!");
		}
		if(includes.indexOf(tid) < 0) {
			includes.push(tid);
		}
		return this;
	}
	
	/**
	 * Chainable function for excluding component requirements
	 * @param  tid the tid of component to exclude
	 * @return     `this`
	 */
	public function exclude(tid:Int):Matcher {
		if(includes.indexOf(tid) >= 0) {
			throw new Exception("Can't add component '" + tid + "' because it is already in the includes list!");
		}
		if(excludes.indexOf(tid) < 0) {
			excludes.push(tid);
		}
		return this;
	}
	
	/**
	 * Determines whether or not a component is included in this matcher
	 * @param  tid the tid of component to check
	 * @return     whether or not the component is included
	 */
	public function isIncluded(tid:Int):Bool {
		return includes.indexOf(tid) > -1;
	}
	
	/**
	 * Determines whether or not a component is excluded in this matcher
	 * @param  tid the tid of component to check
	 * @return     whether or not the component is excluded
	 */
	public function isExcluded(tid:Int):Bool {
		return excludes.indexOf(tid) > -1;
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
	 * @param  entities  the full list of entities to examine
	 * @return           a filtered version of the given entities
	 *                   which match this matcher.
	 */
	public function matchEntities(entities:Array<Entity>):Array<Entity> {
		return entities.filter(function(entity:Entity):Bool {
			return matchesEntity(entity);
		});
	}
}