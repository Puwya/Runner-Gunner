#include "../include/header.h"
#include "../include/sprite.h"

void updateRenderer(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles, Warrior &warrior) {
  handleClouds(rectangles);
  for (int i = 0; i < backgroundTextures.size(); ++i) {
    DrawTextureRec(backgroundTextures[i], rectangles[i].m_Rec, rectangles[i].m_Pos, RAYWHITE);
  }
  warrior.Draw();
}