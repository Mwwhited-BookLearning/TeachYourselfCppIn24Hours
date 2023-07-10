
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}

Rectangle::Rectangle(const Rectangle& rectangle) {
	this->width = rectangle.width;
	this->height = rectangle.height;
}

Rectangle::~Rectangle() {
}

void Rectangle::DrawShape() const {
	DrawShape(width, height);
}

void Rectangle::DrawShape(int width, int height) const {
	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++)
			cout << "*";
		cout << endl;
	}
}

int Rectangle::getWidth() const {
	return width;
}
void Rectangle::setWidth(int width) {
	this->width = width;
}

int Rectangle::getHeight() const {
	return height;
}
void Rectangle::setHeight(int height) {
	this->height = height;
}
