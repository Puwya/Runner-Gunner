#include "../../include/header.h"

void gameLoop(std::vector<TextureContainer> &textures, std::vector<RectangleContainer> &rectangles) {
  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      logic(textures);
      updateRenderer(textures, rectangles);
    EndDrawing();
  }
}