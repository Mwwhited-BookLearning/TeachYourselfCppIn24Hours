#include <iostream>
#include "SimpleCat.h"

using namespace std;

SimpleCat::SimpleCat() {
	age = 0;
	cout << "simple ctor" << endl;
}

SimpleCat::SimpleCat(SimpleCat& cat) {
	this->age = cat.age;
	cout << "copy cat" << endl;
}

SimpleCat::~SimpleCat() {
	cout << "simple dtor" << endl;
}

int SimpleCat::getAge() const {
	cout << "getAge=" << age << endl;
	return age;
}

void SimpleCat::setAge(int age) {
	this->age = age;
	cout << "setAge(" << age << ")" << endl;
}
