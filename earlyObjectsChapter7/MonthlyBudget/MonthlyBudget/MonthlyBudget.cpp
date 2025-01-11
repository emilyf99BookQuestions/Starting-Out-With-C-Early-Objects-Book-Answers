#include "MonthlyBudget.h"
#include <iostream>

MonthlyBudget::MonthlyBudget()
    : housing(1200.0),
      utilities(215.0),
      householdExpenses(65.0),
      transportation(50.0),
      food(250.0),
      medical(30.0),
      insurance(100.0),
      entertainment(120.0),
      clothing(75.0),
      misc(50.0) {}

void MonthlyBudget::getInput()
{
    std::cout << "Enter actual spending for each category:\n";
    std::cout << "Housing: "; std::cin >> housing;
    std::cout << "Utilities: "; std::cin >> utilities;
    std::cout << "Household Expenses: "; std::cin >> householdExpenses;
    std::cout << "Transportation: "; std::cin >> transportation;
    std::cout << "Food: "; std::cin >> food;
    std::cout << "Medical: "; std::cin >> medical;
    std::cout << "Insurance: "; std::cin >> insurance;
    std::cout << "Entertainment: "; std::cin >> entertainment;
    std::cout << "Clothing: "; std::cin >> clothing;
    std::cout << "Miscellaneous: "; std::cin >> misc;
}
