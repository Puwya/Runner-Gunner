#include "../../include/header.h"

void handleClouds(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  static int counter = 0;
  if (counter == 4) {
    vecTextures[1].rect->x--;
    if (vecTextures[1].rect->x == -900) {
      vecTextures[1].rect->x = 900;
    }
    vecTextures[2].rect->x--;
    if (vecTextures[2].rect->x == -900) {
      vecTextures[2].rect->x = 900;
    }
  }
  if (counter == 4)
    counter = 0;
  else
    counter++;
}