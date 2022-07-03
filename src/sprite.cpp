#include "../include/sprite.h"

I_Sprite::I_Sprite(Texture2D sprite, Rectangle rect, Vector2 pos)
    : m_Sprite(sprite), m_Rect(rect), m_Pos(pos) {}

Warrior::Warrior(Texture2D sprite, Rectangle rect, Vector2 pos, WarriorState state)
    : I_Sprite::I_Sprite(sprite, rect, pos), m_state(state) {}
Warrior::~Warrior() {}

void Warrior::Draw() { DrawTextureRec(m_Sprite, m_Rect, m_Pos, RAYWHITE); }

void Warrior::MoveLeft() {
  m_Rect.x = 0;
  m_Rect.y = 72;
  if (m_Pos.x >= 8) {
    m_Pos.x -= 175 * GetFrameTime();
    if (m_Pos.x < 8) m_Pos.x = 8;
  }
}
void Warrior::MoveRight() {
  m_Rect.x = 65;
  m_Rect.y = 72;
  if (m_Pos.x <= 570) {
    m_Pos.x += 175 * GetFrameTime();
    if (m_Pos.x > 570) m_Pos.x = 570;
  }
}
void Warrior::Jumping() {
  m_Pos.y -= 150 * GetFrameTime();
  if (m_Pos.y < 285) {
    m_state = WarriorState::Falling;
  }
}

void Warrior::Falling() {
  m_Pos.y += 175 * GetFrameTime();
  if (m_Pos.y > 354) {
    m_Pos.y = 354;
    m_state = WarriorState::Idle;
  }
}

void Warrior::RightJump() {
  m_Pos.y -= 150 * GetFrameTime();
  m_Pos.x += 125 * GetFrameTime();
  if (m_Pos.y < 300) {
    m_state = WarriorState::RightFall;
  }
}

void Warrior::LeftJump() {
  m_Pos.y -= 150 * GetFrameTime();
  m_Pos.x -= 125 * GetFrameTime();
  if (m_Pos.y < 300) {
    m_state = WarriorState::LeftFall;
  }
}

void Warrior::RightFall() {
  m_Pos.y += 165 * GetFrameTime();
  m_Pos.x += 90 * GetFrameTime();
  if (m_Pos.y > 354) {
    m_state = WarriorState::Idle;
  }
}

void Warrior::LeftFall() {
  m_Pos.y += 165 * GetFrameTime();
  m_Pos.x -= 90 * GetFrameTime();
  if (m_Pos.y > 354) {
    m_state = WarriorState::Idle;
  }
}

WarriorState Warrior::getState() const { return m_state; }

void Warrior::setState(WarriorState state) { m_state = state; }