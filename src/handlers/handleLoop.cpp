#include "../../include/header.h"

void gameLoop(std::vector<TextureContainer> &textures, std::vector<RectangleContainer> &rectangles) {
  // bool gameOver = false;
  while (!WindowShouldClose()) {
    BeginDrawing();
      ClearBackground(RAYWHITE);
    EndDrawing();
  }
    // SDL_Event event;
    // if (SDL_PollEvent(&event) > 0) {
    //   handleEvent(event, gameOver, renderer, vecTextures);
    // }
    // updateRenderer(vecTextures, renderer);
}