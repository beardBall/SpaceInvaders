
#pragma once
#include <iostream>
#include <fstream>
#include <unistd.h>
#include "raylib.h"


typedef std::chrono::microseconds ms;


#define LOG(x) std::cout << x << "\n"

namespace z
{
    //Dummy function to retun an integer
    int giveme_five();

    //Gets double timestamp using Chrono
    long getTimeMS();

    void process_mem_usage(double &vm_usage, double &resident_set);

    std::string gen_random(const int len);

    namespace raylib{
        void DrawTex(const char *text, int x,int y, int fontSize, Color color);
    }

}
