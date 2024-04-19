#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;
 
void MilesPerGallon();
void StadiumSeating();
void HousingCost();
void HowMuchInsurance();
void BattingAverage();
void TestAverage();
void AverageRainfall();
void MaleFemalePercentages();
void VacationDays();
void TheaterConcessionSales();
void HowManyWidgets();
void HowManyCalories();
void IngredientAdjuster();
void CelciusToFahreneit();
void CurrencyConverter();
void MonthlySalesTax();
void PropertyTax();
void SeniorPropertyTax();
void MathTutor();
void InterestEarned();
void MonthlyPayments();
void PizzaSlices();
void HowManyPizzas();
void AngleCalculator();
void PlantingGrapevines();

int main() {
	PlantingGrapevines();
}

//Question 1
void MilesPerGallon() {
	double gallonsInTank;
	double milesOnFullTank;
	double milesPerGallon;

	cout << "Enter the number of gallons in a tank: ";
	cin >> gallonsInTank;
	cout << "\nEnter the number of miles that can be driven on a full tank: ";
	cin >> milesOnFullTank;

	cout << fixed;
	cout.precision(1);

	milesPerGallon = milesOnFullTank / gallonsInTank;
	cout << "\nYou can drive " << milesPerGallon << " miles per Gallon.";
}

//Question 2
void StadiumSeating() {
	double classAPrice = 15.00;
	double classBPrice = 12.00;
	double classCPrice = 9.00;

	int classASeats = 0;
	int classBSeats = 0;
	int classCSeats = 0;

	cout << "Enter how many sets of each type are sold" << endl;
	cout << "Class A Seats: ";
	cin >> classASeats;
	cout << "\nClass B Seats: ";
	cin >> classBSeats;
	cout << "\nClass C Seats: ";
	cin >> classCSeats;

	double classASales = classAPrice * classASeats;
	double classBSales = classBPrice * classBSeats;
	double classCSales = classCPrice * classCSeats;
	double totalSales = classASales + classBSales + classCSales;

	cout << fixed;
	cout.precision(2);

	cout << "The Sales are " << char(156) << classASales << " Class A Seats. " << char(156) << classBSales << " Class B Seats. " << char(156) << classCSales
		<< " Class C Seats." << "\nTotal Sales " << char(156) << totalSales;
}
//Question 3
void HousingCost() {
	double rentMortgage;
	double phoneBill;
	double internet;
	double cable;

	cout << "Please enter your monthly costs for you household bills.";
	cout << "\nRent OR Mortgage:" << char(156) << " ";
	cin >> rentMortgage;
	cout << "\nPhone Bill:" << char(156) << " ";
	cin >> phoneBill;
	cout << "\nInternet Bill:" << char(156) << " ";
	cin >> internet;
	cout << "\nCable Bill:" << char(156) << " ";
	cin >> cable;

	double monthlyTotal = rentMortgage + phoneBill + internet + cable;
	double annualTotal = monthlyTotal * 12;

	cout << "\nMonthly Cost: " << char(156) << " " << monthlyTotal;
	cout << "\nYearly Total: " << char(156) << " " << annualTotal;
}

//Question 4
void HowMuchInsurance() {
	const int INSURANCE_PERCENT = 80;
	double buildingValue = 0.00;

	cout << "Enter the value of your building, the minimum amount of insurance will be returned. " << endl;
	cin >> buildingValue;

	double percentageValue = (buildingValue * 80) / 100;
	cout << "You should buy " << char(156) << percentageValue << " of insurance for this building." << endl;
}
//Question 5 
void BattingAverage() {
	double attempts = 0;
	double hits = 0;

	cout << "\nBatting Average Calculator.\nEnter the number of attempts: ";
	cin >> attempts;
	cout << "Now enter the amount of hits: ";
	cin >> hits;

	double average = hits / attempts;
	cout << "The batting average is: " << setprecision(3) << average;
}

//Question 6
void TestAverage() {
	double testScore1 = 0;
	double testScore2 = 0;
	double testScore3 = 0;
	double testScore4 = 0;
	double testScore5 = 0;
	
	cout << "Enter Five Test Score, the Average will be returned." << endl;
	cout << "Score 1: ";
	cin >> testScore1;
	cout << "Score 2: ";
	cin >> testScore2;
	cout << "Score 3: ";
	cin >> testScore3;
	cout << "Score 4: ";
	cin >> testScore4;
	cout << "Score 5: ";
	cin >> testScore5; 

	double average = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) / 5;
	cout << fixed;
	cout.precision(1);
	
	cout << "The average score is " << average << endl;
}

//Question 7
void AverageRainfall() {
	string monthOneName;
	string monthTwoName;
	string monthThreeName;

	double monthOneInches;
	double monthTwoInches;
	double monthThreeInches; 

	cout << "Enter the amount of rain (In Inches) over three months and average will be returned." << endl;
	cout << "Month One Name : ";
	cin >> monthOneName;
	cout << "Rain Fall: ";
	cin >> monthOneInches;
	cout << "Month Two Name : ";
	cin >> monthTwoName;
	cout << "Rain Fall: ";
	cin >> monthTwoInches;
	cout << "Month Three Name : ";
	cin >> monthThreeName;
	cout << "Rain Fall: ";
	cin >> monthThreeInches;

	double average = (monthOneInches + monthTwoInches + monthThreeInches) / 3; 
	cout << fixed;
	cout.precision(2);

	cout << "The average rainfall for " << monthOneName << ", " << monthTwoName << ", and  " << monthThreeName << " is " << average << " inches." << endl;
}

//Question 8
void MaleFemalePercentages() {
	int numberOfMales = 0;
	int numberOfFemales = 0;
	int numberOfOther = 0;

	cout << "Enter the amount of Male, Female or Other Identifying Students" << endl;
	cout << "Male: ";
	cin >> numberOfMales;
	cout << "Female: ";
	cin >> numberOfFemales;
	cout << "Other Identifying: ";
	cin >> numberOfOther;

	int total = numberOfMales + numberOfFemales + numberOfOther; 
	double percentageMales = static_cast<double>(numberOfMales) / total * 100;
	double percentageFemales = static_cast<double>(numberOfFemales) / total * 100;
	double percentageOther = static_cast<double>(numberOfOther) / total * 100;

	cout << fixed;
	cout.precision(1);

	cout << "The percentage of Males is " << percentageMales << ".\nThe percentage of Females is " << percentageFemales
		<< ".\nThe percentage of Other identifying " << percentageOther << "." << endl;
}
//Question 9
void VacationDays() {
	int days;
	cout << "How many days are you planning for your next vacation? ";
	cin >> days;

	int hours = days * 24;
	int minutes = hours * 60;
	int seconds = minutes * 60;

	cout << fixed;
	cout.precision(2);

	cout << "\nThis is " << hours << " hours.\nAs well as " << minutes << " minutes.\nAnd " << seconds
		<< " seconds." << endl;
}
//Question 10 
void  TheaterConcessionSales()
{
	const double EVENING_TICKET_COST = 10.00;
	const double KIDS_MATINEE_COST = 3.00;
	const double EVENING_CONCESSIONS_AVERAGE = 6.50;
	const double MATINEE_CONCESSIONS_AVERAGE = 8.50;

	double eveningTotal = EVENING_TICKET_COST + EVENING_CONCESSIONS_AVERAGE;
	double matineeTotal = KIDS_MATINEE_COST + MATINEE_CONCESSIONS_AVERAGE;

	double eveningTicketPercent = (EVENING_TICKET_COST / eveningTotal) * 100;
	double eveningConcessionsPercent = (EVENING_CONCESSIONS_AVERAGE / eveningTotal) * 100;

	double matineeTicketPercent = (KIDS_MATINEE_COST / matineeTotal) * 100;
	double matineeConcessionsPercent = (MATINEE_CONCESSIONS_AVERAGE / matineeTotal) * 100;
	
	cout << fixed;
	cout.precision(2);

	cout << "EVENING SHOW STATISTICS\n Evening Ticket Percent " << eveningTicketPercent
		<< "%.\n Evening Concessions Percent " << eveningConcessionsPercent << "%.\n\nMATINEE SHOW STATISTICES"
		<< "\n Matinee Ticket Percent " << matineeTicketPercent << "%.\n Matinee Concessions Percent"
		<< matineeConcessionsPercent << "%.";
}
//Question 11
void HowManyWidgets() 
{
	const double WIDGET_WEIGHT = 12.5;
	double palletWeight = 0;
	double palletWeightWithWidgets = 0;

	cout << "Enter the total weight of the pallet (In Pounds) and the weight of an empty pallet (In Pounds)." << endl;
	cout << "Total Pallet Weight: " << endl;
	cin >> palletWeightWithWidgets;
	cout << "Empty Pallet Weight: " << endl;
	cin >> palletWeight;

	double weightWithoutPallet = palletWeightWithWidgets - palletWeight;
	double amountOfWidgets = weightWithoutPallet / WIDGET_WEIGHT;

	cout << "The amount of widgets on this pallet is " << amountOfWidgets;
}

//Question 12
void HowManyCalories() {
	const int BAG_CONTENTS = 30;
	const int SERVING_PER_BAG = 10;
	const int CALORIES_PER_SERVING = 300;

	int cookiesEaten = 0;
	int cookiesInServing = BAG_CONTENTS / SERVING_PER_BAG;

	cout << "How many cookies did you eat?" << endl;
	cin >> cookiesEaten;

	double servingsEaten = static_cast<double>(cookiesEaten) / cookiesInServing;
	double caloriesEaten = servingsEaten * CALORIES_PER_SERVING;

	cout << "You ate " << servingsEaten << " servings" << endl;
	cout << "Which is " << caloriesEaten << " calories" << endl;
}
//Question 13
void IngredientAdjuster() {
	const int COOKIES_PER_BATCH = 48;
	const double SUGER_CUPS_PER_BATCH = 1.5;
	const double BUTTER_CUPS_PER_BATCH = 1;
	const double FLOUR_CUPS_PER_BATCH = 2.75;

	double cookiesToBeMade = 0;

	cout << "How many cookies would you like to make? ";
	cin >> cookiesToBeMade;

	double multiplier = cookiesToBeMade / COOKIES_PER_BATCH;
	double sugerNeeded = SUGER_CUPS_PER_BATCH * multiplier;
	double butterNeeded = BUTTER_CUPS_PER_BATCH * multiplier;
	double flourNeeded = FLOUR_CUPS_PER_BATCH * multiplier;

	cout << fixed;
	cout.precision(2);

	cout << "To make " << cookiesToBeMade << " you need the following; " << endl;
	cout << sugerNeeded << " Cups of Sugar" << endl;
	cout << butterNeeded << " Cups of Butter" << endl;
	cout << flourNeeded << " Cups of Flour" << endl;
}
//Question 14
void CelciusToFahreneit() {
	double celcius;

	cout << "Enter the temperature in Celcius: ";
	cin >> celcius;

	double fahrenheit = ((9.0/5.0) * celcius) + 32;
	cout << "\nIn Fahrenheit this temp is " << fahrenheit << "F.";
}
//Question 15
void CurrencyConverter() {
	double USDollars = 0.00;
	const double YEN_CONVERSION = 111.00;
	const double EURO_CONVERSION = 0.86;

	cout << "Enter a amount in USD $";
	cin >> USDollars;

	double dollarsToYen = USDollars * YEN_CONVERSION;
	double dollarsToEuro = USDollars * EURO_CONVERSION;

	cout << fixed;
	cout.precision(2);

	cout << "\n$" << USDollars << " in Yen is " << dollarsToYen << ".";
	cout << "\n$" << USDollars << " in Euro is " << dollarsToEuro << ".";
}
//Question 16
void MonthlySalesTax() {
	string month = "";
	int year = 2000;
	double totalAmountAtRegister = 0.00;

	const double STATE_SALES_TAX = 0.02;
	const double COUNTY_SALES_TAX = 0.04;
	double salesTaxTotal = STATE_SALES_TAX + COUNTY_SALES_TAX;

	cout << "Enter the Month: ";
	cin >> month;
	cout << "Enter the Year: ";
	cin >> year;

	cout << "Now please enter the total amount collected: ";
	cin >> totalAmountAtRegister;

	double productSales = totalAmountAtRegister / (1 + salesTaxTotal);
	double taxSales = totalAmountAtRegister - productSales;

	double countyTaxCollected = totalAmountAtRegister / (1 + salesTaxTotal) * COUNTY_SALES_TAX;
	double stateTaxCollected = totalAmountAtRegister / (1 + salesTaxTotal) * STATE_SALES_TAX;

	cout << fixed;
	cout.precision(2);

	cout << "Month: " << month << " " << year << "\n--------------------\n"
		<< "Total Collected:              $ " << totalAmountAtRegister << endl
		<< "Sales:                        $ " << productSales << endl
		<< "County Sales Tax:             $ " << countyTaxCollected << endl
		<< "State Sales Tax:              $ " << stateTaxCollected << endl
		<< "Total Sales Tax:              $ " << taxSales << endl;
} 

//Question 17
void PropertyTax() {
	double valueOfProperty = 0.00;
	double currentTaxRate = 2.64;

	cout << "What is the value of your propery? ";
	cin >> valueOfProperty;
	cout << "\nWhat is the current Tax Rate? ";
	cin >> currentTaxRate;

	double assessedValue = valueOfProperty * 0.60;
	double taxToPay = (assessedValue / 100) * currentTaxRate;

	cout << fixed;
	cout.precision(2);

	cout << "The assessed value of your property is: $" << assessedValue << endl;
	cout << "The annual property tax for this property is: $" << taxToPay << endl;
}

//Question 18
void SeniorPropertyTax(){
	double valueOfProperty = 0.00;
	double currentTaxRate = 2.64;
	double homeOwnerExemption = 5000.00;

	cout << "What is the value of your propery? ";
	cin >> valueOfProperty;
	cout << "\nWhat is the current Tax Rate? ";
	cin >> currentTaxRate;

	double assessedValue = (valueOfProperty * 0.60) - homeOwnerExemption;
	if (assessedValue <= 0)
	{
		assessedValue = 0.00;
	}
	double taxToPay = (assessedValue / 100) * currentTaxRate;
	double quarterlyTax = taxToPay / 4;

	cout << fixed;
	cout.precision(2);

	cout << "The assessed value of your property is: $" << assessedValue << endl;
	cout << "The annual property tax for this property is: $" << taxToPay << endl;
	cout << "The Quarterly Tax Bill will be: $" << quarterlyTax << endl;
}

//Question 19
void MathTutor() {
	int userAnswer;
	srand(time(0));
	int numberOne = rand() % 9 + 1; 
	int numberTwo = rand() % 9 + 1;
	int total = numberOne + numberTwo;
	
	cout << "Math Question:" << "\n +     " << numberOne << endl << "       " << numberTwo << endl
		<< "----------" << "\n\nEnter your answer: ";
	cin >> userAnswer;
	cout << "The correct answer was " << total << endl;
}
//Question 20 
void InterestEarned() {
	double startingBalance = 0.00;
	double interestRate = 0.00;
	int timesCompounded = 0;

	cout << "Interest Calculator\nWhat is the starting balance? ";
	cin >> startingBalance;
	cout << "What is the Interest Rate? ";
	cin >> interestRate;
	cout << "How many times is the interest compounded? ";
	cin >> timesCompounded;

	// Convert interest rate to a decimal
	double annualInterestRate = interestRate / 100.0;
	double interestGenerated = startingBalance * pow(1 + (annualInterestRate / timesCompounded), timesCompounded);
	double finalBalance = startingBalance + interestGenerated;

	cout << fixed;
	cout.precision(2);

	cout << "\nInterest Rate:         " << interestRate << "%"
		<< "\nTimes Compounded:      " << timesCompounded
		<< "\nPrincipal:            $" << startingBalance
		<< "\nInterest:             $" << interestGenerated
		<< "\nFinal Balance:        $" << finalBalance << endl;
}

//Question 21
void MonthlyPayments() {
	double loanAmount = 0.00;
	double annualInterestRate = 0.00;
	int amountOfPayments = 0;

	cout << "Enter the amount of loan taken: ";
	cin >> loanAmount;
	cout << "\nEnter the annual interest rate: ";
	cin >> annualInterestRate;
	cout << "Enter the amount of total payments: ";
	cin >> amountOfPayments;

	double monthlyInterestRate = annualInterestRate / 12.0 / 100.0;;

	double monthlyPayment = (monthlyInterestRate * pow(1 + monthlyInterestRate, amountOfPayments)) /
		(pow(1 + monthlyInterestRate, amountOfPayments) - 1) * loanAmount;

	double totalAmountPaid = monthlyPayment * amountOfPayments;
	double totalInterestPaid = totalAmountPaid - loanAmount;

	cout << fixed;
	cout.precision(2);

	cout << "\nLoan Amount:                 $ " << loanAmount
		<< "\nMonthly Interest Rate:         " << monthlyInterestRate * 100 << "%"
		<< "\nNumber of Payments:            " << amountOfPayments
		<< "\nMonthly Payment:             $ " << monthlyPayment
		<< "\nAmount Paid Back:            $ " << totalAmountPaid
		<< "\nInterest Paid:               $ " << totalInterestPaid;
}

//Question 22
void PizzaSlices() {
	const double PI = 3.14;
	const double SLICE_AREA = 14.125;
	double pizzaDiameter;

	cout << "Joe\'s Pizza Palace\nWhat is the pizza diameter (Inches):";
	cin >> pizzaDiameter;

	double pizzaRadius = pizzaDiameter / 2;
	double pizzaArea = PI * pow(pizzaRadius, 2);
	int pizzaSlicesAmount = static_cast<int>(pizzaArea / SLICE_AREA + 0.5);

	cout << fixed;
	cout.precision(0);

	cout << "The amount of slices in a pizza of " << pizzaDiameter << " Inches is " << pizzaSlicesAmount << endl;
}

//Question 23
void HowManyPizzas() {
	const double PI = 3.14;
	const double SLICE_AREA = 14.125;
	const double SLICES_PER_PERSON = 4;

	double pizzaDiameter;
	double peopleAtParty;

	cout << "Joe\'s Pizza Palace\nWhat is the pizza diameter (Inches):";
	cin >> pizzaDiameter;
	cout << "How many people are attending the party? ";
	cin >> peopleAtParty;

	double pizzaRadius = pizzaDiameter / 2;
	double pizzaArea = PI * pow(pizzaRadius, 2);
	int pizzaSlicesAmount = static_cast<int>(pizzaArea / SLICE_AREA + 0.5);

	int pizzaSlicesNeeded = peopleAtParty * SLICES_PER_PERSON;
	int pizzasNeeded = pizzaSlicesNeeded / pizzaSlicesAmount;

	if (pizzaSlicesNeeded % pizzaSlicesAmount != 0) {
		pizzasNeeded++;
	}
	
	cout << fixed;
	cout.precision(0);

	cout << "The amount of slices in a pizza of " << pizzaDiameter << " Inches is " << pizzaSlicesAmount << endl;
	cout << "You will need " << pizzasNeeded << " pizzas to feed " << peopleAtParty << " people at the party." << endl;
}

//Question 24
void AngleCalculator() {
	double radians;

	cout << "Enter your angle in Radians and I will tell you the Sine, Cos and Tan Value: ";
	cin >> radians; 

	double sine = sin(radians);
	double cosine = cos(radians);
	double tangent = tan(radians);

	cout << fixed;
	cout.precision(4);

	cout << radians << " Radians is " << sine << " sine, " << cosine << " cosine, and " << tangent << " tangent.";
}

//Question 25
void PlantingGrapevines() {
	double lengthOfRow = 0.0;
	double endPostSpace = 0.0;
	double betweenVineSpace = 0.0;

	cout << "Enter the length of the row (feet): ";
	cin >> lengthOfRow;
	cout << "Enter the amount of space used by an end-post assembly (feet): ";
	cin >> endPostSpace;
	cout << "Enter the amount of space between the vines (feet): ";
	cin >> betweenVineSpace;

	double numberOfGrapevines = (lengthOfRow - 2 * endPostSpace) / betweenVineSpace;
	cout << "The amount of Grape Vines that will fit in the row is " << numberOfGrapevines;
}