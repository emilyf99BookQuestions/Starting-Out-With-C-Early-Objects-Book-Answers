#include <iostream>
#include <iomanip>
#include <cmath>

void ASCIICodes();
void SumOfNumbers();
void DistanceTraveled();
void CelciusFahrenheitTable();
void SpeedConversionChart();
void OceanLevels();
void CircleAreas();
void PenniesForPay();
void WeightLoss();
void CaloriesBurned();
void MembershipFeeIncrease();
void RandomNumberGuessingGame();
void GameEnhancement();

int main()
{
	GameEnhancement();
}

//Question 1
void ASCIICodes()
{
	for (int i = 32; i <= 127; i++)
	{
		std::cout << static_cast<char>(i) << ' ';
		
		if ((i - 31) % 16 == 0)
		{
			std::cout << "\n";
		}
	}
}

//Question 2
void SumOfNumbers()
{
	int userValue = 0;
	int totalNumber = 0;
	do
	{
		std::cout << "Enter a positive number: ";
		std::cin >> userValue;

		if (userValue <= 0)
		{
			std::cout << "\nValue entered must be greater that 1";
		}
		else
		{
			for (int i = 1; i <= userValue; i++)
			{
				totalNumber += i;
			}
			std::cout << "\n" << totalNumber;
		}
	} 
	while (userValue <= 0);
}

//Question 3
void DistanceTraveled()
{
	int speedMPH = 0;
	int hoursTraveled = 0;

	std::cout << "\nEnter the speed of the vehicle (Miles Per Hour): ";
	std::cin >> speedMPH;

	std::cout << "\nEnter the amount of hours that have travelled: ";
	std::cin >> hoursTraveled;

	std::cout << "\nHours                     Miles Travelled"
			  << "\n-----------------------------------------";
	
	for (int i = 1; i <= hoursTraveled; i++)
	{
		int distance = i * speedMPH;
		std::cout << "\n  " << i << std::setw(28) << distance;
	}
}

//Question 4
void CelciusFahrenheitTable()
{
	double celcius = 0;
	std::cout << "\nCelcius        Fahrenheit"
			  << "\n-------------------------";

	for (celcius; celcius <= 30; celcius++)
	{
		double fahrenheit = ((9.0 / 5.0) * celcius) + 32;
		std::cout << "\n" << std::setw(4) << celcius << " " << std::setw(20) << fahrenheit;
	}
}

//Question 5
void SpeedConversionChart()
{
	std::cout << "\nKPH                   MPH"
		      << "\n-------------------------";

	for (int KiloPerHour = 40; KiloPerHour <= 120; KiloPerHour += 10)
	{
		double MilesPerHour = KiloPerHour * 0.6214;
		std::cout << "\n " << KiloPerHour << std::setw(20) << MilesPerHour;
	}
}

//Question 6
void OceanLevels()
{
	const double MIL_RISING = 3.1;
	double total = 0.0;

	std::cout << "\nYear             CM Risen"
			  << "\n-------------------------";

	for (int year = 1; year <= 25; year++)
	{
		total = total += MIL_RISING;
		std::cout << "\n " << year << std::setw(20) << total;
	}
}

//Question 7 
void CircleAreas()
{
	const double PI = 3.14;
	std::cout << "\nRadius             Area"
		<< "\n-------------------------";

	for (int radius = 1; radius <= 8; radius *= 2)
	{
		double area = PI * pow(radius, 2);
		std::cout << "\n " << radius << std::setw(20) << area;
	}
}

//Question 8
void PenniesForPay()
{
	int daysWorked = 0;
	do
	{
		std::cout << "\nHow many days did you work this month?";
		std::cin >> daysWorked;

		if (daysWorked < 1 || daysWorked > 31)
		{
			std::cout << "\nEnter a valid number of days.";
		}
		else
		{
			double pennies = 1.0;
			double salary = 0.0; 

			std::cout << "\nDay Salary             On Going Salary"
					  << "\n--------------------------------------";

			for (int day = 1; day <= daysWorked; day++)
			{
				salary += pennies;
				std::cout << std::fixed << std::setprecision(2)
					<< "\n$" << pennies / 100.0 << std::setw(20) << "$" << salary / 100.0;

				pennies *= 2;
			}
		}
	} while (daysWorked < 1 || daysWorked > 31);
}

//Question 9
void WeightLoss()
{
	int weightInPounds = 0;
	const int  POUNDS_LOST_MONTH = 4;
	const int MONTHS = 6;

	std::cout << "Enter your weight in Pounds: ";
	std::cin >> weightInPounds;

	std::cout << "\nIf you cut your Calorie\'s by 500 calorie\'s."
		<< "\nMonth           Total weight at end of month."
		<< "\n---------------------------------------------";

	for (int month = 1; month <= MONTHS; month++)
	{
		weightInPounds -= POUNDS_LOST_MONTH;
		std::cout << "\n" << month << std::setw(20) << weightInPounds;
	} 
}

//Question 10
void CaloriesBurned()
{
	const double CALORIES_PER_MIN = 3.9;
	double caloriesTotal = 0;
	std::cout << "\nMinutes               Calories Burned"
		<< "\n-------------------------------------";

	for (int minutes = 5; minutes <= 30; minutes += 5)
	{
		caloriesTotal = minutes * CALORIES_PER_MIN;
		std::cout << "\n  " << minutes << std::setw(30) << caloriesTotal;
	}
}

//Question 11
void MembershipFeeIncrease()
{
	double membershipFee = 3000.00;
	const double PERCENTAGE_INCREASE = 0.03;

	std::cout << "\nCountry Club Membership Fees"
		<< "\n Year                 Membership Fee"
		<< "\n------------------------------------";

	for (int year = 1; year <= 5; year++)
	{
		membershipFee = membershipFee + (membershipFee * PERCENTAGE_INCREASE);

		std::cout << std::fixed << std::setprecision(2) << 
			"\n  " << year << std::setw(20) << "$" << membershipFee;
	}
}

//Question 12
void RandomNumberGuessingGame()
{
	srand(time(0));
	int computerNumber = 1 + (rand() % 100);
	int userGuess = 0;

	std::cout << "Enter a number between 1 - 100, Guess what number the computer has.";
	do
	{
		std::cin >> userGuess;

		if (userGuess < 1 || userGuess > 100)
		{
			std::cout << "\nNumber must be between 1 and 100.";
		}
		else
		{
			//Too High 
			if (userGuess > computerNumber)
			{
				std::cout << "\nToo high. Try again.";
			}
			//Too Low
			else if (userGuess < computerNumber)
			{
				std::cout << "\nToo low. Try again.";
			}
		}
	} 
	while(computerNumber != userGuess);
	std::cout << "\nCongratulations. You figured out my number.";
}

//Question 13
void GameEnhancement()
{
	srand(time(0));
	int computerNumber = 1 + (rand() % 100);
	int userGuess = 0;
	int guesses = 0;

	std::cout << "Enter a number between 1 - 100, Guess what number the computer has.";
	do
	{
		std::cin >> userGuess;

		if (userGuess < 1 || userGuess > 100)
		{
			std::cout << "\nNumber must be between 1 and 100.";
		}
		else
		{
			//Too High 
			if (userGuess > computerNumber)
			{
				std::cout << "\nToo high. Try again.";
			}
			//Too Low
			else if (userGuess < computerNumber)
			{
				std::cout << "\nToo low. Try again.";
			}
			guesses++;
		}
	} while (computerNumber != userGuess);
	std::cout << "\nCongratulations. You figured out my number.";
	std::cout << "\nYou had " << guesses << " guesses.";
}
