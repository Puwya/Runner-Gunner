#include "../../include/header.h"

void rightMV(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  dir = Right;
  updateRenderer(vecTextures, renderer);
  if (vecTextures[4].rect->x <= 570) {
    for (int i = 0; i < 12; i++){
      vecTextures[4].rect->x++;
      if (vecTextures[4].rect->x > 570)
        vecTextures[4].rect->x = 570;
      updateRenderer(vecTextures, renderer);
    }
  }
}