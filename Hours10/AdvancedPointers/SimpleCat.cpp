
#include <iostream>
#include "SimpleCat.h"

using namespace std;

SimpleCat::SimpleCat() {
	cout << "called ctor" << endl;
	itsAge = 1;
}

SimpleCat::~SimpleCat() {
	cout << "called dtor" << endl;
}


int SimpleCat::GetAge() {
	return itsAge;
}

void SimpleCat::SetAge(int age) {
	itsAge = age;
}