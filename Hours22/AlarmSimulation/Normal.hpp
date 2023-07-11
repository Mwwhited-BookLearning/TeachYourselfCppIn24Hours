#pragma once

#include <iostream>
#include "Condition.hpp"

using namespace std;

class Normal : public Condition {
public:
	Normal() {
		Log();
	}
	virtual ~Normal() {}
	virtual void Log() {
		cout << "Logging normal conditions" << endl;
	}
};