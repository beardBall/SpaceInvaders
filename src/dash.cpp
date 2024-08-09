#include "dash.hpp"
#include <iostream>
#include <globvars.hpp>
// #include "raylib.h"
// #include "globvars.hpp"
//dasds
Dash::Dash()
{
    active = true;
}

Dash::~Dash(){}

void Dash::draw(){
   DrawText(
    TextFormat("Laser count: %d",lasterCount), 
    10,10,14,
     WHITE);

    DrawText(
    TextFormat("Lives: %d",lives), 
    80,40,14,
     WHITE);

     DrawText(
    TextFormat("Aliens: %d",alienCount), 
    130,80,14,
     WHITE);

     DrawText(
    TextFormat("Spaceship x,y: %d,%d",position.x, position.y), 
    30,180,14,
     WHITE);


        z::raylib::DrawText2("Waqar",50,300,24, YELLOW);

    // DrawText(
    // TextFormat("Max alien lasers: %d",globVars::maxAlienLasers), 
    // 160,180,14,
    //  WHITE);
    //    DrawText(
    // TextFormat("Enemies remaining: %d",globVars::aliensRemaining), 
    // 100,10,14,
    //  WHITE);

}


void Dash::update(){}
