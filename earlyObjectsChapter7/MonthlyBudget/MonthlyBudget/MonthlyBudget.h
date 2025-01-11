#pragma once

struct MonthlyBudget {
	double housing;
	double utilities;
	double householdExpenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double misc;

	MonthlyBudget();

	void getInput();
};