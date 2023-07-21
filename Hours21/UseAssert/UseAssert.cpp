
#include <iostream>

using namespace std;

#ifndef _DEBUG
	#define ASSERT(x)
	#define PRINT(x)
#else
	#define ASSERT(x) \
	if (!(x)) { \
		cout << "ERROR!! Assert " << #x << " failed" << endl; \
		cout << " on line " << __LINE__ << endl; \
		cout << "in file " << __FILE__ << endl; \
	}
	#define PRINT(x) \
		cout << #x << ":\t" << x << endl;
#endif 

int main()
{
	auto x = 1;
	auto y = 2;
	ASSERT(false);
	PRINT(x);
	PRINT(y);
	cout << "Hello World!\n";
}
