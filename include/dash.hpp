#include "raylib.h"


class Dash{
    public:
        Dash();
        ~Dash();
        void update();
        void draw();

            bool active;
            int lasterCount;
            int enemyCount;
            int stage;
            int difficulty;
         private:   

};