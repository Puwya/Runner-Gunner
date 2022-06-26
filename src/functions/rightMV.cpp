#include "../../include/header.h"

void rightMV(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  dir = Right;
  updateRenderer(backgroundTextures, rectangles);
  if (rectangles[4].m_Pos.x <= 570) {
    rectangles[4].m_Pos.x += 165 * GetFrameTime();
    if (rectangles[4].m_Pos.x > 570)
      rectangles[4].m_Pos.x = 570;
  }
}