
#include <iostream>
using namespace std;

#define Twice(x) ((x) * 2)
#define Max(x,y) ((x) > (y) ? (x):(y))
#define Min(x,y) ((x) < (y) ? (x):(y))

#define Cube(a) ((a) * (a) * (a))
#define Cube2(a) ( a * a * a )

#define strout(a) cout << #a

#define fPrt(x) f ## x ## Print

int main()
{
	cout << "Hello World!\n";

	cout << Twice(4) << endl;
	cout << Max(4, 3) << endl;

	cout << Cube(4) << endl;
	cout << Cube2(4) << endl;

	cout << Cube(5 + 7) << endl;
	cout << Cube2(5 + 7) << endl;

	strout(abc);

}

