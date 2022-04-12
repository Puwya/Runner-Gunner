#include "../../include/header.h"

void handleEvent(const SDL_Event &event, bool &gameOver, SDL_Renderer* &renderer, 
                 std::vector<textures> &vecTextures) {
  const Uint8* state = SDL_GetKeyboardState(NULL);
  if (event.type == SDL_QUIT){
    std::cout << "Thank YOU!\n";
    gameOver = true;
  }else if (state[SDL_SCANCODE_SPACE] && state[SDL_SCANCODE_RIGHT] && 
      event.type == SDL_KEYDOWN) {
    rightSpace(vecTextures, renderer);
  }else if (state[SDL_SCANCODE_SPACE] && state[SDL_SCANCODE_LEFT] && 
      event.type == SDL_KEYDOWN) {
    leftSpace(vecTextures, renderer);
  }else if (event.key.keysym.sym == SDLK_RIGHT && event.type == SDL_KEYDOWN) {
    rightMV(vecTextures, renderer);
  }else if (event.key.keysym.sym == SDLK_LEFT && event.type == SDL_KEYDOWN) {
    leftMV(vecTextures, renderer);
  }else if (event.key.keysym.sym == SDLK_SPACE && event.type == SDL_KEYDOWN) {
    space(vecTextures, renderer);
  }
}