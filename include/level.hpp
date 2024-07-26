#pragma once
#include "raylib.h"
//#include <iostream>
#include <vector>

class Level {

public:
  Level();
  //~Level();

  int number;

  std::vector<std::vector<int>> map;

  void update();

  void draw();

private:
};
