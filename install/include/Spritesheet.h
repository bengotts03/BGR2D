#pragma once

#include "Shader.h"
#include "Shader.h"
#include "Shader.h"
#include "Shader.h"
#include "Sprite.h"
#include "Texture.h"

namespace BGR2D {
    class Spritesheet {
    public:
        Spritesheet(std::string path, int spriteWidth, int spriteHeight);
        ~Spritesheet();

        Sprite GetSprite(glm::vec2 bottomLeftCorner);
        std::array<glm::vec2, 4> GetTexturePoints(glm::vec2 bottomLeftCorner) const;

        BGRCore::Texture& GetTexture();
    private:
        BGRCore::Texture _texture;
        int _textureWidth;
        int _textureHeight;

        int _spriteWidth;
        int _spriteHeight;
    };
}