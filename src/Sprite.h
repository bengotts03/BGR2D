#pragma once
#include "Bounds.h"
#include "Texture.h"

namespace BGR2D {
    class Sprite {
    public:
        Sprite(BGRCore::Texture& texture, Bounds bounds);
        ~Sprite();

        std::array<glm::vec2, 4> GetSpriteTextureCoords() const;
    private:
        BGRCore::Texture _texture;
        Bounds _bounds;
    };
}
