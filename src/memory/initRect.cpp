#include "../../include/header.h"

void initRect(std::vector<RectangleContainer> &rectangles) {
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 640, 480}, Vector2{0, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 640, 189}, Vector2{0, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 640, 189}, Vector2{640, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 640, 480}, Vector2{0, 0}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 60, 70}, Vector2{290, 354}));
  rectangles.push_back(RectangleContainer(Rectangle{0, 0, 60, 70}, Vector2{290, 354}));
}