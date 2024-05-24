#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

void GreatestAndLeast();
void StudentLineUp();
void RateOfInflation();
void Population();
void MathTutorV3();
void HotelSuitesOccupancy();
void RectangleDisplay();
void PatternDisplay();
void TriangleDisplay();
void DiamondDisplay();
void SalesBarChart();
void SavingsAccountBalance();

//Question 18 Extra
void Addition(int number1,int number2);
void Subtraction(int number1, int number2);
void Multiplication(int number1, int number2);
void AnswerChecker(int number1, int number2);

//Question 25 Extra
double Deposits(double startingBalance);
double Withdraws(double withdrawBalance);
double Interest(double annualInterest, double startingBalance, double withdrawBalance);

int main()
{
	SavingsAccountBalance();
	return 0;
}

//Question 14
void GreatestAndLeast()
{
	const int SENTINEL = -99;
	int number = 0;
	std::vector<int> numberList;

	std::cout << "Enter a number to add to the list, use -99 to end the list. ";

	while (number != SENTINEL)
	{
		std::cout << "\nEnter Number: ";
		std::cin >> number;

		if (number == SENTINEL) { break; }
		numberList.push_back(number);
	}

	std::sort(numberList.begin(), numberList.end());
	for (auto i = numberList.begin(); i != numberList.end(); ++i)
	{
		std::cout << " " << *i;
	}
}

//Question 15
void StudentLineUp()
{
	int numberOfStudents = 0;

	do
	{
		std::cout << "\nEnter a number for total number of students (1 - 20): ";
		std::cin >> numberOfStudents;

		if (numberOfStudents < 1 || numberOfStudents > 20)
		{
			std::cout << "\nNumber must be between 1 and 20.";
		}
		else
		{
			std::vector<std::string> studentList(numberOfStudents);
			std::string studentName = "";
			
			for (int i = 0; i < numberOfStudents; ++i)
			{
				std::cout << "\nEnter student number " << i + 1 << "\'s name: ";
				std::cin >> studentName;
				studentList[i] = studentName;
			}
			std::sort(studentList.begin(), studentList.end());
			std::cout << "\nThe person at the front is " << studentList.front();
			std::cout << "\nThe person at the end is " << studentList.back();
		}
	} 
	while (numberOfStudents < 1 || numberOfStudents >= 20);
}

//Question 16
void RateOfInflation()
{
	double inflationRate = 0.0;
	const int STARTING_MONEY = 1000;
	do
	{
		std::cout << "Enter a annual inflation rate between 1 and 10 Percent. ";
		std::cin >> inflationRate;

		if (inflationRate < 1.0 || inflationRate > 10.0)
		{
			std::cout << "\nInflation rate must be between 1 and 10 percent.";
		}
		else
		{
			std::cout << "\nValue of $1000 over 10 Years."
				<< "\nYear                   Value"
				<< "\n----------------------------";

			double value = STARTING_MONEY;
			double inflationDecimal = inflationRate / 100.0;

			for (int year = 1; year <= 10; year++)
			{
				value /= (1.0 + inflationDecimal);
				std::cout <<  std::fixed << std::setprecision(2) <<
					"\n " << year << std::setw(20) << "$" << value;
			}
		}
	} while (inflationRate < 1.0 || inflationRate > 10.0);
}

//Question 17
void Population()
{
	int startingNumber{ 0 };
	double populationIncreasePercent{ 0.0 };
	int daysToMultiply{ 0 };

	do
	{
		std::cout << "\nEnter the starting population number: ";
		std::cin >> startingNumber;

		std::cout << "\nEnter a percentage for the daily increase:  ";
		std::cin >> populationIncreasePercent;

		std::cout << "\nEnter the amount of days for the simulation: ";
		std::cin >> daysToMultiply;

		if (startingNumber < 2)
		{
			std::cout << "\nStarting population must be more than 2.";
		}
		else if (populationIncreasePercent < 0)
		{
			std::cout << "\nPercentage increase cannot be below 0 Percent.";
		}
		else if (daysToMultiply < 1)
		{
			std::cout << "\nDays cannot be less than One";
		}
		else
		{
			double population = startingNumber;
			double percentConversion = populationIncreasePercent / 100;
			std::cout << "\nDay Count             Population"
					  << "\n--------------------------------";

			for (int day = 1; day <= daysToMultiply; day++)
			{
				population = round(population + (population * percentConversion));
				std::cout << "\n " << day << std::setw(25) << population;

			}
		}
	} while (startingNumber < 2 || populationIncreasePercent < 0 || daysToMultiply < 1);
}

//Question 18
enum class MenuSelector
{
	ADDITION = 1,
	SUBTRACTION,
	MULTIPLICATION,
	QUIT
};

void MathTutorV3()
{
	int choice = 0;

	do
	{
		std::cout << "\nSelect a choice for a math problem, or 4 to Quit.";
		std::cout << "\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Quit\n";
		std::cin >> choice;

		if (choice < 1 || choice > 4)
		{
			std::cout << "\nChoice is not within range, please select again.";
		}
		else 
		{
			int userAnswer;
			srand(time(0));
			int numberOne = rand() % 9 + 1;
			int numberTwo = rand() % 9 + 1;

			MenuSelector menuChoice = static_cast<MenuSelector>(choice);
			switch (menuChoice)
			{
			case MenuSelector::ADDITION:
				Addition(numberOne, numberTwo);
				break;
			case MenuSelector::SUBTRACTION:
				Subtraction(numberOne, numberTwo);
				break;
			case MenuSelector::MULTIPLICATION:
				Multiplication(numberOne, numberTwo);
				break;
			case MenuSelector::QUIT:
				break;
			}
		
		}
	} while (choice != static_cast<int>(MenuSelector::QUIT));
}

void Addition(int numberOne, int numberTwo)
{
	int total = numberOne + numberTwo;
	int userAnswer;
	std::cout << "Math Question:" << "\n +     " << numberOne << std::endl << "       " << numberTwo 
		<< std::endl << "----------" << "\n\nEnter your answer: ";
	std::cin >> userAnswer;

	AnswerChecker(total, userAnswer);
}

void Subtraction(int numberOne, int numberTwo)
{
	int total = numberOne - numberTwo;
	int userAnswer;
	std::cout << "Math Question:" << "\n -     " << numberOne << std::endl << "       " << numberTwo
		<< std::endl << "----------" << "\n\nEnter your answer: ";
	std::cin >> userAnswer;

	AnswerChecker(total, userAnswer);
}

void Multiplication(int numberOne, int numberTwo)
{
	int total = numberOne * numberTwo;
	int userAnswer;
	std::cout << "Math Question:" << "\n *     " << numberOne << std::endl << "       " << numberTwo
		<< std::endl << "----------" << "\n\nEnter your answer: ";
	std::cin >> userAnswer;

	AnswerChecker(total, userAnswer);
}

void AnswerChecker(int total, int userAnswer)
{
	if (userAnswer == total)
	{
		std::cout << "Congratulations! You got the answer correct!\n";
	}
	else
	{
		std::cout << "That\'s not correct. The answer was " << total << ".\n";
	}
}

//Question 19
void HotelSuitesOccupancy()
{
	const int SUITES_TOTAL = 120;
	const int SUITES_PER_FLOOR = 20;
	int totalOccupied = 0;

	for (int floor = 10; floor <= 16; floor++)
	{
		if (floor == 13) { continue; }

		int occupancy;
		do
		{
			std::cout << "\nEnter the number of suits occupied on floor " << floor << " (0 - 20 Suites): ";
			std::cin >> occupancy;

			if (occupancy < 0 || occupancy > SUITES_PER_FLOOR)
			{
				std::cout << "\nPlease enter a number between 0 and 20.";
			}

		} while (occupancy < 0 || occupancy > SUITES_PER_FLOOR);

		totalOccupied += occupancy;
	}
	double occupancyRate = ceil((static_cast<double>(totalOccupied) / SUITES_TOTAL) * 100.0);
	std::cout << "\nThere are " << SUITES_TOTAL << " suites total.\n" << totalOccupied << " are occupied.\n"
		<< "The occupancy rate is: " << occupancyRate << "%." << std::endl;
}

//Question 20
void RectangleDisplay()
{
	int number1, number2;
	int length{ 0 }, width{ 0 };

	std::cout << "\nEnter two numbers between 2 and 10.";
	do
	{
		std::cout << "\nNumber 1: ";
		std::cin >> number1;

		std::cout << "\nNumber 2: ";
		std::cin >> number2;

		if (number1 < 2 || number1 > 10)
		{
			std::cout << "\nFirst number must be between 2 and 10.";
		}
		else if (number2 < 2 || number2 > 10)
		{
			std::cout << "\nSecond number must be between 2 and 10.";
		}
		else
		{
			if (number1 < number2)
			{
				length = number2;
				width = number1;
			}
			else
			{
				length = number1;
				width = number2;
			}

			for (int i = 0; i < width; i++)
			{
				std::cout << "\n";

				for (int j = 0; j < length; j++)
				{
					std::cout << "X";
				}
			}
		}
	} while ((number1 < 2 || number1 > 10) || (number2 < 2 || number2 > 10));
}

//Question 21
void PatternDisplay()
{
	const int MAX_PLUS = 10;
	const int MIN_PLUS = 1;

	// Pattern A
	for (int i = MIN_PLUS; i <= MAX_PLUS; ++i) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "+";
		}
		std::cout << std::endl;
	}

	std::cout << "\n\n";

	// Pattern B
	for (int k = MAX_PLUS; k >= MIN_PLUS; --k) {
		for (int l = 1; l <= k; ++l) {
			std::cout << "+";
		}
		std::cout << std::endl;
	}
}

//Question 22
void TriangleDisplay()
{
	const int MAX_PLUS = 7;
	const int MIN_PLUS = 1;
	for (int i = MIN_PLUS; i <= MAX_PLUS; i += 2) {
		for (int j = 1; j <= i; ++j) {
			std::cout << "+";
		}
		std::cout << std::endl;
	}

	for (int k = MAX_PLUS - 2; k >= MIN_PLUS ;  k -= 2) {
		for (int l = 1; l <= k; ++l) {
			std::cout << "+";
		}
		std::cout << std::endl;
	}
}

//Question 23
void DiamondDisplay()
{
	const int MAX_PLUS = 7;
	const int MIN_PLUS = 1;

	for (int i = MIN_PLUS; i <= MAX_PLUS; i += 2) {
		for (int j = 0; j < (MAX_PLUS - i) / 2; ++j) {
			std::cout << " ";
		}
		for (int k = 0; k < i; ++k) {
			std::cout << "+";
		}
		std::cout << std::endl;
	}

	for (int i = MAX_PLUS - 2; i >= MIN_PLUS; i -= 2) {
		for (int j = 0; j < (MAX_PLUS - i) / 2; ++j) {
			std::cout << " ";
		}
		for (int k = 0; k < i; ++k) {
			std::cout << "+";
		}
		std::cout << std::endl;
	}
}

//Question 24
void SalesBarChart()
{
	const int STAR_POINTS = 100;
	int store1, store2, store3;

	std::cout << "\nEnter today\'s sales for each three stores (Rounded Nearest 100).\nStore 1: $";
	std::cin >> store1;
	std::cout << "\nStore 2: $";
	std::cin >> store2;
	std::cout << "\nStore 3: $";
	std::cin >> store3;

	std::cout << "\nDAILY SALES\n(each * = $100)\nStore 1: ";

	for (int i=0; i <= (store1 / STAR_POINTS); i++){std::cout << "*";}
	std::cout << "\nStore 2: ";
	for (int j=0; j <= (store2 / STAR_POINTS); j++){std::cout << "*";}
	std::cout << "\nStore 3: ";
	for (int k=0; k <= (store3 / STAR_POINTS); k++){std::cout << "*";}
}

//Question 25
void SavingsAccountBalance()
{
	const int MONTH_PERIOD = 3;
	double startingBalance = 0.00;
	double annualInterestRate = 0.0;
	double currentBalance = 0.0;
	double totalDeposits = 0.0;
	double totalWithdrawals = 0.0;
	double totalInterest = 0.0;

	std::cout << "\nWhat is the starting balance of the account?: $";
	std::cin >> startingBalance;
	currentBalance = startingBalance;

	std::cout << "\nWhat is the annual interest rate (percent): ";
	std::cin >> annualInterestRate;
	annualInterestRate /= 100.0; // Convert percentage to decimal

	for (int month = 1; month <= MONTH_PERIOD; month++)
	{
		std::cout << "\nMonth " << month;

		double monthlyDeposit = Deposits(currentBalance);
		double newBalanceAfterDeposit = currentBalance + monthlyDeposit;
		totalDeposits += monthlyDeposit;

		double monthlyWithdrawal = Withdraws(newBalanceAfterDeposit);
		double newBalanceAfterWithdrawal = newBalanceAfterDeposit - monthlyWithdrawal;
		totalWithdrawals += monthlyWithdrawal;

		double monthlyInterest = Interest(annualInterestRate, currentBalance, newBalanceAfterWithdrawal);
		double newBalanceAfterInterest = newBalanceAfterWithdrawal + monthlyInterest;
		totalInterest += monthlyInterest;

		currentBalance = newBalanceAfterInterest;
	}

	std::cout << std::fixed << std::setprecision(2) << "\n3 Month Period Balance Table"
		<< "\n---------------------------------------------"
		<< "\nStarting Balance" << std::setw(20) << "$" << startingBalance
		<< "\nTotal Deposits" << std::setw(20) << "$" << totalDeposits
		<< "\nTotal Withdrawals" << std::setw(20) << "$" << totalWithdrawals
		<< "\nTotal Interest" << std::setw(20) << "$" << totalInterest
		<< "\nFinal Balance" << std::setw(20) << "$" << currentBalance << std::endl;
}

double Deposits(double currentBalance)
{
	double deposits = -1.0;
	do
	{
		std::cout << "\nWhat are your deposits for this month? :$";
		std::cin >> deposits;

		if (deposits < 0.00)
		{
			std::cout << "\nDeposits cannot be a negative number.";
		}
	} while (deposits < 0.00);
	return deposits;
}

double Withdraws(double currentBalance)
{
	double withdraws = -1;
	do
	{
		std::cout << "\nWhat are your withdrawals for this month? :$";
		std::cin >> withdraws;

		if (withdraws < 0)
		{
			std::cout << "\nWithdrawals cannot be a negative number.";
		}
		else if (withdraws > currentBalance)
		{
			std::cout << "\nYou cannot withdraw more than is in the account.";
		}
	} while (withdraws < 0 || withdraws > currentBalance);
	return withdraws;
}

double Interest(double annualInterestRate, double startingBalance, double endingBalance)
{
	double monthlyInterestRate = annualInterestRate / 12.0;
	double averageBalance = (startingBalance + endingBalance) / 2.0;
	double interest = monthlyInterestRate * averageBalance;
	return interest;
}
