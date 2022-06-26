#include "../../include/header.h"

void rightMV(std::vector<Texture2D> &textures, std::vector<RectangleContainer> &rectangles) {
  dir = Right;
  updateRenderer(textures, rectangles);
  if (rectangles[4].m_Pos.x <= 570) {
    rectangles[4].m_Pos.x++;
    if (rectangles[4].m_Pos.x > 570)
      rectangles[4].m_Pos.x = 570;
  }
}