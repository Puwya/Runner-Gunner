#include "../../include/header.h"

void logic(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  if (IsKeyDown(KEY_SPACE) && IsKeyDown(KEY_RIGHT)) {
    std::cout << "RIGHT AND SPACE\n";
    // rightSpace(backgroundTextures);
  }else if (IsKeyDown(KEY_SPACE) && IsKeyDown(KEY_LEFT)) {
    std::cout << "LEFT AND SPACE\n";
    // leftSpace(backgroundTextures, renderer);
  }else if (IsKeyDown(KEY_RIGHT)) {
    std::cout << "RIGHT\n";
    rightMV(backgroundTextures, rectangles);
  }else if (IsKeyDown(KEY_LEFT)) {
    std::cout << "LEFT\n";
    leftMV(backgroundTextures, rectangles);
  }else if (IsKeyDown(KEY_SPACE)) {
    std::cout << "SPACE\n";
    // space(backgroundTextures, renderer);
  }
}