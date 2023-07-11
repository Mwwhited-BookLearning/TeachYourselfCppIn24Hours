#pragma once

#include <iostream>
#include "Condition.hpp"

using namespace std;

class Alarm : public Condition {
public:
	Alarm();
	virtual ~Alarm() {}
	virtual void Log() {
		cout << "Logging alarm conditions" << endl;
	}
	virtual void Warn() {
		cout << "Warning!" << endl;
	}
	virtual void Call() = 0;
};