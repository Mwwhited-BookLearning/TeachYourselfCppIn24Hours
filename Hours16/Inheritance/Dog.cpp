#include <iostream>
#include "Dog.h"
using namespace std;

Dog::Dog()
	:breed(Yorkie)
{
}
Dog::~Dog() {
}

Breeds Dog::Breed() const { return breed; }
void Dog::Breed(Breeds breed) { this->breed = breed; }

void Dog::WagTail() const {
	cout << "Wagging Tail" << endl;
}
void Dog::BegForFood() const {
	cout << "Begging for food" << endl;
}

void Dog::Speak() const {
	cout << "woof" << endl;;
}