#pragma once
#include "raylib.h"

class Block{
    public:
        Block(Vector2 position);
        // ~Block();
        void draw();
        Rectangle getRect();
    private:
        Vector2 position;

};