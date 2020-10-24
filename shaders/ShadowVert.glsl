#version 420
#extension GL_EXT_gpu_shader4 : enable

/// modified from the OpenGL Shading Language Example "Orange Book"
/// Roost 2002

uniform mat4 MVP;

layout (location=0) in  vec3  inVert;
layout (location=1) in  vec3  inNormal;
layout (location=2) in vec2 inUV;

smooth out vec3 outVert;
smooth out vec3 outNormal;
smooth out vec2 outUV;

void main()
{
    outVert = inVert;
    outNormal = inNormal;
    outUV = inUV;
    gl_Position = MVP * vec4(inVert,1.0f);
}

