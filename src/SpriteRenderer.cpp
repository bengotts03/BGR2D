#include "SpriteRenderer.h"

#include "Renderer2D.h"

BGR2D::SpriteRenderer::SpriteRenderer(Sprite& sprite) : _sprite(sprite) {
}

BGR2D::SpriteRenderer::~SpriteRenderer() {
}

void BGR2D::SpriteRenderer::Draw() {

}

void BGR2D::SpriteRenderer::SetSprite(Sprite& sprite) {
    _sprite = sprite;
}

BGR2D::Sprite& BGR2D::SpriteRenderer::GetSprite() {
    return _sprite;
}
