#pragma once

#include <iostream>
#include "Condition.hpp"

using namespace std;

class Error : public Condition {
public:
	Error() {
		Log();
	}
	virtual ~Error() {}
	virtual void Log() {
		cout << "Logging error conditions" << endl;
	}
};