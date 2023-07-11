
#include <iostream>
#include "Condition.hpp"
#include "Normal.hpp"
#include "Error.hpp"
#include "FireAlarm.hpp"

using namespace std;

int main()
{
	int input;
	int okay = 1;
	Condition* pCondition;

	while (okay) {
		cout << "(0) Quit" << endl
			<< "(1) Normal" << endl
			<< "(2) Fire" << endl
			<< "? "
			;
		cin >> input;
		okay = input;
		switch (input)
		{
		case 0:
			break;
		case 1:
			pCondition = new Normal;
			delete pCondition;
			break;
		case 2: {
			pCondition = new FireAlarm;

			Alarm* pAlarm = dynamic_cast<Alarm*>(pCondition);
			if (pAlarm != nullptr) {
				pAlarm->Call();
			}

			delete pCondition;
		}
			  break;
		default:
			pCondition = new Error;
			delete pCondition;
			//okay = 0;
			break;
		}
	}
	return 0;
}
