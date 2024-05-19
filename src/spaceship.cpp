#include "spaceship.hpp"
#include "raylib.h"

Spaceship::Spaceship()
{
        image = LoadTexture(ASSETS_PATH"Graphics/spaceship.png");
        position.x  = GetScreenWidth() / 2 - image.width/2;
        position.y  = GetScreenHeight() - image.height;

        // position = (Vector2){
        //      GetScreenWidth() / 2,
        // 100.0f};
}

Spaceship::~Spaceship()
{
    UnloadTexture(image);
}

void Spaceship::draw()
{
    DrawTextureV(image,position,WHITE);
}

void Spaceship::update()
{
}

void Spaceship::MoveLeft()
{
    position.x -=7;
    if(position.x < 0)
        position.x = 0;
}

void Spaceship::MoveRight()
{
    position.x +=7;
    if(position.x > (GetScreenWidth() - image.width))
        position.x = GetScreenWidth() - image.width;
}

void Spaceship::FireLazer()
{
}
