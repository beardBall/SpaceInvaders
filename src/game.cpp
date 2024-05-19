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
    laser.draw();//hello
    dash.draw();

}

void Game::update()
{
        for(auto& laser: spaceship.lasers)
    laser.update();
    dash.lasterCount = spaceship.lasers.size();
    deleteInactiveLasers();
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

void Game::deleteInactiveLasers()
{

    for(auto it = spaceship.lasers.begin(); it != spaceship.lasers.end();){
        if(!it -> active){
            it = spaceship.lasers.erase(it);
}else{
++it;

}
    }
}
