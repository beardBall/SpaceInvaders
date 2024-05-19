#pragma once
#include "raylib.h"
#include "spaceship.hpp"




class Spaceship {

    public:
         Spaceship();
        ~Spaceship();

        void draw();
        void update();
        void MoveLeft();
        void MoveRight();
        void FireLazer();



        // Vector2 position;
        int size;

        int lives;
        bool canShoot;

    private:
    Texture2D image;
    Vector2 position;




};