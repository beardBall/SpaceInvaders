// #pragma once
#include "game.hpp"
// #include "alien.hpp"
// #include "obstacle.hpp"
#include "level.hpp"
#include "raylib.h"
#include "z.hpp"
#include <iostream>

// ggg
// inti game;

int gmaxlasers;

#define WINDOWWIDTH 750
#define WINDOWHEIGHT 750
#define GLSL_VERSION 330

Color grey = {29, 29, 27, 255};
// TODO
void init() {
  gmaxlasers = 10;
  // std::cout << NAMEE << std::endl;
  std::cout << __cplusplus << std::endl;
  std::cout << "hello...." << std::endl;
  std::cout << z::giveme_five() << std::endl;
}

// Texture2D atlas;
Vector2 gridPosition;

#ifndef ASSETS_PATH
#define ASSETS_PATH "/Users/waqar/Desktop/spaceInvaders/assets/"
#endif

int main() {

  // Level lvl;

  // return 0;

  init();

  InitWindow(WINDOWWIDTH, WINDOWHEIGHT, "SpashInvaders124!!!!");
  SetWindowState(FLAG_VSYNC_HINT);
  SetWindowPosition(10, 10);
  InitAudioDevice();
  Sound alienDieSound;
  alienDieSound = LoadSound(ASSETS_PATH "Sounds/explosion08.wav");
  Game game;
  // std::string shaderName = "scanlines.fs";
  // shaderName = str(ASSETS_PATH) + "Shaders/" + shaderName;

  Shader shader = LoadShader(
      0, TextFormat(ASSETS_PATH "Shaders/scanlines.fs", GLSL_VERSION));
  Shader shader_bloom = LoadShader(0, ASSETS_PATH "Shaders/bloom.fs");
  // shaders[FX_GRAYSCALE] = LoadShader(
  //   0, TextFormat("resources/shaders/glsl%i/grayscale.fs",
  //   GLSL_VERSION));

  int map[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 2}};

  int rows = sizeof(map) / sizeof(map[0]);
  int cols = sizeof(map[0]) / sizeof(map[0][0]);

  // SetTargetFPS(60);
  while (!WindowShouldClose()) {
    // game.handleInput();
    game.update();

    // process_mem_usage(vm, rss);

    BeginDrawing();
    ClearBackground(grey);
    BeginShaderMode(shader);
    game.draw();

    if (IsKeyDown(KEY_A)) {
      std::cout << "playing sound" << std::endl;
      PlaySound(alienDieSound);
      PlaySound(alienDieSound);
    }
    EndShaderMode();
    EndDrawing();
  }

  CloseWindow();
  UnloadSound(alienDieSound);
  CloseAudioDevice();

  return 0;
}
