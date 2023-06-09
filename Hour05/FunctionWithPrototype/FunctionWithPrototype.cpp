
#include <iostream>

using namespace std;

int FindArea(int length, int width);

int main()
{
	int length, width, area;
	cout << "width? "; cin >> width; cout << endl;
	cout << "length? "; cin >> length; cout << endl;

	cout << "area:" << (area = FindArea(length, width));
}

int FindArea(int length, int width) {
	return length * width;
}
