
#include <iostream>

using namespace std;

#define definedConstant 15; // preparser
const unsigned short int constant = 12; //compiler

enum colors {
	red = 100,
	green,
	blue = 200,
	white,
	black = 700,
};

int main()
{
	cout << "definedConstant:" << definedConstant;
	cout << "\n";
	cout << "constant:" << constant << "\n";
	cout << "colors.red:" << red << "\n";
	cout << "colors.green:" << green << "\n";
	cout << "colors.blue:" << blue << "\n";
	cout << "colors.white:" << white << "\n";
	cout << "colors.black:" << black << "\n";
}
