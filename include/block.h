#pragma once
#include "raylib.h"

class Block{
    public:
        Block(Vector2 position, int type);
        // ~Block();
        void draw();
        Rectangle getRect();
        bool active;
	int type;
    private:
        Vector2 position;

};
