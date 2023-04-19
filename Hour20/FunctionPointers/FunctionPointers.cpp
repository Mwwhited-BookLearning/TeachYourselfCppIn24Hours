
#include <iostream>

int add(int x, int y) {
	return x + y;
}
int mul(int x, int y) {
	return x * y;
}

int add(int (*left)(int, int), int (*right)(int, int), int x, int y) {
	return left(x, y) + right(x, y);
}

int main()
{
	int (*func)(int, int);

	func = add;
	std::cout << "add=" << func(2, 3) << std::endl;

	func = mul;
	std::cout << "mul=" << func(2, 3) << std::endl;

	std::cout << "comp=" << add(add, add, 2,3) << std::endl;
}
