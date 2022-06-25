#include "../../include/header.h"

void logic(std::vector<Texture2D> &textures) {
  if (IsKeyDown(KEY_SPACE) && IsKeyDown(KEY_RIGHT)) {
    std::cout << "RIGHT AND SPACE\n";
    // rightSpace(textures, renderer);
  }else if (IsKeyDown(KEY_SPACE) && IsKeyDown(KEY_LEFT)) {
    std::cout << "LEFT AND SPACE\n";
    // leftSpace(textures, renderer);
  }else if (IsKeyDown(KEY_RIGHT)) {
    std::cout << "RIGHT\n";
    // rightMV(textures, renderer);
  }else if (IsKeyDown(KEY_LEFT)) {
    std::cout << "LEFT\n";
    // leftMV(textures, renderer);
  }else if (IsKeyDown(KEY_SPACE)) {
    std::cout << "SPACE\n";
    // space(textures, renderer);
  }
}