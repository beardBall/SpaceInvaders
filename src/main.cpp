#include "game.hpp"
#include "alien.hpp"
#include "obstacle.hpp"
#include "raylib.h"
#include "z.hpp"
#include <iostream>

#define WINDOWWIDTH 750
#define WINDOWHEIGHT 750
Color grey = {29, 29, 27, 255};
//TODO
void init() {
  // std::cout << NAMEE << std::endl;
  std::cout << __cplusplus << std::endl;
  std::cout << "hello...." << std::endl;
  std::cout << giveme_five() << std::endl; 
}

// Texture2D atlas;
Vector2 gridPosition;

int main() {
  init();

  InitWindow(WINDOWWIDTH, WINDOWHEIGHT, "SpashInvaders124!!!!");
  SetWindowState(FLAG_VSYNC_HINT);
  SetWindowPosition(10, 10);
  InitAudioDevice();
  Sound alienDieSound;
  alienDieSound = LoadSound(ASSETS_PATH"Sounds/explosion08.wav");
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
    if(IsKeyDown(KEY_A)){
      std::cout<< "playing sound"<< std::endl;
      PlaySound(alienDieSound);
            PlaySound(alienDieSound);

    }
    EndDrawing();
  }
  CloseWindow();
  UnloadSound(alienDieSound);
  CloseAudioDevice();

  return 0;
}
