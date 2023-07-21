
#include <iostream>
#include "Cat.h"
#include "Dog.h"
#include "Mammal.h"

using namespace std;

int main()
{
	const int animalCount = 3;

	Mammal* zoo[animalCount];
	Mammal* mammal;

	int i, choice;
	for (i = 0; i < animalCount; i++) {
		cout << "1) Dog, 2) Cat? " << endl;
		cin >> choice;

		if (choice == 1)
		{
			mammal = new Dog;
		}
		else if (choice == 2) {
			mammal = new Cat;
		}
		else {
			mammal = new Mammal;
		}

		zoo[i] = mammal;
	}

	cout << "-------" << endl;

	for (i = 0; i < animalCount; i++) {
		zoo[i]->Speak();

		Cat* cat = 0;
		cat = dynamic_cast<Cat*>(zoo[i]);
		Dog* dog = 0;
		dog = dynamic_cast<Dog*>(zoo[i]);
		if (cat) {
			cat->Purr();
		}
		else if(dog) {
			dog->Pant();
		}
		else {
			cout << "Unk(" << i << ")" << endl;
		}
	}
}
