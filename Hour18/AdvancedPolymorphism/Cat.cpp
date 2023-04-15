
#include <iostream>
#include "Cat.h"
#include "Mammal.h"

using namespace std;

Cat::Cat() {
	cout << "cat ctor" << endl;
}
Cat::~Cat() {
	cout << "cat dtor" << endl;
}
void Cat::Speak() const {
	cout << "meow" << endl;
}
void Cat::Purr() const {
	cout << "purrrrrr!" << endl;
}