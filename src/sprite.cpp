#include "../include/sprite.h"

I_Sprite::I_Sprite(Texture2D sprite, Rectangle rect, Vector2 vect2)
    : m_Sprite(sprite), m_Rect(rect), m_Vect2(vect2) {}

Warrior::Warrior(Texture2D sprite, Rectangle rect, Vector2 vect2, WarriorState state) 
    : I_Sprite::I_Sprite(sprite, rect, vect2), m_state(state) {}
Warrior::~Warrior() {}
void Warrior::Draw() { DrawTextureRec(m_Sprite, m_Rect, m_Vect2, RAYWHITE); }
void Warrior::MoveLeft() {
  m_Rect.x = 0;
  m_Rect.y = 72;
  if (m_Vect2.x >= 8) {
    m_Vect2.x -= 175 * GetFrameTime();
    if (m_Vect2.x < 8)
      m_Vect2.x = 8;
  }
}
void Warrior::MoveRight() {
  m_Rect.x = 65;
  m_Rect.y = 72;
  if (m_Vect2.x <= 570) {
    m_Vect2.x += 175 * GetFrameTime();
    if (m_Vect2.x > 570)
      m_Vect2.x = 570;
  }

}
void Warrior::Jump() {}
void Warrior::RightSpaceAction() {}
void Warrior::LeftSpaceAction() {}