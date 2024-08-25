#include "Population.h"

// Question Eighteen
// Question Nineteen
void Population::PopulationStart() {
	int startingSize = GetStartingSize();
	double birthRate = GetBirthRate();
	double deathRate = GetDeathRate();
	int numberOfYears = GetYears();

	int peopleJoining = GetPeopleJoining();
	int peopleLeaving = GetPeopleLeaving();

	DisplayStartingPopulation(startingSize);
	CreatePopulationData(startingSize, birthRate, deathRate, numberOfYears, peopleJoining, peopleLeaving);

	GetFuturePrediction(startingSize, birthRate, deathRate, peopleJoining, peopleLeaving);
}

int Population::GetStartingSize()
{
	int population = -1;
	while (population < 2)
	{
		std::string populationString;
		std::cout << "\nEnter the starting size of the population (Must be 2 or greator): ";
		std::cin >> populationString;

		population = std::stoi(populationString);

		if (population < 2)
		{
			std::cout << "\nError, Starting population cannot be less than two.";
		}
	}
	return population;
}

double Population::GetBirthRate()
{
	std::string birthRateString;
	std::cout << "\nEnter the Birth Rate of the population: ";
	std::cin >> birthRateString;
	double birthRate = std::stod(birthRateString);
	return birthRate;
}

double Population::GetDeathRate()
{
	std::string deathRateString;
	std::cout << "\nEnter the Death Rate of the population: ";
	std::cin >> deathRateString;
	double deathRate = std::stod(deathRateString);
	return deathRate;
}

int Population::GetYears() 
{
	int years = -1;
	while (years < 1)
	{
		std::string yearsString;
		std::cout << "\nEnter the amount of years to run the simulation. (Minimum 1): ";
		std::cin >> yearsString;

		years = std::stoi(yearsString);

		if (years < 1)
		{
			std::cout << "\nError, Years cannot be less than one.";
		}
	}
	return years;
}

void Population::DisplayStartingPopulation(int startingPopulation)
{
	std::cout << "\nThe Starting Population is " << startingPopulation;
}

void Population::DisplayNewPopulation(int year, int newPopulation)
{
	std::cout << "\nAfter year " << year << ", The population is " << newPopulation;
}

void Population::CreatePopulationData(int startingSize, double birthRate,
	double deathRate, int numberOfYears, int peopleJoining, int peopleLeaving)
{
	for (int year = 1; year <= numberOfYears; year++) {
		startingSize = GetNewPopulation(startingSize, birthRate, deathRate, peopleJoining, peopleLeaving);
		DisplayNewPopulation(year, startingSize);
	}
}

int Population::GetNewPopulation(int startingSize, double birthRate, double deathRate, int peopleJoining, int peopleLeaving)
{
	double births = startingSize * birthRate;
	double deaths = startingSize * deathRate;
	int newPopulation = std::round(startingSize + births - deaths + peopleJoining - peopleLeaving);
	return newPopulation;
}

int Population::GetPeopleJoining()
{
	std::string peopleJoiningString;
	std::cout << "\nEnter the amount of people who moved into the population: ";
	std::cin >> peopleJoiningString;
	double peopleJoining = std::stoi(peopleJoiningString);
	return peopleJoining;
}

int Population::GetPeopleLeaving()
{
	std::string peopleLeavingString;
	std::cout << "\nEnter the amount of people who left the population: ";
	std::cin >> peopleLeavingString;
	double peopleLeaving = std::stoi(peopleLeavingString);
	return peopleLeaving;
}

void Population::GetFuturePrediction(int startingSize, double birthRate,
	double deathRate, int peopleJoining, int peopleLeaving)
{
	const int FUTURE_YEARS = 100;
	for (int year = 1; year <= FUTURE_YEARS; year++) {
		startingSize = GetNewPopulation(startingSize, birthRate, deathRate, peopleJoining, peopleLeaving);
	}
	std::cout << "\nAfter " << FUTURE_YEARS << " years the population should be " << startingSize;
}
