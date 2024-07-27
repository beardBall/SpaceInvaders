#pragma once


#include "dash.hpp"
#include "obstacle.hpp"
#include "alien.hpp"
#include "spaceship.hpp"
#include "globvars.hpp"
#include "z.hpp"
#include "level.hpp"

class Game{
    public:

        Game();
        ~Game();
        void draw();
        void update();
        void handleInput();
         Music music;
        std::vector<Alien> aliens;
        int score;
        int alienDirection;
	Level* level;
        vars v;
        Spaceship spaceship;//(&v);

        double waveEndTime, waveStartTime;

    
    private:
        
        Dash dash;
        std::vector<Obstacle> obstacles;
        void deleteInactiveLasers();

        void deleteInactiveEnemies();
        void MoveDownAliens(int distance);
        void MoveAliens();
        void checkCollisions();
        std::vector<Obstacle> createObstacles();
        void checkCollision_alien_obstacle();
};
