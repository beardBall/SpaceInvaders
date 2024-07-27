#include "level.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

Level::Level(int levelNumber) {

  //number = 1;
	this->number = levelNumber;
  // std::cout << "Level created here\n";
  std::ifstream fin(ASSETS_PATH "Levels/1.txt");
  std::vector<std::string> initialLevel;
  std::string line;

  std::vector<std::vector<int>> vec;

  bool isStarted, isEnded;
  isStarted = false;
  isEnded = false;

  int rows = 0;
  int rows_map = 0;
  int start_row=0;
  int end_row=0;

//while (std::getline(fin, line)){
//
//	}

  while (std::getline(fin, line)) {
    rows++;
    initialLevel.push_back(line);

    if (line == "enemylist:") {
      isStarted = true;
      std::cout << "start row: " << rows << "\n";
      start_row = rows + 0;
      // std::cout << "enemy list started" << "\n";
      std::getline(fin, line);
    }

    if (line == "endenemylist:") {

      // std::cout << "enemy list ended" << "\n";
      //std::cout << "end row: " << rows << "\n";
      isEnded = true;
      end_row = rows -0;
    }
		//std::cout << "rows: " << rows <<", start_row: " << start_row << ", end_row: " << end_row << std::endl;

    if (isStarted && !isEnded) {
      rows_map++;
      std::cout << "\nProcesssing row: " << rows << std::endl;
      std::vector<int> thisrow;
      
	for (char &c : line) {
        // std::cout << (int)c - '0'<< " ";

        if (c == ',') {
        }
        // std::cout << c << " ";
        else {
          // vec()
          //std::cout << c << " ";
          thisrow.push_back((int)c - '0');
        }
      }
	//std::cout << "\n";
      vec.push_back(thisrow);
      thisrow.clear();
    }

//    isStarted = true;
  }
  std::cout << "\n";
  std::cout << "rows in file: " << rows << "\n";
  std::cout << "rows for vec: " << rows_map << "\n";
  std::cout << "\n\n vec size: " << vec.size();
  // return;
  std::cout << "\n vec[1] size: " << vec[1].size();
  // return;
  std::cout << "\n\n\nprinting the map:" << std::endl;

  for (int i = 0; i < vec.size(); i++) {
    for (int j = 0; j < vec[1].size(); j++) {
      std::cout << vec[i][j] << " ";
    }
    std::cout << "\n";
  }

  // for(vec()){

  //}

  	map = vec;
}

void update() {}

void Level::draw() { DrawText("Level drawing", 500, 500, 16, RED); }
