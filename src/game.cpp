#include "game.hpp"
#include "level.hpp"
#include <chrono>
#include <singleton.hpp>

// hhhhs
Game::Game() {
  // Singleton s();

  // s->maxNum =4;

  v.lives = 9;

  level = new Level(1);
  // globVars::maxAlienLasers = 7;
}

Game::~Game() { std::cout << "Game destroyed!  \n"; }

void Game::draw() {
  level->draw();
  dash.draw();
}




void Game::update() { level->update();


if(level->isOver)
		if(GetTime() - level->levelEndTime >= 3){
	level = new Level(2);

		}
}

void Game::handleInput() {
  if (IsKeyDown(KEY_Q))
    std::cout << "quit!!" << std::endl;

  level->handleInput();
}
