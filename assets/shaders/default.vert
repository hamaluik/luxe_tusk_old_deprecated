precision mediump float;
precision mediump int;

uniform mat4 uModelViewMatrix;
uniform mat4 uProjectionMatrix;

attribute vec3 aPosition;
attribute vec4 aColour;

varying vec4 vColour;

void main() {
    /*vec4 pos = vec4(aPosition, 1.0);
    vec4 mpos = uModelViewMatrix * pos;

    vColour = aColour;

    gl_Position = uProjectionMatrix * mpos;*/
    //gl_Position = uProjectionMatrix * uModelViewMatrix * vec4(aPosition, 1.0);
    gl_Position = vec4(aPosition, 1.0);
    vColour = vec4(aColour.r, 0.0, 0.0, 1.0);
}