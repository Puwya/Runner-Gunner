#include "../../include/header.h"

void space(std::vector<backgroundTextures> &vecTextures, SDL_Renderer* &renderer) {
  for (int i = 0; i < 48; i++) {
    vecTextures[4].rect->y--;
    updateRenderer(vecTextures, renderer);
  } 
  for (int i = 0; i < 16; i++) {
    for (int j = 0; j < 3; j++) {
      vecTextures[4].rect->y++;
      updateRenderer(vecTextures, renderer);
    }
    updateRenderer(vecTextures, renderer);
  }
}