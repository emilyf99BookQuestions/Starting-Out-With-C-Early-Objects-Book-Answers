#include "FuelEfficiency.h"
#include <iostream>
#include <string>

//Question Seven
void FuelEfficiency::FuelEfficiencyStart()
{
	std::string car1Name, car2Name, car3Name;
	double car1gallons, car2gallons, car3gallons;
	std::cout << "Enter three car makes and the amount of fuel used on the route. The efficency will be returned.\nCar One Make: ";
	std::cin >> car1Name;

	std::cout << "\nGallons of fuel used: ";
	std::cin >> car1gallons;
	double car1efficency = CalcMPG(ROUTE_MILES, car1gallons);

	std::cout << "\nCar Two Make: ";
	std::cin >> car2Name;

	std::cout << "\nGallons of fuel used: ";
	std::cin >> car2gallons;
	double car2efficency = CalcMPG(ROUTE_MILES, car2gallons);

	std::cout << "\nCar Three Make: ";
	std::cin >> car3Name;

	std::cout << "\nGallons of fuel used: ";
	std::cin >> car3gallons;
	double car3efficency = CalcMPG(ROUTE_MILES, car3gallons);

	double mostEfficent = car1efficency;
	std::string mostEfficentName = car1Name;

	if (car2efficency > mostEfficent)
	{
		mostEfficent = car2efficency;
		mostEfficentName = car2Name;
	}
	if (car3efficency > mostEfficent)
	{
		mostEfficent = car3efficency;
		mostEfficentName = car3Name;
	}

	std::cout << "\nThe most efficent car is " << mostEfficentName << " , with " << mostEfficent << " miles per gallon.";
}

double FuelEfficiency::CalcMPG(double distance, double gallons)
{
	return distance / gallons;
}
