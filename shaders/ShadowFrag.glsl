#version 420
#extension GL_EXT_gpu_shader4 : enable


smooth in vec3 outVert;
smooth in vec3 outNormal;
smooth in vec2 outUV;


void main()
{

    gl_FragDepth = gl_FragCoord.z;
}
