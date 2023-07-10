#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle() :height(0), width(0) {}
	Rectangle(int height, int width) : height(height), width(width) {}

	// Inherited via Shape
	virtual long Area() const;
	virtual long Perimeter() const;
	virtual void Draw() const;

	virtual void Height(int value);
	virtual int Height() const;

	virtual void Width(int value);
	virtual int Width() const;


private:
	int height = 0;
	int width = 0;
};

