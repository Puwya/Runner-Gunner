#!/bin/bash

cd lib
git clone https://github.com/raysan5/raylib.git
cd raylib/src
make
cd src
mv libraylib.a ../../
mkdir ../../../include/raylib
mv raudio.h raylib.h raymath.h rlgl.h ../../../include/raylib

cd ../../../
mkdir build
cd build;
cmake ..