#include "spaceship.hpp"




class Game{
    public:

        Game();
        ~Game();
        void draw();
        void update();
        void handleInput();
         Music music;
    
    private:
        Spaceship spacehip;



};