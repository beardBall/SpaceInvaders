#include "alien.hpp"
#include "raylib.h"

Alien::Alien(Vector2 position, int type)
{
    this -> type = type;
    this -> position = position;
    active = true;
    laserSound = LoadSound(ASSETS_PATH"Sounds/alienLaser.ogg");

    std::string textureFile = TextFormat("Graphics/Alien_%d.png",type);
    if(type == 4){
            std::string textureFile = "Graphics/daddy.png";

    }
    textureFile = ASSETS_PATH + textureFile;
    std::cout << textureFile << std::endl; 
    bool lastMoveLeft = false;
    if((bool)GetRandomValue(0,1)){
        lastMoveLeft = true;
    }
        
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

void Alien::update(int alienDirection)
{

        if ( GetTime() - lastMoveTime >= 0.95 ){
            
            position.x += alienDirection* 10;
            // if(lastMoveLeft){
            //     MoveRight();
            //     lastMoveLeft = false;
            //     lastMoveTime = GetTime();    
            // }else{
            //     MoveLeft();
            //     lastMoveLeft = true;
            //     lastMoveTime = GetTime();    
            // }
            
        

        }
}

void Alien::MoveLeft()
{
//   std::cout << "moving left " << std::endl;
  position.x -= 4;
}

void Alien::MoveRight()
{
    // std::cout << "moving right "<< std::endl;
    position.x += 4;
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

void Alien::FireLaser()
{
  if(GetTime() - lastFireTime >= 0.75){
        lasers.push_back(Laser(
            {position.x + alienImage.width/2, position.y-1}
            ,-2,12));
            lastFireTime = GetTime();
            PlaySound(laserSound);
        }
}

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
