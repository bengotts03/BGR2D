#pragma once
#include "Texture.h"

namespace BGR2D {
    class Sprite {
    public:
        Sprite();
        ~Sprite();

    private:
        BGRCore::Texture _texture;
    };
}
