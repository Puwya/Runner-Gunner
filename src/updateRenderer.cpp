#include "../include/header.h"

void updateRenderer(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles) {
  handleClouds(rectangles);
  DrawTextureRec(backgroundTextures[0], rectangles[0].m_Rec, rectangles[0].m_Pos, RAYWHITE);
  DrawTextureRec(backgroundTextures[1], rectangles[1].m_Rec, rectangles[1].m_Pos, RAYWHITE);
  DrawTextureRec(backgroundTextures[2], rectangles[2].m_Rec, rectangles[2].m_Pos, RAYWHITE);
  DrawTextureRec(backgroundTextures[3], rectangles[3].m_Rec, rectangles[3].m_Pos, RAYWHITE);
  if (dir == Left) {
    DrawTextureRec(backgroundTextures[4], rectangles[4].m_Rec, rectangles[4].m_Pos, RAYWHITE);
  }else {
    DrawTextureRec(backgroundTextures[5], rectangles[4].m_Rec, rectangles[4].m_Pos, RAYWHITE);
  }
}