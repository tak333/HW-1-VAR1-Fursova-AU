#include <iostream>

//Ex1. Calculate the sum and difference of 2 numbers
void task1()
{
	int a, b;

	std::cin >> a >> b;

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
}

int main()
{
	task1();

	return 0;
}