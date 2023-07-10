
#include <iostream>
using namespace std;

int main()
{
	int data[] = { 0,1,2,3,4,5,6,7,8,9,10 };

	cout << "v:" << data << " x:" << sizeof(data) << " y:" << sizeof(data[0]) << " z:" << size(data) << endl;
	cout << endl;

	int* ptr = data;
	int* ptr2 = data;

	for (int i = 0; i < size(data); i++) {
		cout << "i:" << i << "\tv:" << data[i] << "\tx:" << *(ptr+i) << "\ty:" << *(ptr2++) <<endl;
	}


	cout <<  "\tx:" << *(ptr) << "\ty:" << *(ptr2++) << endl;
}
