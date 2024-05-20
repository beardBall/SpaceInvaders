#pragma once
#include "raylib.h"
#include "laser.hpp"
#include <iostream>
#include <vector>

class Spaceship {
    public:
         Spaceship();
        ~Spaceship();

        void draw();
        void update();
        void MoveLeft();
        void MoveRight();
        void FireLaser();

        std::vector<Laser> lasers;
        Sound laserSound;

        int size;
        int lives;
        bool canShoot;

    private:
    Texture2D image;
    Vector2 position;
    double lastFireTime;

};