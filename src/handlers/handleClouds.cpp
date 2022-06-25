#include "../../include/header.h"

void handleClouds(std::vector<RectangleContainer> &rectangles) {
  static int counter = 0;
  if (counter == 4) {
    rectangles[1].m_Pos.x--;
    if (rectangles[1].m_Pos.x == -900) {
      rectangles[1].m_Pos.x = 900;
    }
    rectangles[2].m_Pos.x--;
    if (rectangles[2].m_Pos.x == -900) {
      rectangles[2].m_Pos.x = 900;
    }
    counter = 0;
  }else
    counter++;
}