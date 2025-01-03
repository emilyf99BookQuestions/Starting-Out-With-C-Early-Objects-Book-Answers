#pragma once

class Population {
	private:
		int currentPopulation;
		int annualBirths;
		int annualDeaths;

	public:
		// Constructors
		Population(int currentPopulation = 2, int annualBirths = 0, int annualDeaths = 0);

		// Setters
		void setPopulation(int populationInput);
		void setBirths(int birthInput);
		void setDeaths(int deathInput);

		// Other Methods
		float getBirthRate(int numberOfBirths, int population);
		float getDeathRate(int numberOfDeaths, int population);
		void display();

};