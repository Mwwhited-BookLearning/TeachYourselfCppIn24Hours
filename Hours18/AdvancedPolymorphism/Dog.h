#pragma once

#include "Mammal.h"

class Dog : public Mammal
{
public:
	Dog();
	~Dog();
	void Speak() const;
	void Pant() const;
};

