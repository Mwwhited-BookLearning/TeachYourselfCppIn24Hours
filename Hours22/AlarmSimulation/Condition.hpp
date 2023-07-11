#pragma once

class Condition {
public:
	Condition() {}
	virtual ~Condition() {}
	virtual void Log() = 0;
};