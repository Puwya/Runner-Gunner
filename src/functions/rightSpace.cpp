#include "../../include/header.h"

void rightSpace(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  for (int i = 0; i < 48; i++) {
    vecTextures[4].rect->y--;
    vecTextures[4].rect->x++;
    if (vecTextures[4].rect->x > 575)
      vecTextures[4].rect->x = 575;
    dir = Right;
    updateRenderer(vecTextures, renderer);
  }
  for (int i = 0; i < 48; i++) {
    vecTextures[4].rect->y++;
    if (i % 2 == 0)
      vecTextures[4].rect->x++;
    if (vecTextures[4].rect->x > 575)
      vecTextures[4].rect->x = 575;
    dir = Right;
    updateRenderer(vecTextures, renderer);
  }
}