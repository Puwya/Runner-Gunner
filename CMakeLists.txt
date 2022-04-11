cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} include/)

project(main)
add_executable(main src/main.cpp src/glad.c src/initSDL.cpp src/deallocation.cpp 
               src/gameLoop.cpp src/handleEvents.cpp src/initTextures.cpp
               src/initRect.cpp src/handleClouds.cpp src/updateRenderer.cpp)

target_link_libraries(main ${SDL2_LIBRARIES})