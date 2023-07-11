
#include <iostream>
using namespace std;

int main()
{
	int arr[5];	

	for (int i = 0; i < 5; i++) {
		arr[i] = 1 << i;
		cout << "i:" << i << "\tv:" << arr[i] << endl;
	}

	for (int i = 4; i >= 0; i--) {
		cout << "i:" << i << "\tv:" << arr[i] << endl;
	}

	{
		int i = 50;
		cout << "i:" << i << "\tv:" << arr[i] << endl;
	}

	int len = sizeof(arr) / sizeof(arr[0]);

	cout << "arr len:" << len << endl;

	//Note: this is intentionally over shooting 
	for (int i = 0; i < 100; i++) {
		arr[i] = 1 << i;
		cout << "i:" << i << "\tv:" << arr[i] << endl;
	}
}
