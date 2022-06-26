#include "../../include/header.h"
#include "../../include/sprite.h"

void gameLoop(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles, Warrior &warrior) {
  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
      logic(backgroundTextures, rectangles);
      updateRenderer(backgroundTextures, rectangles, warrior);
    EndDrawing();
  }
}