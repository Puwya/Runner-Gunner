#include "../include/header.h"
#include "../include/sprite.h"

int main(int argc, char* argv[]) {
  const bool RAYLIB_INITIALIZED = initRaylib();
  std::vector<Texture2D> backgroundTextures;
  std::vector<RectangleContainer> rectangles;
  Warrior warrior(LoadTexture("../assets/spritesheet.png"), Rectangle{0, 0, 60, 70},
                  Vector2{290, 354}, Idle);
  // if initialized we run game loop
  if (RAYLIB_INITIALIZED) {
    initTextures(backgroundTextures);
    initRect(rectangles);
    gameLoop(backgroundTextures, rectangles, warrior);
    // Deallocations
    deallocation();
  }
  return 0;
}