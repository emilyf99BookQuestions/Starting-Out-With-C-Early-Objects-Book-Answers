#pragma once
#include <string>

//Question Five
class WinningDivision 
{
public:
	static void WinningDivisionStart();
	static double GetSales(std::string divisionName);
	static void findHighest(double NorthEastSales, double SouthEastSales, double NorthWestSales, double SouthWestSales);
};