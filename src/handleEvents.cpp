#include "../include/header.h"

void handleEvent(const SDL_Event &event, bool &gameOver, SDL_Renderer* &renderer, 
                 std::vector<textures> &vecTextures) {
  if (event.type == SDL_QUIT){
    std::cout << "Thank YOU!\n";
    gameOver = true;
  }
  const Uint8* state = SDL_GetKeyboardState(NULL);
  if (state[SDL_SCANCODE_RIGHT] && state[SDL_SCANCODE_SPACE] && 
      event.type == SDL_KEYDOWN) {
    for (int i = 0; i < 48; i++) {
      vecTextures[4].rect->y--;
      vecTextures[4].rect->x++;
      if (vecTextures[4].rect->x > 575)
        vecTextures[4].rect->x = 575;
      dir = Right;
      updateRenderer(vecTextures, renderer);
    }
    for (int i = 0; i < 48; i++) {
      vecTextures[4].rect->y++;
      if (i % 2 == 0)
        vecTextures[4].rect->x++;
      if (vecTextures[4].rect->x > 575)
        vecTextures[4].rect->x = 575;
      dir = Right;
      updateRenderer(vecTextures, renderer);
    }
  }else if (state[SDL_SCANCODE_LEFT] && state[SDL_SCANCODE_SPACE] && 
      event.type == SDL_KEYDOWN) {
    for (int i = 0; i < 48; i++) {
      vecTextures[4].rect->y--;
      vecTextures[4].rect->x--;
      if (vecTextures[4].rect->x < 0)
        vecTextures[4].rect->x = 0;
      dir = Left;
      updateRenderer(vecTextures, renderer);
    }
    for (int i = 0; i < 48; i++) {
      vecTextures[4].rect->y++;
      if (i % 2 == 0)
        vecTextures[4].rect->x--;
      if (vecTextures[4].rect->x < 0)
        vecTextures[4].rect->x = 0;
      dir = Left;
      updateRenderer(vecTextures, renderer);
    }
  }else if (event.key.keysym.sym == SDLK_RIGHT && event.type == SDL_KEYDOWN) {
    if (vecTextures[4].rect->x <= 575) {
      for (int i = 0; i < 12; i++){
        vecTextures[4].rect->x++;
        updateRenderer(vecTextures, renderer);
      }
    }
    if (vecTextures[4].rect->x > 575)
      vecTextures[4].rect->x = 575;
    dir = Right;
    updateRenderer(vecTextures, renderer);
  }else if (event.key.keysym.sym == SDLK_LEFT && event.type == SDL_KEYDOWN) {
    if (vecTextures[4].rect->x >= 0) {
      for (int i = 0; i < 12; i++){
        vecTextures[4].rect->x--;
        updateRenderer(vecTextures, renderer);
      }
    }
    if (vecTextures[4].rect->x < 0)
      vecTextures[4].rect->x = 0;
    dir = Left;
    updateRenderer(vecTextures, renderer);
  }else if (event.key.keysym.sym == SDLK_SPACE && event.type == SDL_KEYDOWN) {
    for (int i = 0; i < 48; i++) {
      vecTextures[4].rect->y--;
      updateRenderer(vecTextures, renderer);
    } 
    for (int i = 0; i < 24; i++) {
      vecTextures[4].rect->y += 2;
      updateRenderer(vecTextures, renderer);
    }
  }

}