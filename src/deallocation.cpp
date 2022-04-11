#include "../include/header.h"

void deallocation(bool initialized, SDL_Window* &window, SDL_Renderer* &renderer) {
  if (initialized) {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout << "Destroying Window & Renderer\n";
  }
}