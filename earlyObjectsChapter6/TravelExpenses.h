#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

// Question Twenty
class TravelExpenses {
public:
	static void TravelExpensesStart();
private:
	static std::string GetDate(std::string prompt);
	static int GetNightsAway();
	static double GetCost(std::string prompt);
	static double GetMilesDrivenCost();
	static double GetHotelCost(int nightsAway);
	static void GenerateReport(std::string startDate, std::string endDate, int nightsAway,
		double airfareCost, double carRentalCost, double milesDrivenCost,
		double parkingFees, double taxiFees, double registrationFees,
		double hotelExpenses, double mealFees);
};