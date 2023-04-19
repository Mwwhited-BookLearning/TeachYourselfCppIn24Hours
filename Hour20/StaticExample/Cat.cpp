#include "Cat.h"

Cat::Cat(int age) : age(age) {
	id = seed++;
	count++;
}
Cat::~Cat() { count--; }
int Cat::Age() const { return age; }
void Cat::Age(int value) { age = value; }
int Cat::Id() const { return id; }


int Cat::Count() {
	return count;
}

// https://stackoverflow.com/questions/185844/how-to-initialize-private-static-members-in-c
int Cat::seed = 0;
int Cat::count = 0;