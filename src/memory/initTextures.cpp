#include "../../include/header.h"

void initTextures(std::vector<Texture2D> &textures) {
  std::string texture_load[6] {"../assets/BackGround.png", "../assets/clouds.png", 
                               "../assets/clouds1.png", "../assets/sky.png", 
                               "../assets/spriteL.png", "../assets/spriteR.png"};
  // This loop iterates through the amount of textures program needs
  for (int i = 0; i < 6; i++) {
    // Creating C String on the heap and declaring size to be current texture 
    // string size
    char* cstr = new char [texture_load[i].length()+1];
    // Using string copy to copy current string into a char *
    strcpy(cstr, texture_load[i].c_str());
    // TODO
    textures.push_back(LoadTexture(cstr));

    delete []cstr;
  }
}