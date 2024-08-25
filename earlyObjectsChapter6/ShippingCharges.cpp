#include "ShippingCharges.h"
#include <iostream>
#include <iomanip>

//Question Six
void ShippingCharges::ShippingChargesStart()
{
	//Program Explanation
	std::cout << "Fast Freight Shipping Company Shipping Calculator.";
	std::cout << "\nEnter a parcels weigh (lbs) and distance (Miles), Enter weight as 0 to exit.";
	
	int weight = 1;
	int distance = 0;

	//Loop until Parcel Weight is 0
	while (weight != 0)
	{
		std::cout << "\nWeight: ";
		std::cin >> weight;
		if (weight == 0) // Exit condition
			break;
		std::cout << "\nDistance: ";
		std::cin >> distance;
		
		double shippingCost = CalculateCharge(weight, distance);
		std::cout << std::fixed << std::setprecision(2) 
			<< "\nThe cost for this parcel is $" << shippingCost << std::endl;
	}
	std::cout << "\nProgram Exiting";
}

double ShippingCharges::CalculateCharge(int weight, int distance)
{
	const double PRICE_FOR_UNDER_2_POUNDS = 1.10;
	const double PRICE_FOR_2_6_POUNDS = 2.20;
	const double PRICE_FOR_6_10_POUNDS = 3.70;
	const double PRICE_OVER_10 = 3.80;

	double distanceConversion = (ceil(distance / 500.0)) * 500;
	//std::cout << distanceConversion;
	double finalPrice = 0.0;
	if (weight <= 2) 
	{
		finalPrice = PRICE_FOR_UNDER_2_POUNDS * distanceConversion;
	}
	else if (weight > 2 && weight <= 6)
	{
		finalPrice = PRICE_FOR_2_6_POUNDS * distanceConversion;
	}
	else if (weight > 6 && weight <= 10)
	{
		finalPrice = PRICE_FOR_6_10_POUNDS * distanceConversion;
	}
	else
	{
		finalPrice = PRICE_OVER_10 * distanceConversion;
	}
	return finalPrice;
}
