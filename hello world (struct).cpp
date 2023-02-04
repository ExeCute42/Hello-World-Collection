#include <iostream>
using namespace std;

struct Action { string Hello; string World; };

int main()
{
	Action say;
    say.Hello = "Hello, ";
    say.World = "World!";
    cout << say.Hello << say.World << endl;
    return 0;
}