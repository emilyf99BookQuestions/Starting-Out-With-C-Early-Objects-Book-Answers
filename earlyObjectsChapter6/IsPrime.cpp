#include "IsPrime.h"
#include <iostream>

//Question Eleven
void IsPrime::IsPrimeStart()
{
	int primeNumber = 0;
	do {
		std::cout << "Enter a positive whole number and I will tell you if it's prime.\n Number: ";
		std::cin >> primeNumber;

		if (primeNumber < 1)
		{
			std::cout << "\nNumber is not a positive number, please enter another." << std::endl;
		}
	} while (primeNumber < 1);

	if (primeNumber == 1) {

		std::cout << "\n1 is not a prime number." << std::endl;
	}
	else {
		bool isNumberPrime = IsPrimeChecker(primeNumber);
		if (isNumberPrime)
		{
			std::cout << "\nThis number is a prime number.";
		}
		else {
			std::cout << "\nThis number is not a prime number.";
		}
	}
}

bool IsPrime::IsPrimeChecker(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
