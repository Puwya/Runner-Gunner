#include "../../include/header.h"

bool initSDL(SDL_Window* &window, SDL_Renderer* &renderer) {
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) == 0) {
    SDL_CreateWindowAndRenderer(640, 480, SDL_RENDERER_ACCELERATED, 
                                &window, &renderer);
    std::cout << "SDL initialized\n";
    return true;
  }
  std::cout << "SDL was not initialized!\n";
  return false;
}