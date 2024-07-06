#include "level.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

Level::Level() {

  number = 1;
  std::cout << "level created";

  std::ifstream fin(ASSETS_PATH"Levels/1.txt");
  std::vector<std::string> initialLevel;
  std::string line;

  while (std::getline(fin, line)) {
    initialLevel.push_back(line);
        if(line == "enemylist:"){
            std::cout << "enemy list started" << "\n";
        }
        if(line == "endenemylist:"){

            std::cout << "enemy list ended" << "\n";
        }
    std::cout << line << "\n";
  }

}

void update() {}

void draw() { DrawText("Level drawing", 500, 500, 16, RED); }
