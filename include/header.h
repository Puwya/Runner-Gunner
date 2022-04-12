#ifndef HEADER_H_
#define HEADER_H_
// STD Libraries
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
// SDL 2 Library & Dependencies
#include <SDL.h>
#include "glad.h"

struct textures {
  std::string texture_name;
  SDL_Texture* texture;
  SDL_Rect* rect;
};
enum Dir {
  Right = 0,
  Left
};

bool initSDL(SDL_Window* &window, SDL_Renderer* &renderer);
void deallocation(SDL_Window* &window, SDL_Renderer* &renderer);
void deallocation(bool initialized, SDL_Window* &window, SDL_Renderer* &renderer);
void handleEvent(const SDL_Event &event, bool &gameOver, SDL_Renderer* &renderer, 
                 std::vector<textures> &vecTextures);
void initTextures(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void initRect(std::vector<textures> &vecTextures);
void handleClouds(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void gameLoop(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void updateRenderer(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void rightSpace(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void leftSpace(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void rightMV(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void leftMV(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);
void space(std::vector<textures> &vecTextures, SDL_Renderer* &renderer);

extern std::string texture_load[];
extern Dir dir;

#endif // HEADER_H_