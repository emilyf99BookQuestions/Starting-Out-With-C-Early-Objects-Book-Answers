#include "OrderStatus.h"
#include <iostream>
#include <string>

//Question Fifteen
const double SPOOL_COST = 100.00;
const double SHIPPING_COST = 10.00;

void OrderStatus::OrderStatusStart()
{
	std::cout << "\nThe Middletown Wholesale Copper Wire Company\n";
	int spoolsOrdered, currentStock;
	double specialShippingCharges;

	GetOrderDetails(spoolsOrdered, currentStock, specialShippingCharges);
	CreateOrderDetails(spoolsOrdered, currentStock, specialShippingCharges);
}

void OrderStatus::GetOrderDetails(int &spoolsOrdered, int &currentStock, double &specialShippingCharges)
{
	std::cout << "Enter the number of spools ordered: ";
	std::cin >> spoolsOrdered;

	std::cout << "Enter the number of spools in stock: ";
	std::cin >> currentStock;

	std::cout << "Enter any special shipping and handling charges (above the regular 10.00 rate): ";
	std::cin.ignore(); 

	std::string input;
	std::getline(std::cin, input);

	if (input.empty())
	{
		specialShippingCharges = SHIPPING_COST; 
	}
	else
	{
		double additionalShippingCost = std::stod(input); 
		specialShippingCharges = SHIPPING_COST + additionalShippingCost;

	}
}

void OrderStatus::CreateOrderDetails(int spoolsOrdered, int currentStock, double specialShippingCharges = SHIPPING_COST)
{
	
	int spoolsAvailableToShip, spoolsNeeded;

	if (spoolsOrdered > currentStock)
	{
		spoolsAvailableToShip = currentStock;
		spoolsNeeded = spoolsOrdered - currentStock;

	}
	else
	{
		spoolsAvailableToShip = spoolsOrdered;
		spoolsNeeded = 0;
	}
	
	double totalShippingCost = specialShippingCharges * spoolsAvailableToShip;
	double sellingPriceReadyToShip = spoolsAvailableToShip * SPOOL_COST;
	double shippingReadyToShip = spoolsAvailableToShip * specialShippingCharges;

	double total = sellingPriceReadyToShip + shippingReadyToShip;
	
	// Display the results
	std::cout << "Spools ready to ship: " << spoolsAvailableToShip << std::endl;
	std::cout << "Spools on backorder: " << spoolsNeeded << std::endl;
	std::cout << "Total selling price: $" << sellingPriceReadyToShip << std::endl;
	std::cout << "Total shipping charges: $" << shippingReadyToShip << std::endl;
	std::cout << "Total order cost: $" << total << std::endl;
}