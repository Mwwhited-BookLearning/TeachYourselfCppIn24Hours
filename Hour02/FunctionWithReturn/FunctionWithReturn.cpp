
#include <iostream>

using namespace std;

int add(int x, int y) {
	cout << "entered function with x: " << x << " and y: " << y;
	return x + y;
}

int main()
{
	cout << "Hi from Main!\n";

	int a, b, c;

	cout << "Enter 2 numbers? ";
	cin >> a;
	cin >> b;

	cout << "\n calling add()\n";

	c = add(a, b);

	cout << "\n back in main\n";
	cout << "result c: " << c;

	cout << "done!";

	return 0;
}

