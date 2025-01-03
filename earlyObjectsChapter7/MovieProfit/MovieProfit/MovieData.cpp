#include "MovieData.h"
#include <iostream>

MovieData::MovieData(std::string titleInput, std::string directorInput, int releaseYearInput, int runningTimeInput,
	double productionCostInput , double revenueFirstYearInput)
{
	title = titleInput;
	director = directorInput;
	releaseYear = releaseYearInput;
	runningTime = runningTimeInput;
	productionCost = productionCostInput;
	revenueFirstYear = revenueFirstYearInput;
}

void MovieData::display() const
{
	std::cout << "\nMovie Title: " << title << "\nDirector: " << director << "\nRelease Year: " << releaseYear
		<< "\nRunning Time: " << runningTime << " mins" << "\nProduction Cost: $" << productionCost << "\nFirst Year Revenue: $"
		<< revenueFirstYear << "\nProfit: $" << revenueFirstYear - productionCost << std::endl;
}


