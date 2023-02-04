#include <iostream>

class Action {
    public:
        void Hello();
        void World()
            {
                std::cout << "World!" << std::endl;
            }
    private:
        void WhatIShouldSay()
        {
            std::cout << "Hello, ";
        }
};

void Action::Hello()
{
    WhatIShouldSay();
}

int main()
{
	Action Say;
	Say.Hello();
    Say.World();
    return 0;
}