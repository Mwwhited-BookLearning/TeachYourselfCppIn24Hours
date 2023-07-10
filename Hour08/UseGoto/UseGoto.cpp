

#include <iostream>
#include <string>

void out(std::string);
void out(int);

int main()
{
	const int maxValue = 10;
	int counter = 0;
top:
	counter++;
	out(counter);
	if (counter < maxValue)
		goto top;
}

void out(std::string input) {
	std::cout << input << std::endl;
}

void out(int input) {
	std::cout << input << std::endl;
}
