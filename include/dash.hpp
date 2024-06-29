#include "raylib.h"
#include "z.hpp"


class Dash{
    public:
        Dash();
        ~Dash();
        void update();
        void draw();

            bool active;
            int lasterCount;
            int enemyCount;
            int alienCount;
            int stage;
            int difficulty;
            int lives;
            int alienLaserCount;
	    Vector2 position;
         private:   

};
