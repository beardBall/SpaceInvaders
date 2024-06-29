#pragma once

#include "raylib.h"
#include "laser.hpp"
#include "globvars.hpp"
#include <iostream>
#include <vector>
#include "z.hpp"

class Spaceship {
    public:
         Spaceship();
        ~Spaceship();
        void draw();
        void update();
        void MoveLeft();
        void MoveRight();
        void FireLaser();

        Rectangle getRect();

        void die();

        std::vector<Laser> lasers;
        Sound laserSound;
        Sound dieSound;

        int size;
        int lives;
        bool canShoot;
        bool invincible;
        long deathTime;
	Vector2 position;

    private:
        Texture2D image;
      //  Vector2 position;
        double lastFireTime;

};
