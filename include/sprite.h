#ifndef SPRITE_H_
#define SPRITE_H_
#include "header.h"

class I_Sprite {
 public:
  I_Sprite();
  I_Sprite(Texture2D sprite, Rectangle rect, Vector2 pos);
  virtual void Draw() = 0;
 protected:
  Texture2D m_Sprite;
  Rectangle m_Rect;
  Vector2 m_Pos;
};

enum WarriorState { Idle = 0, Jumping, Falling, RightJump, LeftJump, RightFall,
                    LeftFall };
class Warrior : public I_Sprite {
 public:
  Warrior(Texture2D sprite, Rectangle rect, Vector2 pos, WarriorState state);
  ~Warrior();
  virtual void Draw() override;
  void MoveLeft();
  void MoveRight();
  void Jumping();
  void Falling();
  void RightJump();
  void LeftJump();
  void RightFall();
  void LeftFall();
  WarriorState getState() const;
  void setState(WarriorState state);
 private:
  WarriorState m_state;
};

// class Plane : public I_Sprite {

// };

#endif // SPRITE_H_