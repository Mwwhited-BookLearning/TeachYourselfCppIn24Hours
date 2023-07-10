#include <iostream>
#include "Square.h"

using namespace std;

long Square::Area() const {
	return side * side;
}

long Square::Perimeter()const {
	return 4 * side;
}

void Square::Draw()const {
	for (int x = 0; x < side; x++) {
		for (int y = 0; y < side; y++) {
			cout << "x";
		}
		cout << endl;
	}
}

void Square::Side(int value) {
	side = value;
}

int Square::Side() const {
	return side;
}
