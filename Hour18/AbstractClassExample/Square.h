#pragma once
#include "Shape.h"
class Square :
    public Shape
{
public:
    Square() :side(0) {}
    Square(int side) :side(side) {}

    // Inherited via Shape
    virtual long Area() const ;
    virtual long Perimeter() const;
    virtual void Draw() const;

    virtual void Side(int value);
    virtual int Side() const;
private:
    int side = 0;
};

