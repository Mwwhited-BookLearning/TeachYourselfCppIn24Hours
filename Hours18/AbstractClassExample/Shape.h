#pragma once
class Shape
{
public:
	Shape() {}
	virtual ~Shape() {}
	virtual long Area() const = 0;
	virtual long Perimeter() const = 0;
	virtual void Draw() const = 0;
};

