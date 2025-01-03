#include "population.h"
#include <iostream>

Population::Population(int populationInput ,int birthsInput, int deathsInput)
{
	setPopulation(populationInput);
	setBirths(birthsInput);
	setDeaths(deathsInput);
	
}

void Population::setPopulation(int populationInput) 
{ 
	if(populationInput < 2)
	{
		currentPopulation = 2;
	}
	else
	{
		currentPopulation = populationInput;
	}
}

void Population::setBirths(int birthInput) 
{ 
	if (birthInput < 0)
	{
		annualBirths = 0;
	}
	else
	{
		annualBirths = birthInput;
	}
}
void Population::setDeaths(int deathInput) 
{ 
	
	if (deathInput < 0)
	{
		annualDeaths = 0;
	}
	else
	{
		annualDeaths = deathInput;
	}
}

float Population::getBirthRate(int numberOfBirths, int population) { return static_cast<float>(numberOfBirths) / population; }
float Population::getDeathRate(int numberOfDeaths, int population) { return static_cast<float>(numberOfDeaths) / population; }

void Population::display()
{
	float birthRate = getBirthRate(annualBirths, currentPopulation);
	float deathRate = getDeathRate(annualDeaths, currentPopulation);

	std::cout << "Current Population: " << currentPopulation << std::endl;
	std::cout << "Birth Rate: " << birthRate * 100 << "%" << std::endl;
	std::cout << "Death Rate: " << deathRate * 100 << "%" << std::endl;
}
