#include "../include/header.h"

Dir dir = Right;

int main(int argc, char* argv[]) {
  const bool RAYLIB_INITIALIZED = initRaylib();
  // if initialized we run game loop
  if (RAYLIB_INITIALIZED) {
    std::vector<TextureContainer> textures;
    initTextures(textures);
    initRect(vecTextures);
    gameLoop(vecTextures, renderer);
  }
  // Deallocations
  if (RAYLIB_INITIALIZED)
    deallocation();
  return 0;
}