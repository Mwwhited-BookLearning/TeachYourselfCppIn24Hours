
#include <iostream>
using namespace std;

typedef unsigned short int USHORT;
typedef unsigned int UINT;

int main()
{
	USHORT width, height;
	UINT area;

	cout << "width: ";
	cin >> width;
	cout << "\n";

	cout << "height: ";
	cin >> height;
	cout << "\n";

	area = width * height;

	cout << "area: ";
	cout << area;
	cout << "\n";
}