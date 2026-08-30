#version 320 es
precision highp float;

layout(location = 0) in vec3 in_position;
layout(location = 1) in vec4 in_color;

uniform mat4 u_modelViewMatrix;
uniform mat4 u_projectionMatrix;

out vec4 v_color;
out float v_distance;

void main() {
    vec4 viewPos = u_modelViewMatrix * vec4(in_position, 1.0);
    gl_Position = u_projectionMatrix * viewPos;
    v_color = in_color;
    v_distance = length(viewPos.xyz);
}
