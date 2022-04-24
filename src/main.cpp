#include "../include/header.h"

std::string texture_load[6] {"../assets/BackGround.bmp", "../assets/clouds.bmp", 
                             "../assets/clouds1.bmp", "../assets/sky.bmp", 
                             "../assets/spriteL.bmp", "../assets/spriteR.bmp"};
Dir dir = Right;

int main(int argc, char* argv[]) {
  SDL_Window* window = nullptr;
  SDL_Renderer* renderer = nullptr;
  // Initialize window and renderer
  bool initialized = initSDL(window, renderer);

  std::vector<textures> vecTextures;
  initTextures(vecTextures, renderer);
  initRect(vecTextures);

  // if initialized we run game loop
  if (initialized)
    gameLoop(vecTextures, renderer);
  // Deallocations
  deallocation(initialized, window, renderer);
  return 0;
}
// test