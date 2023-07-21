
#include <iostream>
using namespace std;

void swapReference(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void swapPointer(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void returnReferenceParameter(int input, int& output) {
	output = input;
}


void returnPointerParameter(int input, int* output) {
	*output = input;
}

int main()
{
	int var1 = 1;
	int var2 = 2;
	int returnValue = 0;

	cout << "References" << endl;

	cout << "var1:" << var1 << "  var2:" << var2 << endl;
	swapReference(var1, var2);
	cout << "var1:" << var1 << "  var2:" << var2 << endl;
	swapReference(var1, var2);
	cout << "var1:" << var1 << "  var2:" << var2 << endl;

	returnValue = 0;
	cout << "var1:" << var1 << "  returnValue:" << returnValue << endl;
	returnReferenceParameter(var1, returnValue);
	cout << "var1:" << var1 << "  returnValue:" << returnValue << endl;


	cout << "Pointers" << endl;

	cout << "var1:" << var1 << "  var2:" << var2 << endl;
	swapPointer(&var1, &var2);
	cout << "var1:" << var1 << "  var2:" << var2 << endl;
	swapPointer(&var1, &var2);
	cout << "var1:" << var1 << "  var2:" << var2 << endl;

	returnValue = 0;
	cout << "var1:" << var1 << "  returnValue:" << returnValue << endl;
	returnPointerParameter(var1, &returnValue);
	cout << "var1:" << var1 << "  returnValue:" << returnValue << endl;
}
