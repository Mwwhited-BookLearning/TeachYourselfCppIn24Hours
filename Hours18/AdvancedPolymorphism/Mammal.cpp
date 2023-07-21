
#include <iostream>
#include "Mammal.h"

using namespace std;

Mammal::Mammal()
	:age(1)
{
	cout << "mammal ctor" << endl;
}
Mammal::~Mammal() {
	cout << "mammal dtor" << endl;
}
void Mammal::Speak() const {
	cout << "mammal speak" << endl;
}

void Mammal::Age(int age) {
	this->age = age;
}
int Mammal::Age() const {
	return this->age;
}