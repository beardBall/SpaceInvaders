#pragma once
#include "raylib.h"




class Player {

    public:
        void player();
        // void ~player();
        void draw();
        void update();

        Vector2 position;
        int size;

        int lives;
        bool canShoot;

    private:




};