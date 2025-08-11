#pragma once

#include "Camera.h"
#include "Colour.h"
#include <glm/glm.hpp>

namespace BGR2D {
    class Renderer2D {
    public:
        static void Init();
        virtual ~Renderer2D();

        static void StartScene();
        static void EndScene();

        static void DrawRect(glm::vec2 position, glm::vec2 rotation, BGRCore::Colour colour);
    };
}
