package tusk.visuals;

/**
 * Defines a material
 */
class Material {
	/**
	 * The shader that the material uses
	 */
	public var shader(default, null):Shader;

	/**
	 * Create a new material!
	 * @param  shader The material's shader. If not compiled, the material will compile it automatically.
	 */
	public function new(shader:Shader) {
		this.shader = shader;
	}
}