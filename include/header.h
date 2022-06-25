#ifndef HEADER_H_
#define HEADER_H_
// STD Libraries
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
// Dependencies
#include "raylib/raylib.h"

struct TextureContainer {
 public:
  TextureContainer(Texture2D texture, std::string &name)
      : m_Texture(texture), m_Name(name) {}
  std::string m_Name;
  Texture2D m_Texture;
};
enum Dir {
  Right = 0,
  Left
};

bool initRaylib();
void deallocation();
void handleEvent(const SDL_Event &event, bool &gameOver, SDL_Renderer* &renderer, 
                 std::vector<textures> &vecTextures);
void initTextures(std::vector<TextureContainer> &textures);
void initRect(std::vector<textures> &vecTextures);
void handleClouds(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void gameLoop(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void updateRenderer(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void rightSpace(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void leftSpace(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void rightMV(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void leftMV(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void space(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);

extern Dir dir;

#endif // HEADER_H_