
#include <iostream>
#include "Cat.h"

int main()
{
	Cat buddy(5, 10);

	std::cout << "buddy is " << buddy.Age() << " and weighs " << buddy.Weight() << std::endl;
}
