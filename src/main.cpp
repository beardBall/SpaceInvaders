#include <iostream>
#include "z.hpp"
#include "raylib.h"
#include "game.hpp"
// #include <laser.hpp>
#include "alien.hpp"


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
    // init();

    InitWindow(WINDOWWIDTH,WINDOWHEIGHT,"Space Invaders");
    SetWindowState(FLAG_VSYNC_HINT);
    SetWindowPosition(10,10);
        InitAudioDevice();

    Game game;
    // double vm, rss;
    // int type = 1;
    //     std::string textureFile = TextFormat("Graphics/Alien_%d.png",type);
    // textureFile = ASSETS_PATH + textureFile;
    // std::cout << textureFile << std::endl; 
    // // std::cout  << ASSETS_PATH + TextFormat("Graphics/Alien_%d.png",type) << std::endl;
    // textureFile = "/Users/waqara/Desktop/spaceInvaders/assets/Graphics/Alien_1.png";
    // Texture2D alienImage1 = LoadTexture(textureFile.c_str());
    
    // textureFile = "/Users/waqara/Desktop/spaceInvaders/assets/Graphics/Alien_2.png";
    // Texture2D alienImage2 = LoadTexture(textureFile.c_str());
    
    // textureFile = "/Users/waqara/Desktop/spaceInvaders/assets/Graphics/Alien_3.png";
    // Texture2D alienImage3 = LoadTexture(textureFile.c_str());

        // GetTex

int map[3][3] ={
    {1,1,1},
    {2,2,2},
    {3,3,2}
} ;

    int rows = sizeof(map) /sizeof(map[0]);
    int cols = sizeof(map[0]) /sizeof(map[0][0]);
//     std::vector<Alien> aliens;

// // Alien *a;


//     for(int i=0; i< rows; i++ ){
//         for(int j=0; j < cols; j++)
//             {
//                 Alien *a;
//                 a = new Alien({(float) (100 + j * 120),  (float) (100 + i * 80)}, map[i][j]);
//                 a->name = gen_random(4);

//                 aliens.push_back(*a);
//                 // aliens.push_back(new Alien( {(float) (100 + j * 120),  (float) (100 + i * 80)}, map[i][j]));

//                 }        
//         }




    // SetTargetFPS(60);
    while(!WindowShouldClose()){
        game.update();
        game.handleInput();
        // process_mem_usage(vm, rss);

        BeginDrawing();
            ClearBackground(grey);

//  for(auto& alien: aliens){
//         alien.draw();
//         }
        


            // DrawTexture(alienImage1, 150,50,WHITE);
            //  DrawTexture(alienImage2, 350,50,WHITE);
            //   DrawTexture(alienImage3, 600,50,WHITE);

            game.draw();
            // DrawText(TextFormat("VM: %d, rss: %d", vm, rss/1024),510,10,18,BLUE);
        EndDrawing();
        

    }
    CloseWindow();
    CloseAudioDevice();

    return 0;
}