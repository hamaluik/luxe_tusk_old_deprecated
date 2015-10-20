precision mediump float;
precision mediump int;

uniform mat4 modelView;
uniform mat4 projection;

attribute vec3 position;
attribute vec2 uv;

varying vec2 v_uv;

void main() {
	v_uv = uv;
    gl_Position = projection * modelView * vec4(position, 1.0);
}