#include "../../include/header.h"

bool initRaylib() {
  InitWindow(640, 480, "Gunner Runner");
  if (IsWindowReady()) {
    SetWindowState(FLAG_VSYNC_HINT);
    std::cout << "Raylib initialized\n";
    return true;
  }
  std::cout << "Raylib was not initialized!\n";
  return false;
}