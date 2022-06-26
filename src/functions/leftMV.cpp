#include "../../include/header.h"

void leftMV(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  rectangles[4].m_Rec.x = 0;
  rectangles[4].m_Rec.y = 72;
  updateRenderer(backgroundTextures, rectangles);
  if (rectangles[4].m_Pos.x >= 8) {
    rectangles[4].m_Pos.x -= 175 * GetFrameTime();
    if (rectangles[4].m_Pos.x < 8)
      rectangles[4].m_Pos.x = 8;
  }
}