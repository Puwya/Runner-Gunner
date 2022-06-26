#include "../../include/header.h"

void leftMV(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  dir = Left;
  updateRenderer(backgroundTextures, rectangles);
  if (rectangles[4].m_Pos.x >= 8) {
    rectangles[4].m_Pos.x -= 165 * GetFrameTime();
    if (rectangles[4].m_Pos.x < 8)
      rectangles[4].m_Pos.x = 8;
  }
}