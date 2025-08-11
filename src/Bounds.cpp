#include "Bounds.h"

namespace BGR2D {
    Bounds::Bounds(glm::vec2 centre, glm::vec2 size) {
        _centre = centre;
        _size = size;
        _extents = glm::vec2(_size.x / 2, _size.y / 2);

        _min = glm::vec2(_centre.x - _extents.x, _centre.y - _extents.y);
        _max = glm::vec2(_centre.x + _extents.x, _centre.y + _extents.y);
    }

    glm::vec2 Bounds::GetCentre() const {
        return _centre;
    }

    glm::vec2 Bounds::GetSize() const {
        return _size;
    }

    glm::vec2 Bounds::GetExtents() const {
        return _extents;
    }

    glm::vec2 Bounds::GetMin() const {
        return _min;
    }

    glm::vec2 Bounds::GetMax() const {
        return _max;
    }

    float Bounds::GetMinX() const {
        return _minX;
    }

    float Bounds::GetMaxX() const {
        return _maxX;
    }

    float Bounds::GetMinY() const {
        return _minY;
    }

    float Bounds::GetMaxY() const {
        return _maxY;
    }
}
