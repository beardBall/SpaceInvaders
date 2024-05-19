#include "game.hpp"

Game::Game()
{
    
}

Game::~Game()
{
}


void Game::draw()
{
    spaceship.draw();
    
    for(auto& laser: spaceship.lasers)
    laser.draw();
    dash.draw();

}

void Game::update()
{
        for(auto& laser: spaceship.lasers)
    laser.update();
    dash.lasterCount = spaceship.lasers.size();
}

void Game::handleInput()
{
    if(IsKeyDown(KEY_LEFT))
        spaceship.MoveLeft();

    if(IsKeyDown(KEY_RIGHT))
        spaceship.MoveRight();

    if(IsKeyDown(KEY_SPACE)){

        spaceship.FireLaser();
    }
}

