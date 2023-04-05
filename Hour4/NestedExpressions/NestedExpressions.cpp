#include <iostream>
using namespace std;

int main()
{
	int first, second;

	cout << "please enter a big number: ";
	cin >> first;
	cout << endl;


	cout << "please enter a smaller number: ";
	cin >> second;
	cout << endl;

	if (first >= second) {
		if ((first % second) == 0) {
			if (first == second)
				cout << "they are the same" << endl;
			else
				cout << "they are evenly divisible" << endl;
		}
		else {
			cout << "they are not divisible evenly" << endl;
		}
	}
	else {
		cout << "the second was larger" << endl;
	}
}