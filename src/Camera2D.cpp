#include "Camera2D.h"

void BGR2D::Camera2D::SendMatrixData(BGRCore::Shader& shader, const char *uniform) {
    shader.SetVec3("uCameraPosition", Position);
    Camera::SendMatrixData(shader, uniform);
}

void BGR2D::Camera2D::UpdateMatrix(float FOV, float nearPane, float farPane) {
    Camera::UpdateMatrix(FOV, nearPane, farPane);
}

glm::mat4 BGR2D::Camera2D::GetView() {
    glm::mat4 view = glm::mat4(1.0f);
    return view = glm::translate(view, Position);
}

glm::mat4 BGR2D::Camera2D::GetProjection() {
    return glm::ortho(0.0f, (float)_window->GetWindowWidth(), 0.0f, (float)_window->GetWindowHeight(),
        _nearPane, _farPane);
}
