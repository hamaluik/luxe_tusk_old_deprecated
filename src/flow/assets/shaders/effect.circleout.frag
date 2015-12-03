precision mediump float;
precision mediump int;

uniform vec2 resolutionCenter;
uniform float circleDistance;

varying vec2 v_uv;

void main() {
	vec2 delta = abs(gl_FragCoord.xy - resolutionCenter);
	gl_FragColor = vec4(0.0, 0.0, 0.0, step(circleDistance, length(delta)));
}