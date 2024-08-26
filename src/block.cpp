#include "block.h"

Block::Block(Vector2 position, int type) {
  this->position = position;
  this->type = type;
  active = true;
}

void Block::draw() {
  if (active) {
    DrawRectangle(position.x, position.y, 3, 3, {243, 216, 63, 255});
    if (type == 2)
      DrawRectangle(position.x, position.y, 3, 3, {43, 216, 163, 255});
  }
}

Rectangle Block::getRect() {
  Rectangle rect;
  rect.x = position.x;
  rect.y = position.y;
  rect.height = 3;
  rect.width = 3;
  return rect;
}

// TODO collision with lasers
