#pragma once
#include "raylib.h"


class Laser{

    public: 
        Laser(Vector2 position, int speed, int type);
        void update();
        void draw();
        Rectangle getRect();
        bool active;
        int type; // 0 - 10 player; 11 - 20 enemy

    private:
        Vector2 position;
        int speed;

};