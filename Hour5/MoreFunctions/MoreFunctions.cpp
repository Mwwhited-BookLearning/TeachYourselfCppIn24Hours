
#include <iostream>

void prompt(std::string prompt) {
	std::cout << prompt << std::endl;
}

int getValue(std::string prompt) {
	std::cout << prompt;
	int ret;
	std::cin >> ret;
	std::cout << std::endl;
	return ret;
}

float getValueF(std::string prompt) {
	std::cout << prompt << "?";
	float ret;
	std::cin >> ret;
	std::cout << std::endl;
	return ret;
}

float convertF2C(float fahrenheit) {
	return ((fahrenheit - 32) * 5) / 9;
}

int main()
{
	float f = getValueF("temperatire in fahrenheight");
	float c = convertF2C(f);
	std::cout << "temperature in celcius " << c << std::endl;
}

