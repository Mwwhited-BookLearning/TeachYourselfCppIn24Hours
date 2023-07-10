
#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	Counter counter;

	cout << "value:" << counter.Value() << endl;
	counter.Increment();
	cout << "value:" << counter.Value() << endl;
	++counter;
	cout << "value:" << counter.Value() << endl;
	counter++;
	cout << "value:" << counter.Value() << endl;
	counter.Decrement();
	cout << "value:" << counter.Value() << endl;
	--counter;
	cout << "value:" << counter.Value() << endl;
	counter--;
	cout << "value:" << counter.Value() << endl;


	//Counter operator+ (const Counter&);
	//Counter operator+ (const int&);
	//Counter operator- (const Counter&);
	//Counter operator- (const int&);
}
