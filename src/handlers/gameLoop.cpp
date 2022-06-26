#include "../../include/header.h"

void gameLoop(std::vector<Texture2D> &textures, std::vector<RectangleContainer> &rectangles) {
  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      logic(textures, rectangles);
      updateRenderer(textures, rectangles);
    EndDrawing();
  }
}