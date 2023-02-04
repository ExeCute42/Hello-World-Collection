#include <iostream>
using namespace std;

template <typename Lol>
Lol say(Lol x)
{
    cout << x;
    return x;
}

int main()
{
    say("Hello, World!");
    say('\n');
    return 0;
}