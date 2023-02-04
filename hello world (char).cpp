#include <iostream>
#define letter static_cast<char>
using namespace std;

/* 
    x>>y == (y*2)^√x
    x<<y == x^(2*y)
*/

int main()
{
    char a(120);
    cout << letter(a-48);
    cout << letter(a+83>>1);
    cout << letter(a-12);
    cout << letter(a-12);
    cout << letter(a+102>>1);

    cout << letter(a-76);
    cout << letter(a-104<<1);

    cout << letter(a+54>>1);
    cout << letter(a+102>>1);
    cout << letter(a+336>>2);
    cout << letter(a-12);
    cout << letter(a-70<<1);

    cout << letter(a+12>>2);
    cout << letter(a+40>>4);

    return 0;
}