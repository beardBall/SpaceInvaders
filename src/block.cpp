#include "block.h"

Block::Block(Vector2 position)
{
    this -> position = position;
}


void Block::draw(){
    DrawRectangle(position.x, position.y,3,3,{243,216,63,255});
}

Rectangle Block::getRect(){
    Rectangle rect;
    rect.x = position.x;
    rect.y = position.y;
    rect.height = 3;
    rect.width=3;
    return rect; 

}