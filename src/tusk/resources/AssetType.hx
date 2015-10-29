package tusk.resources;

enum AssetType {
	Shader(shader:Shader);
	Material(material:Material);
	Texture(texture:Texture);
	Sound(sound:Sound);
	Mesh;
}