#include "../../include/header.h"

void rightSpace(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  static int i = 1;
  if (i == 1) {
    for (int i = 0; i < 48; i++) {
      vecTextures[4].rect->y--;
      vecTextures[4].rect->x++;
      if (vecTextures[4].rect->x > 570)
        vecTextures[4].rect->x = 570;
      dir = Right;
      updateRenderer(vecTextures, renderer);
    }
    for (int i = 0; i < 48; i++) {
      vecTextures[4].rect->y++;
      if (i % 2 == 0)
        vecTextures[4].rect->x++;
      if (vecTextures[4].rect->x > 570)
        vecTextures[4].rect->x = 570;
      dir = Right;
      updateRenderer(vecTextures, renderer);
    }
    ++i;
  }else {
    i = 1;
  }
}