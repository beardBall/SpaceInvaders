#include <iostream>
#include "z.hpp"
#include "raylib.h"
#include "game.hpp"
#include <laser.hpp>


#define WINDOWWIDTH  750
#define WINDOWHEIGHT 750
Color grey = {29,29,27,255};

void init(){
    std::cout << __cplusplus << std::endl;
    std::cout << "hello" << std::endl;
    std::cout << giveme_five() << std::endl;
}

// Texture2D atlas;
Vector2 gridPosition;


int main(){
    init();

    InitWindow(WINDOWWIDTH,WINDOWHEIGHT,"Space Invaders!!!");
    SetWindowState(FLAG_VSYNC_HINT);
    SetWindowPosition(10,10);
    Game game;
    double vm, rss;
   

    // SetTargetFPS(60);
    while(!WindowShouldClose()){
        game.update();
        game.handleInput();
        process_mem_usage(vm, rss);

        BeginDrawing();
            ClearBackground(grey);
            game.draw();
            DrawText(TextFormat("VM: %d, rss: %d", vm, rss),10,20,14,BLUE);
        EndDrawing();
        

    }

    return 0;
}