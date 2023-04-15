#pragma once

#include "Mammal.h"

class Cat : public Mammal
{
public:
	Cat();
	~Cat();
	void Speak() const;
	void Purr() const;
};

