#include <iostream>
using namespace std;

int main()
{
    int first, second;

    cout << "please enter a big number: ";
    cin >> first; 
    cout << endl;


    cout << "please enter a smaller number: ";
    cin >> second;
    cout << endl;

    if (first > second)
        cout << "thanks" << endl;
    else 
        cout << "oops" << endl;
}