#pragma once
#include "alien.hpp"
#include "obstacle.hpp"
#include "raylib.h"
#include "spaceship.hpp"
// #include <iostream>
#include <vector>

class Level {

public:
  //  Level();
  Level(int levelNumber);
  ~Level();
  // void loadLevel(int num);
  int number;

  std::vector<std::vector<int>> map;
	bool isOver;
	double levelEndTime;
  void update();

  void draw();

  void handleInput();
  Music music;
  std::vector<Alien> aliens;
  int score;
  int alienDirection;
  Level *level;
  vars v;
  Spaceship spaceship; //(&v);

  double waveEndTime, waveStartTime;
	Texture2D bg;

private:
  std::vector<Obstacle> obstacles;
  void deleteInactiveLasers();

  void deleteInactiveEnemies();
  void MoveDownAliens(int distance);
  void MoveAliens();
  void checkCollisions();
  std::vector<Obstacle> createObstacles();
  void checkCollision_alien_obstacle();
};
