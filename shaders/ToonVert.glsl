#version 430 core
#extension GL_EXT_gpu_shader4 : enable

layout (location = 0) in vec3 inVert; //input attribute
layout (location = 1) in vec3 inNormal;
layout (location = 2) in vec2 inUV;

//model view projection
uniform mat4 M;
uniform mat4 V;
uniform mat4 P;
uniform mat4 MVP;
uniform mat4 lightMatrix;

out mat4 ModelView;
out vec3 pos;
uniform vec3 light_position[2];
smooth out vec3 outVert;
smooth out vec3 outNormal;
smooth out vec2 outUV;
out vec4  ShadowCoord;


void main()
{
    ModelView = V*M;
    outVert = inVert;
    outNormal = inNormal;
    outUV = inUV;


    gl_Position = P * ModelView*vec4(inVert,1.0f);
    ShadowCoord = lightMatrix * vec4(inVert, 1.0);
}
