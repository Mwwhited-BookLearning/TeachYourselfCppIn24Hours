
#include <iostream>

using namespace std;

int main()
{
	unsigned short shortVar = 5;
	unsigned long longVar = 65535;
	long signedVar = -65535;

	cout << "short:\t\t" << shortVar << "\t\taddress:\t" << &shortVar << "\tsize:\t" << sizeof(shortVar)<< endl;
	cout << "long:\t\t" << longVar << "\t\taddress:\t" << &longVar << "\tsize:\t" << sizeof(longVar) << endl;
	cout << "slong:\t\t" << signedVar << "\t\taddress:\t" << &signedVar << "\tsize:\t" << sizeof(signedVar) << endl;

	unsigned short* addr = 0;
	addr = &shortVar;
	cout << "short:\t\t" << shortVar << "\t\taddress:\t" << &shortVar << "\tsize:\t" << sizeof(shortVar) << endl;
	cout << "addr:\t" << addr << "\taddress:\t" << &addr << "\tsize:\t" << sizeof(addr) << endl;
	shortVar = 12;
	cout << "short:\t\t" << shortVar << "\t\taddress:\t" << &shortVar << "\tsize:\t" << sizeof(shortVar) << endl;
	cout << "addr:\t" << addr << "\taddress:\t" << &addr << "\tsize:\t" << sizeof(addr) << endl;

	unsigned short assigned = *addr;
	cout << "assigned:\t" << assigned << "\t\taddress:\t" << &assigned << "\tsize:\t" << sizeof(assigned) << endl;

	 assigned = *(addr+1);
	cout << "assigned:\t" << assigned << "\t\taddress:\t" << &assigned << "\tsize:\t" << sizeof(assigned) << endl;


	cout << "addr:\t" << addr << "\taddr:\t" << &addr << "\tsize:\t" << sizeof(addr) << "\tval:\t" << *addr << endl;

}
