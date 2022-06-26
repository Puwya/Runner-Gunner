#ifndef HEADER_H_
#define HEADER_H_
// STD Libraries
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
// Dependencies
#include "raylib/raylib.h"

class Warrior;
struct RectangleContainer {
 public:
  RectangleContainer(Rectangle rec, Vector2 pos)
      : m_Rec(rec), m_Pos(pos) {}
  Rectangle m_Rec;
  Vector2 m_Pos;
};

bool initRaylib();
void deallocation();
void logic(Warrior &warrior);
void initTextures(std::vector<Texture2D> &backgroundTextures);
void initRect(std::vector<RectangleContainer> &rectangles);
void handleClouds(std::vector<RectangleContainer> &rectangles);
void gameLoop(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles, Warrior &warrior);
void updateRenderer(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles, Warrior &warrior);

#endif // HEADER_H_