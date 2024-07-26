#include "player.h"
#include "raylib.h"
#include <iostream>



void Player::player(){

    lives = 3;
    position.x = 300;
    position.y = 100;
    size = 24;
    std::cout << GRAVITY << std::endl;



}

void Player::draw(){
    DrawText("P",position.x,position.y,size,BLUE);

    DrawCircle3D(
    (Vector3){10,10,10}, 3.0, 
    (Vector3){0,0,0}, 0.0, RED);


}


void Player::update(){

    if(IsKeyPressed(KEY_LEFT))


        position.x--;
    if(IsKeyPressed(KEY_RIGHT))
        position.x++;
    if(IsKeyPressed(KEY_UP))
        position.y--;
    if(IsKeyPressed(KEY_DOWN))
        position.y++;
    if(IsKeyPressed(KEY_SPACE))
            position.y++;


}
