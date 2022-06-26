#ifndef SPRITE_H_
#define SPRITE_H_
#include "header.h"

class I_Sprite {
 public:
  I_Sprite();
  I_Sprite(Texture2D sprite, Rectangle rect, Vector2 vect2);
  virtual void Draw() = 0;
 protected:
  Texture2D m_Sprite;
  Rectangle m_Rect;
  Vector2 m_Vect2;
};

enum WarriorState { Idle = 0, Jumping, Falling};
class Warrior : public I_Sprite {
 public:
  Warrior(Texture2D sprite, Rectangle rect, Vector2 vect2, WarriorState state);
  ~Warrior();
  virtual void Draw() override;
  void MoveLeft();
  void MoveRight();
  void Jump();
  void RightSpaceAction();
  void LeftSpaceAction();
 private:
  WarriorState m_state;
};

// class Plane : public I_Sprite {

// };

#endif // SPRITE_H_