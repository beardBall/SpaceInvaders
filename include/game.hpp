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
	Level* level;
        vars v;
	Dash dash;
        double waveEndTime, waveStartTime;

    
    private:
        
};
