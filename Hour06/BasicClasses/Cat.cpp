#include <iostream>
#include "Cat.h"


int Cat::Age() {
	return this->age;
}

void Cat::Age(int value) {
	this->age = value;
}

int Cat::Weight() {
	return this->weight;
}

void Cat::Weight(int value) {
	this->weight = value;
}

void Cat::Meow() {
	std::cout << "meow";
}

Cat::Cat() {
	Age(0);
	Weight(0);
}
Cat::Cat(int age, int weight) {
	Age(age);
	Weight(weight);
}

Cat::~Cat() {
	;
}