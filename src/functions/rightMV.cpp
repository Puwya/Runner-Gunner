#include "../../include/header.h"

void rightMV(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  rectangles[4].m_Rec.x = 65;
  rectangles[4].m_Rec.y = 72;
  if (rectangles[4].m_Pos.x <= 570) {
    rectangles[4].m_Pos.x += 175 * GetFrameTime();
    if (rectangles[4].m_Pos.x > 570)
      rectangles[4].m_Pos.x = 570;
  }
}