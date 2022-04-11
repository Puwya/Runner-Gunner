#include "../include/header.h"

void initTextures(std::vector<textures> &vecTextures, SDL_Renderer* &renderer) {
  // This loop iterates through the amount of textures program needs
  for (int i = 0; i < 6; i++) {
    // Creating C String on the heap and declaring size to be current texture string size
    char* cstr = new char [texture_load[i].length()+1];
    // Using string copy to copy current string into a char *
    strcpy(cstr, texture_load[i].c_str());
    // Loading that C string into surface 
    SDL_Surface* surface = SDL_LoadBMP(cstr);
    // Creating texture from that loaded surface and storing it in texture
    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

    // Declaring a variable type textures
    textures currTexture;
    // Using attribute texture name to load current texture name
    currTexture.texture_name = texture_load[i];
    // Using SDL_Texture attribute to store the just made SDL_Texture
    currTexture.texture = texture;
    vecTextures.push_back(currTexture);

    delete []cstr;
    SDL_FreeSurface(surface);
  }
}