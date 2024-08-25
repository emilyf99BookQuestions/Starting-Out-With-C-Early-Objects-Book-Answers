
#include "Markup.h"
#include <iostream>
#include <iomanip>

//Question One

void Markup::MarkupStart()
{
	double wholeSale, markUp;

	std::cout << "**Mark-up Calculator**\nEnter the Whole Sale Cost of the item.";
	std::cin >> wholeSale;

	std::cout << "\nNow enter the Markup percentage.";
	std::cin >> markUp;

	double retail = CalculateRetail(wholeSale, markUp);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The retail price is $" << retail;
}

double Markup::CalculateRetail(double wholeSale, double markUpPercent)
{
	double profit = wholeSale * (markUpPercent / 100);
	double retailPrice = wholeSale + profit;
	return retailPrice;
}
