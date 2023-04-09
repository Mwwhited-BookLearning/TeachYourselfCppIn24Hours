
#include <iostream>
#include "Mammal.h"
#include "Dog.h"
using namespace std;

int main()
{
	Mammal* mammal = new Dog();

	mammal->Sleep();
	mammal->Speak();
}
