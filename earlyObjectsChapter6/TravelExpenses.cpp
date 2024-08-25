#include "TravelExpenses.h"


const double MILE_RATE = 0.58;
const double MAXIMUM_PER_NIGHT = 120.00;

// Question Twenty
void TravelExpenses::TravelExpensesStart()
{
	std::string startDate = GetDate("Please enter the start date of the expense period.(DD/MM/YY).");
	std::string endDate = GetDate("Please enter the end date of the expense period. (DD/MM/YY).");
	int nightsAway = GetNightsAway();
	double airfareCost = GetCost("air travel");
	double carRentalCost = GetCost("car hire");
	double milesDrivenCost = GetMilesDrivenCost();
	double parkingFees = GetCost("parking fees");
	double taxiFees = GetCost("taxi cost");
	double registrationFees = GetCost("conference or seminar registration fees");
	double hotelExpenses = GetHotelCost(nightsAway);
	double mealFees = GetCost("meal costs");

	GenerateReport(startDate, endDate, nightsAway, airfareCost, carRentalCost, milesDrivenCost,
					parkingFees, taxiFees, registrationFees, hotelExpenses, mealFees);
}

std::string TravelExpenses::GetDate(std::string prompt)
{
	std::string day, month, year;
	std::cout << prompt;
	std::cout << "\nDay: ";
	std::cin >> day;
	std::cout << "\nMonth: ";
	std::cin >> month;
	std::cout << "\nYear: ";
	std::cin >> year;
	std::string date = day + "/" + month + "/" + year;
	return date;
}

int TravelExpenses::GetNightsAway()
{
	std::string nightsAwayString;
	int nightsAway = -1;

	while (nightsAway < 0)
	{
		std::cout << "\nEnter the amount of nights away: ";
		std::cin >> nightsAwayString;

		nightsAway = std::stoi(nightsAwayString);

		if (nightsAway < 0)
		{
			std::cout << "\nError: Nights away cannot be negative.";
		}
	}
	return nightsAway;
}

double TravelExpenses::GetCost(std::string prompt)
{
	std::string costString;
	double cost = -1.00;
	while (cost < 0.00)
	{
		std::cout << "\nEnter the total cost of " << prompt << ": ";
		std::cin >> costString;

		cost = std::stod(costString);

		if (cost < 0.00)
		{
			std::cout << "\nError: Cost can not be negative.";
		}
	}
	return cost;
}

double TravelExpenses::GetMilesDrivenCost()
{
	std::string milesString;
	int miles = -1;
	while (miles < 0)
	{
		std::cout << "\nEnter the amount of miles driven (If private car used): ";
		std::cin >> milesString;

		miles = std::stod(milesString);

		if (miles < 0)
		{
			std::cout << "\nError: Miles can not be negative.";
		}
	}
	double milesCost = miles * MILE_RATE;
	return milesCost;
}

double TravelExpenses::GetHotelCost(int nightsAway)
{
	std::string perNightString;
	double perNightRate = -1.00;

	while (perNightRate < 0.00)
	{
		std::cout << "\nEnter the nightly rate for your hotel: ";
		std::cin >> perNightString;

		perNightRate = std::stod(perNightString);

		if(perNightRate < 0.00)
		{
			std::cout << "\nError: Nightly rate cannot be a negative number.";
		}

		if (perNightRate > MAXIMUM_PER_NIGHT)
		{
			std::cout << "\nYou can only get reimbursed up to $120.00 a night.Rate set to maximum.";
			perNightRate = MAXIMUM_PER_NIGHT;
		}
	}
	return perNightRate * nightsAway;
}

void TravelExpenses::GenerateReport(std::string startDate, std::string endDate, int nightsAway,
									double airfareCost, double carRentalCost, double milesDrivenCost,
									double parkingFees, double taxiFees, double registrationFees,
									double hotelExpenses, double mealFees)
{
	std::ofstream expensesReport("ExpensesReport.txt");

	if (!expensesReport) {
		std::cerr << "Error opening file for writing." << std::endl;
		return;
	}

	expensesReport << "\nExpenses Report ----------- " << startDate << " - " << endDate;
	expensesReport << "\nNights Away:          " << nightsAway;
	expensesReport << "\nCost of Air Fares:    $" << std::setw(10) << airfareCost;
	expensesReport << "\nCost of Car Rental:   $" << std::setw(10) << carRentalCost;
	expensesReport << "\nMileage Cost:         $" << std::setw(10) << milesDrivenCost;
	expensesReport << "\nParking Fees:         $" << std::setw(10) << parkingFees;
	expensesReport << "\nTaxi Fees:            $" << std::setw(10) << taxiFees;
	expensesReport << "\nRegistration Fees:    $" << std::setw(10) << registrationFees;
	expensesReport << "\nHotel Fees:           $" << std::setw(10) << hotelExpenses;
	expensesReport << "\nMeal Fees:            $" << std::setw(10) << mealFees;
	expensesReport << "\n---------------------------------";

	double totalCost = airfareCost + carRentalCost + milesDrivenCost + parkingFees
		+ taxiFees + registrationFees + hotelExpenses + mealFees;
	expensesReport << "\nTotal Expenditure:    $" << totalCost;

	std::cout << "\nReport has been generated.";
}
