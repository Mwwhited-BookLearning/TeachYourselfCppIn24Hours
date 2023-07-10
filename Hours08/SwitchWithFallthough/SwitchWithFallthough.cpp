

#include <iostream>
#include <string>

void out(std::string);
void out(int);


int main()
{
	for (int i = 0; i < 10; i++) {
		switch (i) {
		case 0: std::cout << i << " ";
		case 1: std::cout << i << " ";
		case 2: std::cout << i << " ";
		case 3: std::cout << i << " ";
		case 4: std::cout << i << " ";
		case 5: std::cout << i << " ";
		case 6: std::cout << i << " ";
		case 7: std::cout << i << " ";
		case 8: std::cout << i << " ";
		case 9: std::cout << i << " ";
		}
		std::cout << std::endl;
	}
}

void out(std::string input) {
	std::cout << input << std::endl;
}

void out(int input) {
	std::cout << input << std::endl;
}
