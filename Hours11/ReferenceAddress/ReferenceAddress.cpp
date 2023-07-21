
#include <iostream>
using namespace std;

int main()
{
	int var1;
	int& ref1 = var1;

	cout << "var:" << var1 << "  ref:" << ref1 << endl;
	var1 = 2;
	cout << "var:" << var1 << "  ref:" << ref1 << endl;
	ref1 = 3;
	cout << "var:" << var1 << "  ref:" << ref1 << endl;
}
