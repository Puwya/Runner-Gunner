#include "../../include/header.h"

void leftMV(std::vector<Texture2D> &textures, std::vector<RectangleContainer> &rectangles) {
  dir = Left;
  updateRenderer(textures, rectangles);
  if (rectangles[4].m_Pos.x >= 8) {
    rectangles[4].m_Pos.x--;
    if (rectangles[4].m_Pos.x < 8)
      rectangles[4].m_Pos.x = 8;
  }
}