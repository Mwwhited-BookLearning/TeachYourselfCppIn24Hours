
#include <iostream>

using namespace std;

void demoFunction() {
    cout << "I'm in a function\n";
}

int main()
{
    /*
    block comment
    */
    cout << "Hello World!\n";
    // line comment
    cout << "After comment\n";

    demoFunction();
    cout << "back in main\n";

    return 0;

}
