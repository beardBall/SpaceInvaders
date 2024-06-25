#include "spaceship.hpp"
#include "globvars.hpp"
#include "z.hpp"

// #include "raylib.h"
// #include <iostream>

Spaceship::Spaceship()
{
        image = LoadTexture(ASSETS_PATH "Graphics/spaceship.png");
        position.x = GetScreenWidth() / 2 - image.width / 2;
        position.y = GetScreenHeight() - image.height;
        lastFireTime = 0;
        laserSound = LoadSound(ASSETS_PATH "Sounds/laser.ogg");
        lives = 3;
        // std::cout << "score: " << &game->score << std::endl;
        // SetSoundVolume(laserSound,0.91f);
}

Spaceship::~Spaceship()
{
        UnloadTexture(image);
}

void Spaceship::draw()
{
        int d = z::getTimeMS();

        if (invincible)
        {
                if (std::fmod(d, 10) == 0)
                {
                        DrawTextureV(image, position, BLUE);
                }
        }
        else
        {
                DrawTextureV(image, position, WHITE);
                // laser.draw();
        }
}

void Spaceship::update()
{
        // laser.update();

        if (z::getTimeMS() - deathTime > 2000)
                invincible = false;
}

void Spaceship::MoveLeft()
{
        position.x -= 7;
        if (position.x < 0)
                position.x = 0;
}

void Spaceship::MoveRight()
{
        position.x += 7;
        if (position.x > (GetScreenWidth() - image.width))
                position.x = GetScreenWidth() - image.width;
}

void Spaceship::FireLaser()
{

        if (GetTime() - lastFireTime >= 0.35)
        {
                lasers.push_back(
                    Laser(
                        {position.x + image.width / 2, position.y + 1},
                        -6,
                        0));
                lastFireTime = GetTime();
                PlaySound(laserSound);
        }
}

Rectangle Spaceship::getRect()
{

        return {
            position.x,
            position.y,
            (float)image.width,
            (float)image.height};
}

void Spaceship::die()
{
        lives--;
        deathTime = z::getTimeMS();
        invincible = true;
}