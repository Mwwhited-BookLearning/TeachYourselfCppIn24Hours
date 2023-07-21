#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{

	const int catCount = 10;
	Cat* cats[catCount];

	for (int i = 0; i < catCount; i++) {
			cats[i] = 0;
	}

	for (int o = catCount; o > 1; o--) {
		for (int i = 0; i < catCount; i++) {
			if (!cats[i]) {
				cats[i] = new Cat(i);
			}
		}
		cout << "Cats: " << Cat::Count() << endl;
		for (int i = 0; i < catCount; i += o) {
			if (cats[i]) {
				delete cats[i];
				cats[i] = 0;
			}
		}
		cout << "Cats: " << Cat::Count() << endl;
	}


	for (int i = 0; i < catCount; i++) {
		if (cats[i]) {
			cout << i << ": " << cats[i]->Age() << "(" << cats[i]->Id() << ")" << endl;
		}
	}

}
