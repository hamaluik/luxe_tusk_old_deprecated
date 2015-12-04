precision mediump float;
precision mediump int;

uniform sampler2D texture;
uniform vec4 colour;

varying vec2 v_uv;

void main() {
    gl_FragColor = colour * texture2D(texture, v_uv);
}