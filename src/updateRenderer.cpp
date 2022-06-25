#include "../include/header.h"

void updateRenderer(std::vector<Texture2D> &textures, std::vector<RectangleContainer> &rectangles) {
  handleClouds(rectangles);
  DrawTextureRec(textures[0], rectangles[0].m_Rec, rectangles[0].m_Pos, RAYWHITE);
  DrawTextureRec(textures[1], rectangles[1].m_Rec, rectangles[1].m_Pos, RAYWHITE);
  DrawTextureRec(textures[2], rectangles[2].m_Rec, rectangles[2].m_Pos, RAYWHITE);
  DrawTextureRec(textures[3], rectangles[3].m_Rec, rectangles[3].m_Pos, RAYWHITE);
  if (dir == Left) {
    DrawTextureRec(textures[4], rectangles[4].m_Rec, rectangles[4].m_Pos, RAYWHITE);
  }else {
    DrawTextureRec(textures[5], rectangles[5].m_Rec, rectangles[5].m_Pos, RAYWHITE);
  }
}