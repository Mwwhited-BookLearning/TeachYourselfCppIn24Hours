#pragma once

class Cat {
public:
	int Age();
	void Age(int value);
	int Weight();
	void Weight(int value);
	void Meow();

	Cat();
	Cat(int age, int weight);
	~Cat();

private:
	unsigned int age;
	unsigned int weight;

};

