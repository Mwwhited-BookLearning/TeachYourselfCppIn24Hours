#pragma once

class Cat {
public:
	int Age() const;
	void Age(int value);
	int Weight() const;
	void Weight(int value);
	void Meow() const;

	Cat();
	Cat(int age, int weight);
	~Cat();

private:
	unsigned int age;
	unsigned int weight;

};

