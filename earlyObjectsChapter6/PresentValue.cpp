#include "PresentValue.h"
#include <iostream>
#include <cmath>
#include <iomanip>

//Question Twelve
void PresentValue::PresentValueStart()
{
	double totalDesired, yearlyInterestRate, yearsAllocated;
	std::cout << "Enter how much money you would like, the yearly interest rate and when you would this amount by."
		<< "\nThe program will tell you how much you need to deposit to get this amount.\nTotal Money: ";
	std::cin >> totalDesired;
	std::cout << "\nYearly interest rate: ";
	std::cin >> yearlyInterestRate;
	std::cout << "\nYears invested: ";
	std::cin >> yearsAllocated;

	double monthlyInterestRate = ConvertInterest(yearlyInterestRate / 100.0);
	int months = ConvertYears(yearsAllocated);
	
	double depositNeeded = PresentValueCalc(totalDesired, monthlyInterestRate, months);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\nYou need to deposit $" << depositNeeded << ".\n";
}

double PresentValue::ConvertInterest(double interest)
{
	return interest / 12.0;
}

int PresentValue::ConvertYears(double years)
{
	return std::ceil(years * 12.0);
}

double PresentValue::PresentValueCalc(double total, double interest, int months)
{
	return total / pow(1 + interest, months);
}
