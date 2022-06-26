#include "../include/sprite.h"

I_Sprite::I_Sprite(Texture2D sprite, Rectangle rect, Vector2 vect2)
    : m_Sprite(sprite), m_Rect(rect), m_Vect2(vect2) {}

Warrior::Warrior(Texture2D sprite, Rectangle rect, Vector2 vect2, WarriorState state) 
    : I_Sprite::I_Sprite(sprite, rect, vect2), m_state(state) {}
Warrior::~Warrior() {}
void Warrior::Draw() { DrawTextureRec(m_Sprite, m_Rect, m_Vect2, RAYWHITE); }
void Warrior::MoveLeft() {}
void Warrior::MoveRight() {}
void Warrior::Jump() {}
void Warrior::RightSpaceAction() {}
void Warrior::LeftSpaceAction() {}