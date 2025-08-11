#pragma once

#include <glm/vec2.hpp>

namespace BGR2D {
    class Bounds {
    public:
        Bounds(glm::vec2 centre, glm::vec2 size);

        glm::vec2 GetCentre() const;
        glm::vec2 GetSize() const;
        glm::vec2 GetExtents() const;

        glm::vec2 GetMin() const;
        glm::vec2 GetMax() const;

        float GetMinX() const;
        float GetMaxX() const;
        float GetMinY() const;
        float GetMaxY() const;
    private:
        glm::vec2 _centre{};
        glm::vec2 _size{};
        glm::vec2 _extents{};

        glm::vec2 _min{};
        glm::vec2 _max{};

        float _minX{};
        float _maxX{};
        float _minY{};
        float _maxY{};
    };
}
