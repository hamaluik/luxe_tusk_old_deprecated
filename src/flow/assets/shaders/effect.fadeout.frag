precision mediump float;
precision mediump int;

uniform float fadeAlpha;

varying vec2 v_uv;

void main() {
	gl_FragColor = vec4(0.0, 0.0, 0.0, fadeAlpha);
}