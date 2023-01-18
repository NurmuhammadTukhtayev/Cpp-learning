#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void Log(const int num) {
	std::cout << num << std::endl;
}