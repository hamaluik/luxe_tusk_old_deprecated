precision mediump float;
precision mediump int;

uniform mat4 modelView;
uniform mat4 projection;

attribute vec3 position;
attribute vec4 colour;

varying vec4 vColour;

void main() {
    vColour = colour;
    gl_Position = projection * modelView * vec4(position, 1.0);
}