
#include <iostream>
#include "SimpleCat.h"
using namespace std;

int main()
{
	cout << " simple cat frisky" << endl;
	SimpleCat frisky;
	cout << " simple cat pRags = new SimpleCat.. \n";

	SimpleCat* pRags = new SimpleCat;
	cout << "delete prags\n";

	cout << "age:" << frisky.GetAge() << endl;
	cout << "deref age:" << pRags->GetAge() << endl;

	delete pRags;
	cout << "existing \n";

	cout << "age:" << frisky.GetAge() << endl;
	cout << "deref age:" << pRags->GetAge() << endl;// invalid pointer

	pRags->SetAge(4);
	cout << "deref age:" << pRags->GetAge() 
}
