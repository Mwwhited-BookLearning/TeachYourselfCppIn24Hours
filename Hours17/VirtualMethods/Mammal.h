#pragma once
class Mammal
{
public:
	Mammal();
	~Mammal();

	int Age() const;
	void Age(int age);
	int Weight() const;
	void Weight(int weight);

	void Sleep() const;
	virtual void Speak() const;

protected:
	int age;
	int weight;
};

