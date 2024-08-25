#include "WinningDivision.h"
#include <iostream>

//Question Five
void WinningDivision::WinningDivisionStart()
{
	double NorthEastSales = GetSales("Northeast");
	double SouthEastSales = GetSales("Southeast");
	double NorthWestSales = GetSales("Northwest");
	double SouthWestSales = GetSales("Southwest");

	findHighest(NorthEastSales, SouthEastSales, NorthWestSales, SouthWestSales);
}

double WinningDivision::GetSales(std::string divisionName)
{
	double sales = -1.0;
	while (sales < 0)
	{
		std::cout << "Enter the sales for " << divisionName << " $";
		std::cin >> sales;

		if (sales < 0)
		{
			std::cout << "\nSales cannot be below 0" << std::endl;
		}
	}
	return sales;
}

void WinningDivision::findHighest(double NorthEastSales, double SouthEastSales, double NorthWestSales, double SouthWestSales)
{
	double highestSales = NorthEastSales;
	std::string divisionName = "Northeast";

	if (SouthEastSales > highestSales)
	{
		highestSales = SouthEastSales;
		divisionName = "Southeast";
	}
	if (NorthWestSales > highestSales)
	{
		highestSales = NorthWestSales;
		divisionName = "Northwest";
	}
	if (SouthWestSales > highestSales)
	{
		highestSales = SouthWestSales;
		divisionName = "Southwest";
	}

	std::cout << "\nThe largest division is " << divisionName << " who has $" << highestSales << " sales.";
}
