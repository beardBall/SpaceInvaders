#pragma once
#include "raylib.h"
#include "spaceship.hpp"
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
        void FireLazer();

        std::vector<Laser> lasers;
        // Laser laser;



        // Vector2 position;
        int size;

        int lives;
        bool canShoot;

    private:
    Texture2D image;
    Vector2 position;




};