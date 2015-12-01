precision mediump float;
precision mediump int;

uniform mat4 projection;
uniform mat4 view;
uniform mat4 model;

attribute vec3 position;
attribute vec2 uv;

varying vec2 v_uv;

void main() {
	v_uv = uv;
    gl_Position = projection * view * model * vec4(position, 1.0);
}