#pragma once
#include <string>

class MovieData
{
private:
	std::string title;
	std::string director;
	int releaseYear;
	int runningTime;
	double productionCost;
	double revenueFirstYear;

public:
	// Constructor
	MovieData(std::string title, std::string director, int releaseYear, int runningTime,
		double productionCost, double revenueFirstYear);

	// Other Methods
	void display() const;

};
