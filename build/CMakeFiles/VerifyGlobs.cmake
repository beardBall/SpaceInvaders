# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.28
cmake_policy(SET CMP0009 NEW)

# PROJECT_SOURCES at CMakeLists.txt:8 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/Users/waqara/Desktop/spaceInvaders/src/*.cpp")
set(OLD_GLOB
  "/Users/waqara/Desktop/spaceInvaders/src/alien.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/block.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/dash.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/game.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/laser.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/main.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/obstacle.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/player.cpp"
  "/Users/waqara/Desktop/spaceInvaders/src/spaceship.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/waqara/Desktop/spaceInvaders/build/CMakeFiles/cmake.verify_globs")
endif()
