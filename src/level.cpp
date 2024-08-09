#include "level.hpp"
#include "z.hpp"
#include <__format/format_functions.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

Level::Level(int levelNumber) {

  // number = 1;
  this->number = levelNumber;
  isOver = false;
  if(loadLevel(number) == false){
LOG("Failed to load level");
			
};

  // Load the enemies based on the map
  std::cout << "\n\nprinting map\n\n";
  for (int i = 0; i < map.size(); i++) {
    for (int j = 0; j < map[1].size(); j++) {
      // std::cout << map[i][j] << " ";
      aliens.push_back(
          Alien({(float)(100 + j * 100), (float)(100 + i * 60)}, map[i][j]));
    }
    std::cout << "\n";
  }

  obstacles = createObstacles();
  bg = LoadTexture(ASSETS_PATH "Graphics/background.png");
  alienDirection = 1;
}

bool Level::loadLevel(int levelNum) {

  this->number = levelNum;
  isOver = false;
  std::ifstream fin(std::format(ASSETS_PATH "Levels/{}.txt", number));
  std::vector<std::string> initialLevel;
  std::string line;

  std::vector<std::vector<int>> vec;

  bool isStarted, isEnded;
  isStarted = false;
  isEnded = false;

  int rows = 0;
  int rows_map = 0;
  int start_row = 0;
  int end_row = 0;

  // while (std::getline(fin, line)){
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
      // std::cout << "end row: " << rows << "\n";
      isEnded = true;
      end_row = rows - 0;
    }
    // std::cout << "rows: " << rows <<", start_row: " << start_row << ",
    // end_row: " << end_row << std::endl;

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
          // std::cout << c << " ";
          thisrow.push_back((int)c - '0');
        }
      }
      // std::cout << "\n";
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
  this->map = vec;
  return true;
}

void Level::draw() {

  DrawTexture(bg, 0, 0, WHITE);
  DrawText("Level drawing", 500, 500, 16, RED);
  spaceship.draw();

  for (auto &laser : spaceship.lasers)
    laser.draw(); // hello

  for (auto &alien : aliens) {
    if (alien.active) {
      alien.draw(); // hello
      for (auto &laser : alien.lasers)
        laser.draw();
    }
  }

  for (auto &obstacle : obstacles)
    obstacle.draw();

  DrawText(TextFormat("Enemies left: %d", aliens.size()), 400, 40, 18, YELLOW);

  if (aliens.size() < 1) {
    DrawText("Level complete!", 200, 200, 24, WHITE);
    DrawText("Level complete!", 210, 210, 24, BLACK);
  }
}

void Level::checkCollision_alien_obstacle() {
  for (auto &alien : aliens) {
    for (auto &obstacle : obstacles) {
      for (auto &block : obstacle.blocks) {
        if (CheckCollisionRecs(block.getRect(), alien.getRect())) {
          block.active = false;
          obstacle.active = false;
          alien.active = false;
        }
      }
    }
  }
}

void Level::checkCollisions() {
  // Player laser and Aliens
  for (auto &alien : aliens) {
    for (auto &laser : spaceship.lasers) {
      if (CheckCollisionRecs(alien.getRect(), laser.getRect())) {
        alien.die();
        laser.active = false;
        score++;
      }

      for (auto &obstacle : obstacles) {
        for (auto &block : obstacle.blocks)
          if (block.active) {
            if (CheckCollisionRecs(block.getRect(), laser.getRect())) {
              block.active = false;
              laser.active = false;
            }
          }
      }
    }
    for (auto &laser : alien.lasers) {
      if (!spaceship.invincible) {
        if (laser.active)
          if (CheckCollisionRecs(spaceship.getRect(), laser.getRect())) {
            spaceship.die();
            laser.active = false;
          }
      }

      for (auto &obstacle : obstacles) {
        for (auto &block : obstacle.blocks)
          if (block.active) {
            if (CheckCollisionRecs(block.getRect(), laser.getRect())) {
              block.active = false;
              laser.active = false;
            }
          }
      }
    }

    if (CheckCollisionRecs(spaceship.getRect(), alien.getRect())) {
      spaceship.die();
    }

    // Aliens and Obstacles
    for (auto &obstacle : obstacles) {
      // if (CheckCollisionRecs(obstacle.getRect(), laser.getRect()))
      // {
      //     // alien.die();
      //     // laser.active = false;
      //     // score++;
      // }
    }
  }
}

void Level::update() {
  handleInput();
  spaceship.update();
  // MoveAliens();

  for (auto &laser : spaceship.lasers)
    laser.update();

  for (auto &alien : aliens) {
    alien.update();

    alien.FireLaser();
    for (auto &laser : alien.lasers)
      laser.update();
  }

  // dash.lasterCount = spaceship.lasers.size();
  // dash.alienCount = aliens.size();
  // dash.lives = spaceship.lives;
  // dash.position = spaceship.position;

  checkCollisions();
  checkCollision_alien_obstacle();
  deleteInactiveLasers();
  deleteInactiveEnemies();

  if (aliens.size() == 0 && !isOver) {
    isOver = true;
    levelEndTime = GetTime();

    waveEndTime =
        (double)std::chrono::steady_clock().now().time_since_epoch().count();
  }
}

void Level::handleInput() {
  if (IsKeyDown(KEY_LEFT))
    spaceship.MoveLeft();

  if (IsKeyDown(KEY_RIGHT))
    spaceship.MoveRight();

  if (IsKeyDown(KEY_SPACE)) {

    spaceship.FireLaser();
  }

  if (IsKeyDown(KEY_P)) {
    std::cout << "pausing....\n";
  }
}

void Level::deleteInactiveLasers() {

  for (auto it = spaceship.lasers.begin(); it != spaceship.lasers.end();) {
    if (!it->active) {
      it = spaceship.lasers.erase(it);
    } else {
      ++it;
    }
  }
  for (auto &alien : aliens) {
    for (auto it = alien.lasers.begin(); it != alien.lasers.end();) {
      if (!it->active) {
        it = alien.lasers.erase(it);
      } else {
        ++it;
      }
    }
  }
}

void Level::deleteInactiveEnemies() {
  for (auto al = aliens.begin(); al != aliens.end();) {
    if (!al->active) {
      al = aliens.erase(al);
    } else {
      ++al;
    }
  }

  // globVars::aliensRemaining = aliens.size();
}

void Level::MoveAliens() {
  // LOG("moving aliens");
  for (auto &alien : aliens) {

    if (alien.position.x + alien.alienImage.width > GetScreenWidth() - 25) {
      alienDirection = -1;
      MoveDownAliens(24 * alien.level);
    }

    if (alien.position.x < 25) {
      alienDirection = 1;
      MoveDownAliens(24 * alien.level);
    }

    // alien.update(alienDirection);
  }
}

void Level::MoveDownAliens(int distance) {
  for (auto &alien : aliens) {
    alien.position.y += distance;
  }
}

std::vector<Obstacle> Level::createObstacles() {
  int obstacleWidth = Obstacle::grid[0].size() * 3;
  float gap = (GetScreenWidth() - (4 * obstacleWidth)) / 5;

  for (int i = 0; i < 4; i++) {
    float offsetX = (i + 1) * gap + i * obstacleWidth;
    obstacles.push_back(Obstacle({offsetX, float(GetScreenHeight() - 200)}));
  }
  return obstacles;
}
