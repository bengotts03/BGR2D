#pragma once
#include "Sprite.h"

namespace BGR2D {
    class SpriteRenderer {
    public:
        SpriteRenderer(Sprite& sprite);
        ~SpriteRenderer();

        void Draw();

        void SetSprite(Sprite& sprite);
        Sprite& GetSprite();
    private:
        Sprite _sprite;
    };
}
