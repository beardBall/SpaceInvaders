#include "alien.hpp"
#include "game.hpp"
#include "obstacle.hpp"
#include "raylib.h"
#include "z.hpp"
#include <iostream>

#define WINDOWWIDTH 750
#define WINDOWHEIGHT 750
Color grey = {29, 29, 27, 255};
//TODO
void init() {
  std::cout << __cplusplus << std::endl;
  std::cout << "hello...." << std::endl;
  std::cout << giveme_five() << std::endl;
}

// Texture2D atlas;
Vector2 gridPosition;

int main() {
  init();

  InitWindow(WINDOWWIDTH, WINDOWHEIGHT, "SpashInvaders!!!!");
  SetWindowState(FLAG_VSYNC_HINT);
  SetWindowPosition(10, 10);
  InitAudioDevice();

  Game game;

  int map[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 2}};

  int rows = sizeof(map) / sizeof(map[0]);
  int cols = sizeof(map[0]) / sizeof(map[0][0]);

  // SetTargetFPS(60);
  while (!WindowShouldClose()) {
    game.update();
    game.handleInput();
    // process_mem_usage(vm, rss);

    BeginDrawing();
    ClearBackground(grey);
    game.draw();
    EndDrawing();
  }
  CloseWindow();
  CloseAudioDevice();

  return 0;
}
