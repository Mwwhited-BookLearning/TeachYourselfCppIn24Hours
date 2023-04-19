#pragma once

class Cat
{
public:
	Cat(int age);
	~Cat();
	int Age() const;
	void Age(int value);
	int Id() const;
	static int Count();

private:
	int age;
	int id;

	static int seed;
	static int count;
};
