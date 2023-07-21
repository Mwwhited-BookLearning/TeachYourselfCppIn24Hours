
#include <iostream>
#include "LinkedList.cpp"

int main()
{
	LinkedList<int>* ints = new LinkedList<int>;

	int* value;

	for (auto x = 0; x < 10; x++) {
		value = &x;
		ints->Insert(value);
	}

	ints->ShowAll();

	delete ints;
}

