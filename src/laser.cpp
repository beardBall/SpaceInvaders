#include "laser.hpp"
#include <iostream>

Laser::Laser(Vector2 position, int speed, int type)
{
    this -> position = position;
    this -> speed = speed;
    this -> type = type;
    active = true;
}



void Laser::draw(){
    if(active){
        // DrawRectangle(position.x, position.y, 4,15, RED);
        if(type > 10)
        DrawRectangle(position.x, position.y, 4,10, BLUE);
        else
        DrawRectangle(position.x, position.y, 4,15, RED);
}
}

void Laser::update(){
    // position.y +=speed;


    if(active){

    if(type > 10)
        position.y -= speed;
    else
        position.y += speed;


        if(position.y > GetScreenHeight() || position.y < 0){
            active = false;
            // std::cout << "Laser inactive";
        }
    }   
}


Rectangle Laser::getRect(){
    return {position.x, position.y, 4,15};
}