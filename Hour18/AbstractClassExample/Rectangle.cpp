
#include <iostream>
#include "Rectangle.h"

using namespace std;

long Rectangle::Area() const {
	return height * width;
}

long Rectangle::Perimeter()const {
	return 2 * (height + width);
}

void Rectangle::Draw()const {
	for (int x = 0; x < width; x++) {
		for (int y = 0; y < height; y++) {
			cout << "x";
		}
		cout << endl;
	}
}

void Rectangle::Height(int value) {
	height = value;
}
int Rectangle::Height() const {
	return height;
}


void Rectangle::Width(int value) {
	width = value;
}
int Rectangle::Width() const {
	return width;
}
