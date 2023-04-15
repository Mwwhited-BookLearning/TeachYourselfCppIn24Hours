#pragma once
class Mammal
{
public:
	Mammal();
	virtual ~Mammal();
	virtual void Speak() const;

	virtual int Age() const;
	virtual void Age(int age);

protected:
	int age;
};

