#include "../../include/header.h"
#include "../../include/sprite.h"

bool isKeyDownAndStateIdle(int KeyPressed, WarriorState state) {
  return (IsKeyDown(KeyPressed) && state == Idle);
}

void logic(Warrior &warrior) {
  if (IsKeyDown(KEY_SPACE) && isKeyDownAndStateIdle(KEY_RIGHT, warrior.getState())) {
    warrior.setState(RightJump);
  } else if (
      IsKeyDown(KEY_SPACE) && isKeyDownAndStateIdle(KEY_LEFT, warrior.getState())) {
    warrior.setState(LeftJump);
  } else if (isKeyDownAndStateIdle(KEY_RIGHT, warrior.getState())) {
    warrior.MoveRight();
  } else if (isKeyDownAndStateIdle(KEY_LEFT, warrior.getState())) {
    warrior.MoveLeft();
  } else if (isKeyDownAndStateIdle(KEY_SPACE, warrior.getState())) {
    warrior.setState(Jumping);
  }

  switch (warrior.getState()) {
    case Jumping: {
      warrior.Jumping();
      break;
    }
    case Falling: {
      warrior.Falling();
      break;
    }
    case RightJump: {
      warrior.RightJump();
      break;
    }
    case RightFall: {
      warrior.RightFall();
      break;
    }
    case LeftJump: {
      warrior.LeftJump();
      break;
    }
    case LeftFall: {
      warrior.LeftFall();
      break;
    }
    default: {
      break;
    }
  }
}