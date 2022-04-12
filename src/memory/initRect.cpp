#include "../../include/header.h"

void initRect(std::vector<textures> &vecTextures) {
  vecTextures[0].rect = new SDL_Rect {0, 0, 640, 480};
  vecTextures[1].rect = new SDL_Rect {0, 0, 900, 210};
  vecTextures[2].rect = new SDL_Rect {900, 0, 900, 210};
  vecTextures[3].rect = new SDL_Rect {0, 0, 640, 480};
  vecTextures[4].rect = new SDL_Rect {290, 373, 45, 50};
  vecTextures[5].rect = new SDL_Rect {290, 373, 45, 50};
}