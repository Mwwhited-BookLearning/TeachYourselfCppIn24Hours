

#include <iostream>
#include <string>

void out(std::string);
void out(int);

int main()
{
	const int maxValue = 10;
	int counter = 0;
	while (counter < maxValue) {
		counter++;
		out(counter);
	}

}

void out(std::string input) {
	std::cout << input << std::endl;
}

void out(int input) {
	std::cout << input << std::endl;
}
