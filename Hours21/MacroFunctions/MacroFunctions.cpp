
#include <iostream>

using namespace std;

#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define TWICE(x) (2*(x))
#define THREE(a) a * a * a
#define CUBE(a) ((a) * (a) * (a))
#define WSTRING(x) #x

#define ListOf(Type) class Type##List \
{ \
public: \
Type##List() {} \
private: \
int itsLength; \
};

ListOf(int)

class Animal {};
ListOf(Animal)

int main()
{
	auto x = 1;
	auto y = 2;
	auto xyz = MAX(x, y);
	auto z = TWICE(MAX(x, y));
	auto w = THREE(x * 2);
	auto t = CUBE(x * 2);
	auto u = WSTRING(1);
	cout << "Hello World!" << endl;
}
