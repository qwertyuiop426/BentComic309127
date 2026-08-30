#version 320 es
precision mediump float;

in vec4 v_color;
in float v_distance;

uniform vec4 u_fogColor;
uniform float u_fogStart;
uniform float u_fogEnd;

out vec4 fragColor;

void main() {
    float fogFactor = smoothstep(u_fogStart, u_fogEnd, v_distance);
    fragColor = mix(v_color, u_fogColor, fogFactor);
}
