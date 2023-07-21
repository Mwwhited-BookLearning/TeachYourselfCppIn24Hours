#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	//init
	const int shapeCount = 100;
	Shape* shapes[shapeCount];
	for (int idx = 0; idx < shapeCount; idx++) {
		shapes[idx] = 0;
	}

	//create shapes
	for (int idx = 0; idx < 5; idx++) {
		switch (idx % 2) {
		case 0: {
			shapes[idx] = new Square(5);
			cout << "s " << idx << endl;
			break;
		}
		case 1: {
			shapes[idx] = new Rectangle(8, 4);
			cout << "r " << idx << endl;
			break;
		}
		}
	}

	//draw
	for (int idx = 0; idx < shapeCount; idx++) {
		Shape* shape = shapes[idx];
		if (shape) {
			shape->Draw();
			cout << endl;
		}
	}
}
