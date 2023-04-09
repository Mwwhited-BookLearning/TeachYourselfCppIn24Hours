
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rect(30, 5);
	cout << "rect.DrawShape();" << endl;
	rect.DrawShape();

	cout << "rect.DrawShape(40,10);" << endl;
	rect.DrawShape(40, 10);
}