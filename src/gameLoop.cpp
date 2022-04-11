#include "../include/header.h"

void gameLoop(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  bool gameOver = false;
  while (!gameOver) {
    SDL_Event event;
    if (SDL_PollEvent(&event) > 0) {
      handleEvent(event, gameOver, renderer, vecTextures);
    }
    updateRenderer(vecTextures, renderer);
  }
}