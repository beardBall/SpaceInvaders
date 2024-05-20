#include "game.hpp"

Game::Game()
{
    
    
int map[3][6] ={
    {1,1,1,1,1,1},
    {2,2,2,2,2,2},
    {3,3,3,3,3,3}
} ;

    int rows = sizeof(map) /sizeof(map[0]);
    int cols = sizeof(map[0]) /sizeof(map[0][0]);

    // alien = Alien({20,100}, 1);
    // aliens.push_back(Alien({200,300},1));
    // aliens.push_back(Alien({100,300},2));

    for(int i=0; i< rows; i++ ){
        
        for(int j=0; j < cols; j++)
            {
                std::cout << map[i][j] << ", ";
                aliens.push_back(Alien( {(float) (100 + j * 100),  (float) (100 + i * 80)}, map[i][j]));
                }
        
        std::cout << std::endl;
        }
}

Game::~Game()
{

}


void Game::draw()
{
    spaceship.draw();

    for(auto& laser: spaceship.lasers)
        laser.draw();//hello

    for(auto& alien: aliens)
        alien.draw();//hello
        

    dash.draw();

}

void Game::update()
{
        for(auto& laser: spaceship.lasers)
    laser.update();
    dash.lasterCount = spaceship.lasers.size();
    deleteInactiveLasers();

    for(auto& alien: aliens){
        for(auto& laser:spaceship.lasers){
            // if(laser.getRect().x => alien.getRect().x and laser.getRect().x <= alien.getRect().x )

        }

    }


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
