package tusk.resources;

/**
 * Used for code-completion of files in the assets folder
 *
 * At code-completion time, this will contain a series of
 * public, static, inline strings which point to files in
 * the 'assets' folder of a project (recursively). The names
 * of the strings should be valid haxe names, with directory
 * separators replaced by `___`, spaces replaced by `_`, and
 * periods replaced by `__`.
 * 
 * For example, if the assets folder is laid out like so:
 * 
 * ```
 * +---images
 * |       blazingmammothgames.png
 * |
 * +---shaders
 * |       default.colour.frag
 * |       default.colour.vert
 * |       default.texture.frag
 * |       default.texture.vert
 * |
 * \---sounds
 *         blazingmammothgames.ogg
 * ```
 *
 * Then the `AssetFiles` class will look like so:
 * 
 * ```haxe
 * class AssetFiles {
 * 	var images___blazingmammothgames__png:String = "assets/images/blazingmammothgames.png";
 * 	var shaders___default__colour__frag:String = "assets/shaders/default.colour.frag";
 * 	var shaders___default__colour__vert:String = "assets/shaders/default.colour.vert";
 * 	var shaders___default__texture__frag:String = "assets/shaders/default.texture.frag";
 * 	var shaders___default__texture__vert:String = "assets/shaders/default.texture.vert";
 * 	var sounds___blazingmammothgames__ogg:String = "assets/sounds/blazingmammothgames.ogg";
 * }
 * ```
 */
@:build(tusk.macros.AssetFilesBuilder.build("assets/"))
class AssetFiles {

}