#include "../../include/header.h"

void space(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  rectangles[4].m_Rec.y -= 100 * GetFrameTime();
}