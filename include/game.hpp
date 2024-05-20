#include "spaceship.hpp"
#include "alien.hpp"
#include "dash.hpp"




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
        void deleteInactiveLasers();

        void deleteInactiveEnemies();
};