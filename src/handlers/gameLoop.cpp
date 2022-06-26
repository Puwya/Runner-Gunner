#include "../../include/header.h"

void gameLoop(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      logic(backgroundTextures, rectangles);
      updateRenderer(backgroundTextures, rectangles);
    EndDrawing();
  }
}