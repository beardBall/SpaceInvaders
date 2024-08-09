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

void Game::update() {
  level->update();

  if (level->isOver) {
		double secondsAfter = GetTime() - level->levelEndTime;
	
		if(secondsAfter > 1){DrawText("Well done!", 400,400,16,WHITE);}
		if(secondsAfter > 3){DrawText("Get Ready!", 400,450,16,WHITE);}
		
    if (GetTime() - level->levelEndTime >= 5) {
      level = new Level( level->number+1);
    }
  }
}

void Game::handleInput() {
  if (IsKeyDown(KEY_Q))
    std::cout << "quit!!" << std::endl;

  level->handleInput();
}
