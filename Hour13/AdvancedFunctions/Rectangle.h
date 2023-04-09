#pragma once

class Rectangle
{
public:
	Rectangle(int width, int height);
	Rectangle(const Rectangle& rectangle);
	~Rectangle();
	void DrawShape() const;
	void DrawShape(int width, int height) const;

	int getWidth() const;
	void setWidth(int width);

	int getHeight() const;
	void setHeight(int height);

private:
	int width;
	int height;
};

