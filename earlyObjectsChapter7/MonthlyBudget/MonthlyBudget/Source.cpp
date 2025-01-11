#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>
#include "MonthlyBudget.h"

// Function prototypes
void placeCursor(HANDLE screen, int row, int col);
void displayPrompts(HANDLE screen, const MonthlyBudget& budget);
void getUserInput(HANDLE screen, MonthlyBudget& actual);
void displayResults(HANDLE screen, const MonthlyBudget& budget, const MonthlyBudget& actual);

int main()
{
	MonthlyBudget budget;
	MonthlyBudget actual;

	// Get the handle to standard output (the console)
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	displayPrompts(screen, budget);
	getUserInput(screen, actual);
	displayResults(screen, budget, actual);

	return 0;
}

void placeCursor(HANDLE screen, int row, int col) {
    COORD position;
    position.Y = row;
    position.X = col;
    SetConsoleCursorPosition(screen, position);
}

void displayPrompts(HANDLE screen, const MonthlyBudget& budget) {
    placeCursor(screen, 3, 25);
    std::cout << "******* Monthly Budget Form *******";

    const std::string categories[] = { "Housing", "Utilities", "Household Expenses",
        "Transportation", "Food", "Medical", "Insurance",
        "Entertainment", "Clothing", "Miscellaneous" };

    const double values[] = { budget.housing, budget.utilities, budget.householdExpenses,
        budget.transportation, budget.food, budget.medical, budget.insurance,
        budget.entertainment, budget.clothing, budget.misc };

    for (int i = 0; i < 10; i++) {
        placeCursor(screen, 5 + i * 2, 10);
        std::cout << std::setw(20) << std::left << categories[i] << ": Budgeted $" << std::setw(7) << std::right << std::fixed << std::setprecision(2) << values[i];
        placeCursor(screen, 5 + i * 2, 50);
        std::cout << "Spent: ";
    }
}

void getUserInput(HANDLE screen, MonthlyBudget& actual) {
    double* fields[] = { &actual.housing, &actual.utilities, &actual.householdExpenses,
        &actual.transportation, &actual.food, &actual.medical, &actual.insurance,
        &actual.entertainment, &actual.clothing, &actual.misc };

    for (int i = 0; i < 10; i++) {
        placeCursor(screen, 5 + i * 2, 57);
        std::cin >> *fields[i];
    }
}

void displayResults(HANDLE screen, const MonthlyBudget& budget, const MonthlyBudget& actual) {
    double totalBudget = 0, totalSpent = 0;

    const double* budgetFields[] = { &budget.housing, &budget.utilities, &budget.householdExpenses,
        &budget.transportation, &budget.food, &budget.medical, &budget.insurance,
        &budget.entertainment, &budget.clothing, &budget.misc };

    const double* actualFields[] = { &actual.housing, &actual.utilities, &actual.householdExpenses,
        &actual.transportation, &actual.food, &actual.medical, &actual.insurance,
        &actual.entertainment, &actual.clothing, &actual.misc };

    placeCursor(screen, 26, 0);
    std::cout << "Category            Budgeted       Spent         Over/Under";

    for (int i = 0; i < 10; i++) {
        double overUnder = *budgetFields[i] - *actualFields[i];
        totalBudget += *budgetFields[i];
        totalSpent += *actualFields[i];

        placeCursor(screen, 27 + i, 0);
        std::cout << std::setw(20) << std::left << i
            << std::setw(15) << std::right << std::fixed << std::setprecision(2) << *budgetFields[i]
            << std::setw(15) << std::right << *actualFields[i]
            << std::setw(15) << std::right << overUnder;
    }

    placeCursor(screen, 40, 0);
    std::cout << "Total Budgeted: $" << totalBudget << " | Total Spent: $" << totalSpent
        << " | Total Over/Under: $" << (totalBudget - totalSpent);
}