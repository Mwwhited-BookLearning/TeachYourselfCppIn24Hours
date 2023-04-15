
#include <iostream>
#include "Dog.h"
#include "Mammal.h"

using namespace std;

Dog::Dog() {
	cout << "Dog ctor" << endl;
}
Dog::~Dog() {
	cout << "Dog dtor" << endl;
}
void Dog::Speak() const {
	cout << "woof" << endl;
}
void Dog::Pant() const {
	cout << "panting!" << endl;
}