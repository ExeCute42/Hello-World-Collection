#pragma once
#include <iostream>

class brrr
{
    public:
        const char* Hello = "Hello, ";
        std::string World = "World!\n";
};

void UNNECESSARY_LONG_NAME_OF_THE_FUNCTION()
{
    brrr Word;
    std::cout << Word.Hello;
    std::cout << Word.World;
}

namespace Hello
{
    void World()
    {
        UNNECESSARY_LONG_NAME_OF_THE_FUNCTION();
    }
}

//Hello::World();