#include <iostream>
using namespace std;

class CoolClassName
{
    public:
        void newLine()
        {
            char a('\n');
            cout << a;
        }
    protected:
        struct Letters
        {
            char H = 'H';
            char E = 'e';
            char L = 'l';
            char O = 'o';
            char W = 'W';
            char R = 'r';
            char D = 'd';
        };
};

class Action : protected CoolClassName
{
    public:
        void Hello()
        {
            Letters Letter;
            cout << Letter.H << Letter.E << Letter.L << Letter.L << Letter.O << ", ";
        }
        void World()
        {
            Letters Letter;
            cout << Letter.W << Letter.O << Letter.R << Letter.L << Letter.D << '!';
        }
};

int main()
{
    Action *Say;
    CoolClassName CoolObjectName;

    Say->Hello();
    Say->World();
    CoolObjectName.newLine();

    return 0;
}