#include "../../include/header.h"
#include "../../include/sprite.h"

void initTextures(std::vector<Texture2D> &backgroundTextures) {
  std::string texture_load[4] {"../assets/BackGround.png", "../assets/clouds.png", 
                               "../assets/clouds1.png", "../assets/sky.png"};
  // This loop iterates through the amount of backgroundTextures program needs
  for (int i = 0; i < 4; i++) {
    char* cstr = new char [texture_load[i].length()+1];
    strcpy(cstr, texture_load[i].c_str());
    backgroundTextures.push_back(LoadTexture(cstr));
    delete []cstr;
  }
}