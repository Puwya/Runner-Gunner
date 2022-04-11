#include "../include/header.h"

void updateRenderer(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  handleClouds(vecTextures, renderer);
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, vecTextures[0].texture, NULL, vecTextures[0].rect);
  SDL_RenderCopy(renderer, vecTextures[1].texture, NULL, vecTextures[1].rect);
  SDL_RenderCopy(renderer, vecTextures[2].texture, NULL, vecTextures[2].rect);
  SDL_RenderCopy(renderer, vecTextures[3].texture, NULL, vecTextures[3].rect);
  if (dir == Left) {
    SDL_RenderCopy(renderer, vecTextures[4].texture, NULL, vecTextures[4].rect);
  }else {
    SDL_RenderCopy(renderer, vecTextures[5].texture, NULL, vecTextures[4].rect);
  }
  SDL_RenderPresent(renderer);
}