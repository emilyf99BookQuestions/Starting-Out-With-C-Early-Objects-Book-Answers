#pragma once
#include <iostream>
#include <string>

// Question Eighteen
// Question Nineteen
class Population {
public:
	static void PopulationStart();
private:
	static int GetStartingSize();
	static double GetBirthRate();
	static double GetDeathRate();
	static int GetYears();
	static void DisplayStartingPopulation(int startingPopulation);
	static void DisplayNewPopulation(int year, int newPopulation);
	static void CreatePopulationData(int startingSize, double birthRate, double deathRate, int numberOfYears, int peopleJoining, int peopleLeaving);
	static int GetNewPopulation(int startingSize, double birthRate, double deathRate, int peopleJoining, int peopleLeaving);

	static int GetPeopleJoining();
	static int GetPeopleLeaving();
	static void GetFuturePrediction(int startingSize, double birthRate,
		double deathRate,int peopleJoining, int peopleLeaving);
};