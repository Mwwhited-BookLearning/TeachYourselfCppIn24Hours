#include "Counter.h"

Counter::Counter(int value) {
	this->value = value;
}
Counter::Counter() {
	this->value = 0;
}
Counter::Counter(Counter& counter) {
	this->value = counter.value;
}

Counter::~Counter() {
}

int Counter::Value() const {
	return this->value;
}
void Counter::Value(int value) {
	this->value = value;
}
void Counter::Increment() {
	this->value++;
}
void Counter::Decrement() {
	this->value--;
}

const Counter& Counter::operator++() {
	++this->value;
	return *this;
}
const Counter Counter::operator++(int) {
	Counter temp(*this);
	++value;
	return temp;
}
const Counter& Counter::operator--() {
	--this->value;
	return *this;
}
const Counter Counter::operator--(int) {
	Counter temp(*this);
	--value;
	return temp;
}
//
//Counter Counter::operator+ (const Counter& counter) {
//	return Counter(this->value + counter);
//}
//Counter Counter::operator+ (const int& counter) {
//	return Counter(this->value + counter);
//}
//
//Counter Counter::operator- (const Counter& counter) {
//	return Counter(this->value - counter.value);
//}
//Counter Counter::operator- (const int& counter) {
//	return Counter(this->value - counter);
//}
