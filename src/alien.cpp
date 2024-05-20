#include "alien.hpp"
#include "raylib.h"

Alien::Alien(){

}

Alien::Alien(Vector2 position, int type)
{
    this -> type = type;
    this -> position = position;
    std::string textureFile;
    textureFile = TextFormat("Graphics/Alien_%d.png",type);
    textureFile = ASSETS_PATH + textureFile;
    std::cout << textureFile << std::endl; 
    // std::cout  << ASSETS_PATH + TextFormat("Graphics/Alien_%d.png",type) << std::endl;
    // textureFile = "/Users/waqara/Desktop/spaceInvaders/assets/Graphics/Alien_1.png";
        
        alienImage = LoadTexture(textureFile.c_str());

        position.x  = GetScreenWidth() / 2 - alienImage.width/2;
        position.y  = GetScreenHeight() - alienImage.height;
        lastFireTime = 0;
        // laser = Laser({position.x,position.y-20},7);
        // position = (Vector2){
        //      GetScreenWidth() / 2,
        // 100.0f};
}

Alien::~Alien()
{
    UnloadTexture(alienImage);
}

void Alien::draw()
{
    DrawTextureV(alienImage,position,WHITE);
    // laser.draw();
}

void Alien::update()
{
        // laser.update();
}

void Alien::MoveLeft()
{
    position.x -=7;
    if(position.x < 0)
        position.x = 0;
}

void Alien::MoveRight()
{
    position.x +=7;
    if(position.x > (GetScreenWidth() - alienImage.width))
        position.x = GetScreenWidth() - alienImage.width;
}

void Alien::FireLaser()
{
    
    // if(GetTime() - lastFireTime >= 0.35){
    //     lasers.push_back(Laser(
    //         {position.x, position.y}
    //         ,-6));
    //         lastFireTime = GetTime();
    //     }
}
