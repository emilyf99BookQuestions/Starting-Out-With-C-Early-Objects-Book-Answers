#include <iostream>

using namespace std;

void RestaurantSelector();
void RunningTheRace();
void FebruaryDays();
void NextLeapYear();
void BodyMassIndex();
void FatGramCalculator();
void TheSpeedOfSound();
void SpeedOfSoundInGases();
void SpectralAnalysis();
void FreezingAndBoilingPoints();
void MobileServiceProvider();

double GetBill(char plan, int gigsUsed);
double PlanBSaving(double bill, int gigsUsed);
double PlanCSaving(double bill, int gigsUsed);

int main()
{
	MobileServiceProvider();
	return 0;
}

//Question 12
enum class DietaryOption {
	Vegetarian,
	Vegan,
	GlutenFree
};

void RestaurantSelector()
{
	const int NUMBER_OF_RESTAURANTS = 5;
	const int OPTIONS = 3;
	char vegetarian{}, vegan{}, glutenFree{};

	string restaurants[NUMBER_OF_RESTAURANTS] = { "Joe\'s Gourmet Burgers", "Main Street Pizza Company", "Corner Cafe",
												 "Mama\'s Fine Italian", "The Chef\'s Kitchen" };

	bool dietaryOptions[NUMBER_OF_RESTAURANTS][OPTIONS] =
	{
		//Vegetarian, Vegan, Gluten-Free
		{false, false, false},
		{true, false, true},
		{true, true, true},
		{true, false, false},
		{true, true, true}
	};
	
	do
	{
		cout << "Enter Y/N if there is any Vegetarians, Vegans or Gluten Free Diners.\nVegetarian: ";
		cin >> vegetarian;
		cout << "\nVegan: ";
		cin >> vegan;
		cout << "\nGluten Free: ";
		cin >> glutenFree;

		if((vegetarian != 'Y' && vegetarian != 'N' && vegetarian != 'y' && vegetarian != 'n')
			|| (vegan != 'Y' && vegan != 'N' && vegan != 'y' && vegan != 'n')
			|| (glutenFree != 'Y' && glutenFree != 'N' && glutenFree != 'y' && glutenFree != 'n'))
		{
			cout << "\nValues must be Yes or No only. Try Y or N.";
		}
		else
		{
			// Convert user input to boolean values
			bool isVegetarian = (vegetarian == 'Y' || vegetarian == 'y');
			bool isVegan = (vegan == 'Y' || vegan == 'y');
			bool isGlutenFree = (glutenFree == 'Y' || glutenFree == 'y');

			cout << "\nRestaurants where the group can go:" << endl;
			for (int i = 0; i < NUMBER_OF_RESTAURANTS; ++i) {
				if ((!isVegetarian || dietaryOptions[i][static_cast<int>(DietaryOption::Vegetarian)]) &&
					(!isVegan || dietaryOptions[i][static_cast<int>(DietaryOption::Vegan)]) &&
					(!isGlutenFree || dietaryOptions[i][static_cast<int>(DietaryOption::GlutenFree)])) {
					cout << restaurants[i] << endl;
				}
			}
		}
	} 
	while ((vegetarian != 'Y' && vegetarian != 'N' && vegetarian != 'y' && vegetarian != 'n')
		|| (vegan != 'Y' && vegan != 'N' && vegan != 'y' && vegan != 'n')
		|| (glutenFree != 'Y' && glutenFree != 'N' && glutenFree != 'y' && glutenFree != 'n'));
}

//Question 13
void RunningTheRace()
{
	string runner1Name, runner2Name, runner3Name;
	double runner1Time{ -1.0 }, runner2Time{ -1.0 }, runner3Time{ -1.0 };

	do {
		cout << "Enter the names of three runners in the race.\nRunner One: ";
		cin >> runner1Name;
		cout << "Runner Two: ";
		cin >> runner2Name;
		cout << "Runner Three: ";
		cin >> runner3Name;

		cout << "\nNow please enter the times for their races.\n" << runner1Name << "\'s time: ";
		cin >> runner1Time;
		cout << "\n" << runner2Name << "\'s time: ";
		cin >> runner2Time;
		cout << "\n" << runner3Name << "\'s time: ";
		cin >> runner3Time;

		if (runner1Time < 0 || runner2Time < 0 || runner3Time < 0) { cout << "\nTime entered cannot be negative."; }
		else
		{
			if (runner1Time < runner2Time && runner1Time < runner3Time) {
				cout << runner1Name << " came in first place.\n";
				if (runner2Time < runner3Time) {
					cout << runner2Name << " came in second place.\n";
					cout << runner3Name << " came in third place.\n";
				}
				else {
					cout << runner3Name << " came in second place.\n";
					cout << runner2Name << " came in third place.\n";
				}
			}
			else if (runner2Time < runner1Time && runner2Time < runner3Time) {
				cout << runner2Name << " came in first place.\n";
				if (runner1Time < runner3Time) {
					cout << runner1Name << " came in second place.\n";
					cout << runner3Name << " came in third place.\n";
				}
				else {
					cout << runner3Name << " came in second place.\n";
					cout << runner1Name << " came in third place.\n";
				}
			}
			else {
				cout << runner3Name << " came in first place.\n";
				if (runner1Time < runner2Time) {
					cout << runner1Name << " came in second place.\n";
					cout << runner2Name << " came in third place.\n";
				}
				else {
					cout << runner2Name << " came in second place.\n";
					cout << runner1Name << " came in third place.\n";
				}
			}
		}
	} 
	while(runner1Time < 0 || runner2Time < 0 || runner3Time < 0);
}

//Question 14
void FebruaryDays()
{
	const int DAYS_IN_FEB = 28;
	const int DAYS_IN_LEAP_YEAR = 29;

	int year;
	bool divisibleBy100 = false;
	bool divisbleBy400 = false;
	bool divisibleBy4 = false;

	cout << "Enter a year: ";
	cin >> year;

	if (year % 100 == 0) { divisibleBy100 = true; }
	if (year % 400 == 0) { divisbleBy400 = true; }
	if (year % 4 == 0) { divisibleBy4 = true; }

	if ((divisibleBy100 && divisbleBy400) || (!divisibleBy100 && divisibleBy4)) {
		cout << "\nThis is a leap year, there is " << DAYS_IN_LEAP_YEAR << " days in February.";
	}
	else {
		cout << "\nThis is not leap year, there is " << DAYS_IN_FEB << " days in February.";
	}
}

//Question 15
void NextLeapYear()
{
	const int DAYS_IN_FEB = 28;
	const int DAYS_IN_LEAP_YEAR = 29;

	int year;
	bool divisibleBy100 = false;
	bool divisbleBy400 = false;
	bool divisibleBy4 = false;
	bool leapYear = false;

	cout << "Enter a year: ";
	cin >> year;

	if (year % 100 == 0) { divisibleBy100 = true; }
	if (year % 400 == 0) { divisbleBy400 = true; }
	if (year % 4 == 0) { divisibleBy4 = true; }

	if ((divisibleBy100 && divisbleBy400) || (!divisibleBy100 && divisibleBy4)) {
		leapYear = true;
	}
	
	if (leapYear)
	{
		cout << "\nThis year is a leap year. Therefore the next leap year will be " << year + 4;
	}
	else {
		int nextLeapYear = year;
		while (!((nextLeapYear % 100 == 0 && nextLeapYear % 400 == 0) || (nextLeapYear % 4 == 0))) {
			nextLeapYear++;
		}
		cout << "\nThe next leap year will be " << nextLeapYear;
	}
}

//Question 16
void BodyMassIndex()
{
	double weightPounds{ 10 }, heightInches{ 10 };
	string BMIString = "undetermined";
	
	do {
		cout << "BMI Calculator\nEnter Weight (Pounds): ";
		cin >> weightPounds;
		cout << "\nEnter Height (Inches): ";
		cin >> heightInches;

		if (weightPounds < 10 || heightInches < 10)
		{
			cout << "\nThe values entered do not seem correct, please try again.\n";
		}
		else
		{
			double BMI = (weightPounds * 703) / (pow(heightInches, 2));
			if (BMI <= 25 && BMI >= 18.5)
			{
				BMIString = "optimal";
			}
			else if (BMI < 18.5)
			{
				BMIString = "underweight";
			}
			else if (BMI > 25)
			{
				BMIString = "overweight";
			}

			cout << "\nYou\'re currently " << BMIString;
		}
	} 
	while (weightPounds < 10 || heightInches < 10);
}

//Question 17
void FatGramCalculator()
{
	double calories{ 20 }, fatGrams{ 25 },fatCalories{ 25 };

	do {
		cout << "FatGram Calculator\nEnter the number of calories in the food: ";
		cin >> calories;
		cout << "\nEnter the number of fat grams in the food: ";
		cin >> fatGrams;

		fatCalories = fatGrams * 9;

		if (calories < fatCalories) {
			cout << "\nThe calories in the food cannot be less than the fat grams.\n";
		}
		else 
		{
			double percentageFromFat = fatCalories / calories;

			cout << fixed;
			cout.precision(1);
			
			cout << "\nThe fat percentage is " << percentageFromFat * 100;
			
			if (percentageFromFat < 0.3)
			{
				cout << "\nThis item is low in fat.";
			}
		}
	} 
	while (calories < fatCalories);
}

//Question 18
enum class Medium {
	Air = 1,
	Water,
	Steel
};
void TheSpeedOfSound()
{
	int choice = 5;
	double numberOfFeet, feetPerSec{ 0 };
	
	do {
		cout << "Speed of Sound Calculator\nEnter your choice:\n1.Air\n2.Water\n3.Steel\n";
		cin >> choice;
		cout << "\nEnter the number of feet the sound wave will travel.";
		cin >> numberOfFeet;

		if (choice < 1 || choice > 3)
		{
			cout << "\nChoice cannot be outside of 1 - 3.";
		}
		else if (numberOfFeet <= 0)
		{
			cout << "\nNumber of feet cannot be 0 or negative.";
		}
		else
		{
			switch (static_cast<Medium>(choice))
			{
			case Medium::Air:
				feetPerSec = 1100;
				break;
			case Medium::Water:
				feetPerSec = 4900;
				break;
			case Medium::Steel:
				feetPerSec = 16400;
				break;
			}
			cout << fixed;
			cout.precision(4);

			double seconds = numberOfFeet / feetPerSec;
			cout << "\nIt will take approx " << seconds << " seconds.";
		}
	} 
	while (choice < 1 || choice > 3 || numberOfFeet <= 0);
}

//Question 19

enum class Gas {
	CarbonDioxide = 1,
	Air,
	Helium,
	Hydrogen
};

void SpeedOfSoundInGases()
{
	int choice = 5;
	double seconds, speed{ 0 }, distance;

	do {
		cout << "Speed of Sound In Gases\nEnter your choice:\n1.Carbon Dioxide\n2.Air\n3.Helium\n4.Hydrogen\n";
		cin >> choice;
	
		if (choice < 1 || choice > 4)
		{
			cout << "\nChoice cannot be outside of 1 - 4.";
			continue;
		}
		else
		{
			cout << "\nEnter the number of seconds from destination to source (Max 30 Seconds):";
			cin >> seconds;
		}

		if (seconds <= 0 || seconds > 30)
		{
			cout << "\nSeconds cannot be 0 or less, or more than 30.";
			continue;
		}
		else
		{
			switch (static_cast<Gas>(choice))
			{
			case Gas::CarbonDioxide:
				speed = 258.0;
				break;
			case Gas::Air:
				speed = 331.5;
				break;
			case Gas::Helium:
				speed = 972.0;
				break;
			case Gas::Hydrogen:
				speed = 1270.0;
				break;
			}

			distance = speed * seconds;
			cout << "\nThe source of the sound was approximately " << distance << " meters away.\n";
		}
	} while (choice < 1 || choice > 4 || seconds <= 0 || seconds > 30);
}

//Question 20
enum class RadiationType {
	GammaRay,
	XRay,
	UltravioletRay,
	VisibleLight,
	InfraredRay,
	Microwave,
	RadioWave
};
void SpectralAnalysis()
{
	double wavelength;

	cout << "Enter the wavelength in meters of an electromagnetic wave: ";
	cin >> wavelength;

	RadiationType type;
	if (wavelength > 1E-11 && wavelength <= 1E-8) {
		type = RadiationType::GammaRay;
	}
	else if (wavelength > 1E-8 && wavelength <= 1E-6) {
		type = RadiationType::XRay;
	}
	else if (wavelength > 1E-6 && wavelength <= 1E-3) {
		type = RadiationType::UltravioletRay;
	}
	else if (wavelength > 1E-3 && wavelength <= 7E-7) {
		type = RadiationType::VisibleLight;
	}
	else if (wavelength > 7E-7 && wavelength <= 1E-4) {
		type = RadiationType::InfraredRay;
	}
	else if (wavelength > 1E-4 && wavelength <= 1E-1) {
		type = RadiationType::Microwave;
	}
	else {
		type = RadiationType::RadioWave;
	}

	switch (type) {
	case RadiationType::GammaRay:
		cout << "This wave is a Gamma ray." << endl;
		break;
	case RadiationType::XRay:
		cout << "This wave is an X-ray." << endl;
		break;
	case RadiationType::UltravioletRay:
		cout << "This wave is an Ultraviolet ray." << endl;
		break;
	case RadiationType::VisibleLight:
		cout << "This wave is a Visible light." << endl;
		break;
	case RadiationType::InfraredRay:
		cout << "This wave is an Infrared ray." << endl;
		break;
	case RadiationType::Microwave:
		cout << "This wave is a Microwave." << endl;
		break;
	case RadiationType::RadioWave:
		cout << "This wave is a Radio wave." << endl;
		break;
	}
}

//Question 21
void FreezingAndBoilingPoints()
{
	double temperature;
	cout << "Enter a temperature (Fahrenheit): ";
	cin >> temperature;

	// Freezing points
	if (temperature <= 32) {
		cout << "\nWater Freezes.";
	}
	if (temperature <= -38) {
		cout << "\nMercury Freezes.";
	}
	if (temperature <= -173) {
		cout << "\nEthyl Alcohol Freezes.";
	}
	if (temperature <= -362) {
		cout << "\nOxygen Freezes.";
	}

	// Boiling points
	if (temperature >= 212) {
		cout << "\nWater is boiling.";
	}
	if (temperature >= 676) {
		cout << "\nMercury is boiling.";
	}
	if (temperature >= 172) {
		cout << "\nEthyl Alcohol is boiling.";
	}
	if (temperature >= -306) {
		cout << "\nOxygen is boiling.";
	}
}
//Question 22

const double PLAN_A_PRICE{ 39.99 }, PLAN_B_PRICE{ 59.99 }, PLAN_C_PRICE{ 79.99 };
const int PLAN_A_GIGS{ 2 }, PLAN_B_GIGS{ 8 };
const double ADDITIONAL_DATA{ 8.99 };

int gigsExtra;
double extraCost;

void MobileServiceProvider()
{
	string customerName;
	char plan{ ' ' };
	int gigsUsed;
	
	double bill;
	double planBSaving;
	double planCSaving;

	do {
		cout << "Customers Montly Bill Calculator\nCustomer Name: ";
		cin >> customerName;
		cout << "What plan is used?: ";
		cin >> plan;
		plan = toupper(plan);

		if (plan != 'A' && plan != 'B' && plan != 'C') 
		{
			cout << "\nPlan can only be A, B or C.";
		}
		else
		{
			cout << "How many gigs did you use this month? (Whole Gigs Rounded): ";
			cin >> gigsUsed;

			if (gigsUsed < 0)
			{
				cout << "\nAmount used cannot be less than 0";
			}
			else
			{
				switch (plan)
				{
				case 'A':
					bill = GetBill(plan, gigsUsed);
					planBSaving = PlanBSaving(bill,gigsUsed);
					planCSaving = PlanCSaving(bill,gigsUsed);

					cout << fixed;
					cout.precision(2);
					cout << "Customer " << customerName << "\'s monthly bill.\nBill: $" << bill;

					if (planBSaving > 0)
					{
						cout << "\nIf you changed to Plan B you could have saved $" << planBSaving;
					}

					if (planCSaving > 0)
					{
						cout << "\nIf you changed to Plan C you could have saved $" << planCSaving;
					}
					break;
				case 'B':
					bill = GetBill(plan, gigsUsed);
					planCSaving = PlanCSaving(bill,gigsUsed);

					if (planCSaving > 0)
					{
						cout << "\nIf you changed to Plan C you could have saved $" << planCSaving;
					}
					break;
				case 'C':
					bill = GetBill(plan, gigsUsed);
					break;
				}
			}
		}

	} while (plan != 'A' && plan != 'B' && plan != 'C');

}

double GetBill(char plan, int gigsUsed)
{
	double bill = 0;

	switch (plan)
	{
	case 'A':
		bill = PLAN_A_PRICE;
		if (gigsUsed > PLAN_A_GIGS)
		{
			gigsExtra = gigsUsed - PLAN_A_GIGS;
			extraCost = gigsExtra * ADDITIONAL_DATA;
			bill += extraCost;
		}
		break;
	case 'B':
		bill = PLAN_B_PRICE;
		if (gigsUsed > PLAN_B_GIGS)
		{
			gigsExtra = gigsUsed - PLAN_B_GIGS;
			extraCost = gigsExtra * ADDITIONAL_DATA;
			bill += extraCost;
		}
		break;
	case 'C':
		bill = PLAN_C_PRICE;
		break;
	}
	
	return bill;
}

double PlanBSaving(double bill, int gigsUsed)
{
	double monthlyBillB = GetBill('B', gigsUsed);
	double saving = bill - monthlyBillB;
	return saving;
}

double PlanCSaving(double bill, int gigsUsed)
{
	double monthlyBillC = GetBill('C', gigsUsed);
	double saving = bill - monthlyBillC;
	return saving;
}
