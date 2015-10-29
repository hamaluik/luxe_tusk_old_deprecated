package tusk.resources;

enum Asset {
	Shader(shader:Shader);
	Material(material:Material);
	Texture;
	Sound(sound:Sound);
	Mesh;
}