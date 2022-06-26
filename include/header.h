#ifndef HEADER_H_
#define HEADER_H_
// STD Libraries
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
// Dependencies
#include "raylib/raylib.h"

struct RectangleContainer {
 public:
  RectangleContainer(Rectangle rec, Vector2 pos)
      : m_Rec(rec), m_Pos(pos) {}
  Rectangle m_Rec;
  Vector2 m_Pos;
};
enum Dir {
  Right = 0,
  Left
};

bool initRaylib();
void deallocation();
void logic(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles);
void initTextures(std::vector<Texture2D> &backgroundTextures);
void initRect(std::vector<RectangleContainer> &rectangles);
void handleClouds(std::vector<RectangleContainer> &rectangles);
void gameLoop(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles);
void updateRenderer(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles);
void rightMV(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles);
void leftMV(std::vector<Texture2D> &backgroundTextures, std::vector<RectangleContainer> &rectangles);
// void rightSpace(std::vector<backgroundTextures> &vecTextures, SDL_Renderer* &renderer);
// void leftSpace(std::vector<backgroundTextures> &vecTextures, SDL_Renderer* &renderer);
// void space(std::vector<backgroundTextures> &vecTextures, SDL_Renderer* &renderer);

extern Dir dir;

#endif // HEADER_H_