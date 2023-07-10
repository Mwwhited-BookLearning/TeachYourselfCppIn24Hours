
#include <iostream>
#include "Cat.h"

Cat Buddy;
unsigned int GrossWeight;

int main()
{
	Buddy.Age(10);
	Buddy.Weight(13);

	Buddy.Meow();

	std::cout << "size of cat " << sizeof(Cat);
}
