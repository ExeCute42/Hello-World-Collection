#include <iostream>
using namespace std;

void greetings()
{
    const char* Hello("Hello, ");
    const char* World("World!");
    cout << Hello << World << '\n';
}

int main()
{
	greetings();
	return 0;
}