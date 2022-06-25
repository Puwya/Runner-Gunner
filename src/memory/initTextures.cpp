#include "../../include/header.h"

void initTextures(std::vector<TextureContainer> &textures) {
  std::string texture_load[6] {"../assets/BackGround.bmp", "../assets/clouds.bmp", 
                               "../assets/clouds1.bmp", "../assets/sky.bmp", 
                               "../assets/spriteL.bmp", "../assets/spriteR.bmp"};
  // This loop iterates through the amount of textures program needs
  for (int i = 0; i < 6; i++) {
    // Creating C String on the heap and declaring size to be current texture 
    // string size
    char* cstr = new char [texture_load[i].length()+1];
    // Using string copy to copy current string into a char *
    strcpy(cstr, texture_load[i].c_str());
    // TODO
    TextureContainer texture(LoadTexture(cstr), texture_load[i]);
    textures.push_back(texture);

    delete []cstr;
  }
}