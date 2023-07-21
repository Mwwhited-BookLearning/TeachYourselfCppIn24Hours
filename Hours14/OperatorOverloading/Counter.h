#pragma once
class Counter
{
public:
	Counter(int);
	Counter();
	Counter(Counter& counter);
	~Counter();
	int Value() const;
	void Value(int value);
	void Increment();
	void Decrement();

	const Counter& operator++();
	const Counter operator++(int);

	const Counter& operator--();
	const Counter operator--(int);

	//Counter operator+ (const Counter&);
	//Counter operator+ (const int&);
	//Counter operator- (const Counter&);
	//Counter operator- (const int&);

private:
	int value;
};

