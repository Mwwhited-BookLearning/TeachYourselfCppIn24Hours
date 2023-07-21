#pragma once
class SimpleCat
{
public:
	SimpleCat();
	SimpleCat(SimpleCat& cat);
	~SimpleCat();

	int getAge() const;
	void setAge(int age);

private:
	int age = 0;
};
