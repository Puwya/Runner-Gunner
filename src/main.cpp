#include "../include/header.h"

Dir dir = Right;

int main(int argc, char* argv[]) {
  const bool RAYLIB_INITIALIZED = initRaylib();
  std::vector<Texture2D> backgroundTextures;
  std::vector<RectangleContainer> rectangles;
  // if initialized we run game loop
  if (RAYLIB_INITIALIZED) {
    initTextures(backgroundTextures);
    initRect(rectangles);
    gameLoop(backgroundTextures, rectangles);
  }
  // Deallocations
  if (RAYLIB_INITIALIZED)
    deallocation();
  return 0;
}