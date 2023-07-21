#pragma once

class SimpleCat {
public:
	SimpleCat();
	~SimpleCat();
	int GetAge();
	void SetAge(int age);

private:
	int itsAge;
};
