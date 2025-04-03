#include <iostream>

//Ex1. Calculate the sum and difference of 2 numbers
void task1()
{
	int a, b;

	std::cin >> a >> b;

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
}

//Ex2. Find the last digit
void task2()
{
	int n;

	std::cin >> n;

	std::cout << n << std::endl;
}

int main()
{
	task1();
	task2();

	return 0;
}