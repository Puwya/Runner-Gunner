#include "../../include/header.h"

void leftMV(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  dir = Left;
  updateRenderer(vecTextures, renderer);
  if (vecTextures[4].rect->x >= 8) {
    for (int i = 0; i < 12; i++){
      vecTextures[4].rect->x--;
      if (vecTextures[4].rect->x < 8)
        vecTextures[4].rect->x = 8;
      updateRenderer(vecTextures, renderer);
    }
  }
}