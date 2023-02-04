#include <iostream>
using namespace std;

enum LETTERS {
H,
E,
L,
O,
W,
R,
D
};

void say(LETTERS Letter)
{
switch (Letter) {
case H:
    cout << "H";
case E:
    cout << "e";
case L:
    cout << "l";
    break;
case O:
    cout << "o";
    break;
case W:
    cout << ", W";
    break;
case R:
    cout << "r";
    break;
case D:
    cout << "d!\n";
    break;
} }

int main()
{
    say(H);
    say(L);
    say(O);
    say(W);
    say(O);
    say(R);
    say(L);
    say(D);
    
    return 0;
}