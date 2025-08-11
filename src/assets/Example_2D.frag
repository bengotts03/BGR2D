#version 330 core

out vec4 FragColor;

in vec3 Position;
in vec3 Colour;
in vec2 TextureCoords;
in vec3 Normals;

uniform sampler2D uDiffuse0;

void main() {
    FragColor = texture(uDiffuse0, TextureCoords) * vec4(Colour, 1.0f);
}