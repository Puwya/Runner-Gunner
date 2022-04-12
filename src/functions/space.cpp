#include "../../include/header.h"

void space(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  for (int i = 0; i < 48; i++) {
    vecTextures[4].rect->y--;
    updateRenderer(vecTextures, renderer);
  } 
  for (int i = 0; i < 24; i++) {
    vecTextures[4].rect->y += 2;
    updateRenderer(vecTextures, renderer);
  }
}