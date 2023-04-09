#include <iostream>
#include "SimpleCat.h"
using namespace std;

SimpleCat Func1(SimpleCat cat);
const SimpleCat* Func2(const SimpleCat* cat);

int main()
{
	cout << "Make cat" << endl;
	SimpleCat frisky;
	cout << "call Func1" << endl;
	//frisky.setAge(4);
	Func1(frisky);
	cout << "call Func2" << endl;
	Func2(&frisky);
}

SimpleCat Func1(SimpleCat cat) {
	cout << "ret Func1" << endl;
	return cat;
}

const SimpleCat* Func2(const SimpleCat* cat) {
	cout << "ret Func2" << endl;
	return cat;
}

SimpleCat* AlowChange(SimpleCat* cat) {
	cout << "ret Func2" << endl;
	cat->setAge(5);
	return cat;
}