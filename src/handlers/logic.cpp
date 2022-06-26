#include "../../include/header.h"
#include "../../include/sprite.h"

bool isKeyDownAndStateIdle(int KeyPressed, WarriorState state) { 
  return (IsKeyDown(KeyPressed) && state == Idle); 
}

void logic(Warrior &warrior) {
  if (IsKeyDown(KEY_SPACE) && isKeyDownAndStateIdle(KEY_RIGHT, warrior.getState())) {
    std::cout << "RIGHT AND SPACE\n";
    warrior.setState(RightJump);
  }else if (IsKeyDown(KEY_SPACE) && isKeyDownAndStateIdle(KEY_LEFT, warrior.getState())) {
    std::cout << "LEFT AND SPACE\n";
    warrior.setState(LeftJump);
  }else if (isKeyDownAndStateIdle(KEY_RIGHT, warrior.getState())) {
    std::cout << "RIGHT\n";
    warrior.MoveRight();
  }else if (isKeyDownAndStateIdle(KEY_LEFT, warrior.getState())) {
    std::cout << "LEFT\n";
    warrior.MoveLeft();
  }else if (isKeyDownAndStateIdle(KEY_SPACE, warrior.getState())) {
    std::cout << "SPACE\n";
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