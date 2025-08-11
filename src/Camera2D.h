#pragma once

#include "glad/glad.h"
#include "Camera.h"

namespace BGR2D {
    class Camera2D final : public BGRCore::Camera{
    public:
        Camera2D(BGAppCore::Window *window, int width, int height, const glm::vec3 &pos)
            : Camera(window, width, height, pos) {
        }

        void SendMatrixData(BGRCore::Shader &shader, const char *uniform) override;
        void UpdateMatrix(float FOV, float nearPane, float farPane) override;

        glm::mat4 GetView() override;
        glm::mat4 GetProjection() override;
    };
}