#include "../../include/header.h"

void initRect(std::vector<RectangleContainer> &rectangles) {
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 640, 480}, Vector2{0, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 900, 210}, Vector2{0, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 900, 210}, Vector2{900, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 640, 480}, Vector2{0, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 60, 65}, Vector2{290, 358}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 60, 65}, Vector2{290, 358}));
}