

#include <iostream>
#include <string>

void out(std::string);
void out(int);

int main()
{
	const int maxValue = 10;
	for (int counter = 1; counter <= maxValue; counter++) {
		out(counter);
	}
}

void out(std::string input) {
	std::cout << input << std::endl;
}

void out(int input) {
	std::cout << input << std::endl;
}
