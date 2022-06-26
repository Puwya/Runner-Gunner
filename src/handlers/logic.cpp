#include "../../include/header.h"
#include "../../include/sprite.h"

void logic(Warrior &warrior) {
  if (IsKeyDown(KEY_SPACE) && IsKeyDown(KEY_RIGHT)) {
    std::cout << "RIGHT AND SPACE\n";
    // rightSpace(backgroundTextures);
  }else if (IsKeyDown(KEY_SPACE) && IsKeyDown(KEY_LEFT)) {
    std::cout << "LEFT AND SPACE\n";
    // leftSpace(backgroundTextures, renderer);
  }else if (IsKeyDown(KEY_RIGHT)) {
    std::cout << "RIGHT\n";
    warrior.MoveRight();
  }else if (IsKeyDown(KEY_LEFT)) {
    std::cout << "LEFT\n";
    warrior.MoveLeft();
  }else if (IsKeyDown(KEY_SPACE)) {
    std::cout << "SPACE\n";
    // space(backgroundTextures, rectangles);
  }
}