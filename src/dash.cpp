#include "dash.hpp"
#include <iostream>
// #include "raylib.h"

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
}


void Dash::update(){}