#include "../../include/header.h"

void initRect(std::vector<RectangleContainer> &rectangles) {
  // Background
  rectangles.push_back(
      RectangleContainer(Rectangle{0, 0, 640, 480}, Vector2{0, 0}));
  // Clouds
  rectangles.push_back(
      RectangleContainer(Rectangle{0, 0, 640, 189}, Vector2{0, 0}));
  // Clouds
  rectangles.push_back(
      RectangleContainer(Rectangle{0, 0, 640, 189}, Vector2{640, 0}));
  // Scene
  rectangles.push_back(
      RectangleContainer(Rectangle{0, 0, 640, 480}, Vector2{0, 0}));
}