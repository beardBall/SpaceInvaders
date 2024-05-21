#include "spaceship.hpp"
#include "alien.hpp"
#include "dash.hpp"
#include "obstacle.hpp"





class Game{
    public:

        Game();
        ~Game();
        void draw();
        void update();
        void handleInput();
         Music music;
        std::vector<Alien> aliens;

    
    private:
        Spaceship spaceship;
        // Alien alien;
        Dash dash;
        std::vector<Obstacle> obstacles;
        void deleteInactiveLasers();

        void deleteInactiveEnemies();
};