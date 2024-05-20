#include "alien.hpp"
#include "raylib.h"

Alien::Alien(Vector2 position, int type)
{
    this -> type = type;
    this -> position = position;
    active = true;
    std::string textureFile = TextFormat("Graphics/Alien_%d.png",type);
    textureFile = ASSETS_PATH + textureFile;
    std::cout << textureFile << std::endl; 
    bool lastMoveLeft = false;
        
        alienImage = LoadTexture(textureFile.c_str());

        position.x  = GetScreenWidth() / 2 - alienImage.width/2;
        position.y  = GetScreenHeight() - alienImage.height;
        lastFireTime = 0;
        name = "name10mmmn";
        alienDieSound = LoadSound(ASSETS_PATH"Sounds/explosion.ogg");
}




Alien::~Alien()
{
    // UnloadTexture(alienImage);
    std::cout << "object Alien destructed!";
}

void Alien::draw()
{
    DrawTextureV(alienImage,position,WHITE);
    DrawRectangleLines(position.x, position.y,alienImage.width, alienImage.height,RED);
}

void Alien::update()
{
        if ( GetTime() - lastMoveTime >= 0.95 ){
            
            if(lastMoveLeft){
                MoveRight();
                lastMoveLeft = false;
            }else{
                MoveLeft();
                lastMoveLeft = true;
            }
            
            lastMoveTime = GetTime();            

        }
}

void Alien::MoveLeft()
{
  std::cout << "moving left " << std::endl;
  position.x -= 10;
}

void Alien::MoveRight()
{
    std::cout << "moving right "<< std::endl;
    position.x += 10;
}

// void Alien::FireLaser()
// {
    
//     // if(GetTime() - lastFireTime >= 0.35){
//     //     lasers.push_back(Laser(
//     //         {position.x, position.y}
//     //         ,-6));
//     //         lastFireTime = GetTime();
//     //     }
// }

Texture2D Alien::getImage()
{
    return alienImage;
}

int Alien::getType(){
    return type;
}

Rectangle Alien::getRect(){

    return {
        position.x, 
        position.y, 
        (float)alienImage.width, 
        (float)alienImage.height
        };
}

void Alien::die()
{
    active = false;
    PlaySound(alienDieSound);

}
