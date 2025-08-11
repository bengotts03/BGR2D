#include "Sprite.h"

namespace BGR2D {
    Sprite::Sprite(BGRCore::Texture& texture, Bounds bounds) {
        _texture = texture;
        _bounds = bounds;
    }

    Sprite::~Sprite() {
    }

    std::array<glm::vec2, 4> Sprite::GetSpriteTextureCoords() const {
        std::array<glm::vec2, 4> points;

        glm::vec2 bottomLeftCorner = _bounds.GetMin();

        int textureWidth = _texture.GetWidth();
        int textureHeight = _texture.GetHeight();
        int spriteWidth = _bounds.GetSize().x;
        int spriteHeight = _bounds.GetSize().y;

        points[0] = {(bottomLeftCorner.x * spriteWidth) / textureWidth, (bottomLeftCorner.y * spriteHeight) / textureHeight};
        points[1] = {((bottomLeftCorner.x + 1) * spriteWidth) / textureWidth, (bottomLeftCorner.y * spriteHeight) / textureHeight};
        points[2] = {((bottomLeftCorner.x + 1) * spriteWidth) / textureWidth, ((bottomLeftCorner.y + 1) * spriteHeight) / textureHeight};
        points[3] = {(bottomLeftCorner.x * spriteWidth) / textureWidth, ((bottomLeftCorner.y + 1) * spriteHeight) / textureHeight};

        // TEXTURE COORDS = THESE POINTS
        return points;
    }
}
