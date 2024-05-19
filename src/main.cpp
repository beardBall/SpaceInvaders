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

Texture2D atlas;
Vector2 gridPosition;


int main(){


    init();

    InitWindow(WINDOWWIDTH,WINDOWHEIGHT,"NHEllo small pngXML");
    SetWindowState(FLAG_VSYNC_HINT);
    SetWindowPosition(10,10);
    Game game;
    Laser laser = Laser({100,100},7);
    
    // SetTargetFPS(60);

    while(!WindowShouldClose()){
        game.update();
        game.handleInput();
        laser.update();


        BeginDrawing();
            ClearBackground(grey);
            game.draw();
            laser.draw();
        EndDrawing();
    }

    return 0;
}