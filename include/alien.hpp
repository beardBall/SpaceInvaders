#pragma once
#include "raylib.h"
#include <iostream>
#include <vector>
#include "laser.hpp"

class Alien {

    public:
         Alien(Vector2 position, int type);
        Alien();
        ~Alien();

        void draw();
        void update();
        void MoveLeft();
        void MoveRight();
        void FireLaser();

        // std::vector<Laser> lasers;
        // Laser laser;
        // Vector2 position;
        int size;
        bool active;
        bool canShoot;

        std::vector<Laser> lasers;
        Sound laserSound;

        Texture2D getImage();
        std::string name;
        Rectangle getRect();
        void die();
        Sound alienDieSound;


       int getType();
           Vector2 position;
               Texture2D alienImage;



    private:
    int type;
    double lastFireTime;
    double lastMoveTime;
    bool lastMoveLeft;




};