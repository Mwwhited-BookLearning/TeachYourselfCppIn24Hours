#pragma once

#include <iostream>
#include "Alarm.hpp"

using namespace std;

class FireAlarm : public Alarm {
public:
	FireAlarm() {
		Log();
	}
	virtual ~FireAlarm() {}
	virtual void Log() {
		cout << "Logging fire call" << endl;
	}
	virtual void Call() {
		cout << "Calling Fire Department" << endl;
	}
};