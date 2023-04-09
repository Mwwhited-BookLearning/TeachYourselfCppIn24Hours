#include <iostream>
#include "Mammal.h"
using namespace std; 

Mammal::Mammal() {
	age = 0;
	weight = 0;
}

Mammal::~Mammal() {
}

int Mammal::Age() const { return age; }
void Mammal::Age(int age) { this->age = age; }

int Mammal::Weight() const { return weight; }
void Mammal::Weight(int weight) { this->weight = weight; }

void Mammal::Speak() const {
	cout << "Mammal Speaking!" << endl;
}

void Mammal::Sleep() const {
	cout << "Mammal Sleeping!" << endl;
}
