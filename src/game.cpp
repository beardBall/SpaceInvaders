#include "game.hpp"
// #include "globvars.hpp"

Game::Game()
{
    obstacles = createObstacles();
    alienDirection = 1;

// globVars::maxAlienLasers = 7;
    int map[2][4] = {
        {4, 1, 3, 1},
        {2, 4, 2, 2}
        };

    int rows = sizeof(map) / sizeof(map[0]);
    int cols = sizeof(map[0]) / sizeof(map[0][0]);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << map[i][j] << ", ";
            aliens.push_back(Alien({(float)(100 + j * 100), (float)(100 + i * 60)}, map[i][j]));
            
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

    for (auto &laser : spaceship.lasers)
        laser.draw(); // hello

    for (auto &alien : aliens)
    {
        if (alien.active){
            alien.draw(); // hello
            for(auto &laser: alien.lasers)
            laser.draw();}
    }

    for(auto& obstacle:obstacles)
        obstacle.draw();

    dash.draw();
    DrawText(TextFormat("Enemies left: %d", aliens.size()), 400,40,18, YELLOW);
}




void Game::checkCollisions(){
    //Player laser and Aliens
    for (auto &alien : aliens)
    {
        for (auto &laser : spaceship.lasers)
        {
            if (CheckCollisionRecs(alien.getRect(), laser.getRect()))
            {
                alien.die();
                laser.active = false;
                score++;
            }

            for(auto &obstacle: obstacles){
                for(auto &block: obstacle.blocks)
                    if(block.active)
                    {
                        if(CheckCollisionRecs(
                        block.getRect(),laser.getRect())
                        ){
                            block.active = false;
                            laser.active = false;
                    }
                }

            }
        }
        for(auto &laser: alien.lasers){
            if( CheckCollisionRecs(
                spaceship.getRect(),laser.getRect())){
                    spaceship.die();
                    laser.active = false;

                }

            for(auto &obstacle: obstacles){
                for(auto &block: obstacle.blocks)
                    if(block.active)
                    {
                        if(CheckCollisionRecs(
                        block.getRect(),laser.getRect())
                        ){
                            block.active = false;
                            laser.active = false;
                    }
                }

            }

        }

        if(CheckCollisionRecs(spaceship.getRect(), alien.getRect())){
            spaceship.die();
        }


        //Aliens and Obstacles
        for(auto& obstacle: obstacles){
            // if (CheckCollisionRecs(obstacle.getRect(), laser.getRect()))
            // {
            //     // alien.die();
            //     // laser.active = false;
            //     // score++;
            // }
        }
    }


}

void Game::update()
{
    MoveAliens();
    spaceship.update();

    for (auto &laser : spaceship.lasers)
        laser.update();

    for (auto &alien : aliens){
        
        alien.FireLaser();
        for(auto &laser: alien.lasers)
            laser.update();
        }

    dash.lasterCount = spaceship.lasers.size();
    dash.alienCount = aliens.size();
    dash.lives = spaceship.lives;

    checkCollisions();
    deleteInactiveLasers();


    deleteInactiveEnemies();

}

void Game::handleInput()
{
    if (IsKeyDown(KEY_LEFT))
        spaceship.MoveLeft();

    if (IsKeyDown(KEY_RIGHT))
        spaceship.MoveRight();

    if (IsKeyDown(KEY_SPACE))
    {

        spaceship.FireLaser();
    }
}

void Game::deleteInactiveLasers()
{

    for (auto it = spaceship.lasers.begin(); it != spaceship.lasers.end();)
    {
        if (!it->active)
        {
            it = spaceship.lasers.erase(it);
        }
        else
        {
            ++it;
        }
    }
}

void Game::deleteInactiveEnemies(){
    for (auto al = aliens.begin(); al != aliens.end();)
    {
        if (!al->active)
        {
            al = aliens.erase(al);
        }
        else
        {
            ++al;
        }
    }

    // globVars::aliensRemaining = aliens.size();
}

void Game::MoveAliens(){
    for(auto& alien: aliens){
        if(alien.position.x + alien.alienImage.width > GetScreenWidth() - 25){
            alienDirection = -1;
            MoveDownAliens(14);
        }


        if(alien.position.x < 25){
            alienDirection = 1;
            MoveDownAliens(14);
        }

        alien.update(alienDirection);
    }
}

void Game::MoveDownAliens(int distance)
{
    for(auto& alien: aliens){
        alien.position.y += distance;
    }
}

std::vector<Obstacle> Game::createObstacles()
{
    int obstacleWidth = Obstacle::grid[0].size() * 3;
    float gap = (GetScreenWidth() - (4 * obstacleWidth))/5;

    for(int i = 0; i < 4; i++) {
        float offsetX = (i + 1) * gap + i * obstacleWidth;
        obstacles.push_back(Obstacle({offsetX, float(GetScreenHeight() - 200)}));
    }
    return obstacles;
}