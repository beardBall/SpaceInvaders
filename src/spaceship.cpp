#include "spaceship.hpp"
#include "globvars.hpp"
#include "z.hpp"
#include <thread>


// #include "raylib.h"
// #include <iostream>

Spaceship::Spaceship()
{
        image = LoadTexture(ASSETS_PATH "Graphics/spaceship.png");
        position.x = GetScreenWidth() / 2 - image.width / 2;
        position.y = GetScreenHeight() - image.height;
        lastFireTime = 0;
        laserSound = LoadSound(ASSETS_PATH "Sounds/laser.ogg");
        dieSound = LoadSound(ASSETS_PATH "Sounds/8bit_bomb_explosion.wav");

        lives = 5;
        deathTime = 0;
        // std::cout << "score: " << &game->score << std::endl;
        // SetSoundVolume(laserSound,0.91f);
}

Spaceship::~Spaceship()
{
        UnloadTexture(image);
}

void Spaceship::draw()
{
        double d = z::getTimeMS();

        if (invincible)
        {
                DrawTextureV(image, position, GRAY);
                DrawText ("Invincible", 20,500,36,WHITE);

                if (std::fmod(d, 100) == 0)
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
	if(invincible){
        	if (deathTime > 0 && (z::getTimeMS() - deathTime) > 2000){
                	invincible = false;
                	deathTime = 0;
        	}
	}

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
        // std::this_thread::sleep_for(std::chrono::milliseconds(4000));
        // std::this_thread::sleep_for(std::chrono::milliseconds(4000));
        // std::cout <<"after 8000 milliseconds"<< z::getTimeMS() - deathTime;
        // printf("hi");
        PlaySound(dieSound);
}
