#include "game.hpp"

Game::Game()
{
    
}

Game::~Game()
{
}


void Game::draw()
{
    spacehip.draw();
}

void Game::update()
{
}

void Game::handleInput()
{
    if(IsKeyDown(KEY_LEFT))
        spacehip.MoveLeft();

    if(IsKeyDown(KEY_RIGHT))
        spacehip.MoveRight();

}
