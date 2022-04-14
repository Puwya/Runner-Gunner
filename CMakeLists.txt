cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

find_package(SDL2 REQUIRED)
# Going to add SDL2 source files in here still haven't figured it out
include_directories(${SDL2_INCLUDE_DIRS} include/)

project(main)
add_executable(main src/main.cpp src/libs/glad.c src/memory/initSDL.cpp 
               src/memory/deallocation.cpp src/handlers/handleLoop.cpp 
               src/handlers/handleEvents.cpp src/memory/initTextures.cpp
               src/memory/initRect.cpp src/handlers/handleClouds.cpp 
               src/updateRenderer.cpp src/functions/rightSpace.cpp
               src/functions/leftSpace.cpp src/functions/rightMV.cpp
               src/functions/leftMV.cpp src/functions/space.cpp)

target_link_libraries(main ${SDL2_LIBRARIES})