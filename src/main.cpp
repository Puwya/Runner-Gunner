#include "../include/header.h"

Dir dir = Right;

int main(int argc, char* argv[]) {
  const bool RAYLIB_INITIALIZED = initRaylib();
  // if initialized we run game loop
  if (RAYLIB_INITIALIZED) {
    std::vector<TextureContainer> textures;
    std::vector<RectangleContainer> rectangles;
    initTextures(textures);
    initRect(rectangles);
    gameLoop(textures, rectangles);
  }
  // Deallocations
  if (RAYLIB_INITIALIZED)
    deallocation();
  return 0;
}