#include "FutureValue.h"
#include <iostream>
#include <cmath>
#include <iomanip>
//Question Thirteen
void FutureValue::FutureValueStart()
{
	double currentValue, interestRate;
	int months;
	std::cout << "\nEnter the accounts current value, the monthly interest rate and the amount of months you would like it to sit."
		<< "\nCurrent value: ";
	std::cin >> currentValue;
	std::cout << "\nMonthly interest rate: ";
	std::cin >> interestRate;
	std::cout << "\nMonths in account: ";
	std::cin >> months;

	double futureValue = FutureValueCalc(currentValue, interestRate, months);
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\nThe future value of the account is $" << futureValue;
	
}

double FutureValue::FutureValueCalc(double startingValue, double interest, int months)
{
	interest = interest / 100.0;
	return startingValue * std::pow(1 +  interest, months);
}
