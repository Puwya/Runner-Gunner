#!/bin/bash

cd lib
git clone https://github.com/raysan5/raylib.git
cd raylib/src
make PLATFORM=PLATFORM_DESKTOP
cd src
if [[ "$OSTYPE" =~ ^msys ]]; then
  move libraylib.a ../../
  mkdir ../../../include/raylib
  move raudio.h raylib.h raymath.h rlgl.h ../../../include/raylib
else
  mv libraylib.a ../../
  mkdir ../../../include/raylib
  mv raudio.h raylib.h raymath.h rlgl.h ../../../include/raylib
fi

cd ../../../
mkdir build
cd build;
cmake ..