
#include <iostream>
#include <cmath>
using namespace std;

void sumOfTwoNumbers();
void salesPrediction();
void salesTax();
void restaurantBill();
void milesPerGallon();
void distancePerTankOfGas();
void numberOfAcres();
void landCalculation();
void circuitBoardPrice();
void personalInformation();
void trianglePattern();
void diamondPattern();
void payPeriodGrossPay();
void basketballPlayerHeight();
void stockLoss();
void energyDrinkConsumption();
void pastOceanLevels();
void futureOceanLevels();
void annualHighTemperatures();
void howMuchPaint();


int main()
{
	sumOfTwoNumbers();
	return 0;
} 

//Question 1 
void sumOfTwoNumbers() {
	int variable1 = 50;
	int variable2 = 100;

	int total = variable1 + variable2;
	cout << "The total value is: " << total << endl;
}

//Question 2
void salesPrediction() {
	double sales = 8.6;
	int percent = 58;

	double profitGenerated = (percent / 100.0) * sales;
	cout << "East Coast prediction based on " << char(156) << sales << " million sales: " << char(156) << profitGenerated << " million" << endl;
}

//Question 3 
void salesTax() {
	double salesPrice = 95.0;
	double salesTaxPercent = 6.5; 
	double countySalesTaxPercent = 2; 

	double salesTaxTotal = (salesTaxPercent / 100.0) * salesPrice;
	double countyTaxTotal = (countySalesTaxPercent / 100.0) * salesPrice; 
	double totalTax = salesTaxTotal + countyTaxTotal;
	double priceWithoutTax = salesPrice - totalTax; 

	salesTaxTotal = round(salesTaxTotal * 100) / 100;
	countyTaxTotal = round(countyTaxTotal * 100) / 100;
	totalTax = round(totalTax * 100) / 100;
	priceWithoutTax = round(priceWithoutTax * 100) / 100;

	cout << fixed;
	cout.precision(2); 


	cout << "Your Total Payment " << char(156) << salesPrice << endl;
	cout << "Sales Tax " << char(156) << salesTaxTotal << endl; 
	cout << "County Tax " << char(156) << countyTaxTotal << endl;
	cout << "Total Tax " << char(156) << totalTax << endl; 
	cout << "Item Price Without Tax " << char(156) << priceWithoutTax << endl;

}

//Question 4
void restaurantBill() {
	double mealCharge = 44.50; 
	double taxPercent = 6.75; 
	double tipPercent = 15; 

	double taxTotal = (taxPercent / 100.0) * mealCharge;
	double totalAfterTax = taxTotal + mealCharge; 
	double tipAmount = (tipPercent / 100.0) * totalAfterTax;
	double totalPlusTips = totalAfterTax + tipAmount;

	taxTotal = round(taxTotal * 100) / 100;
	totalAfterTax = round(totalAfterTax * 100) / 100;
	tipAmount = round(tipAmount * 100) / 100;
	totalPlusTips = round(totalPlusTips * 100) / 100;

	cout << fixed;
	cout.precision(2);

	cout << "Meal Cost " << char(156) << mealCharge << endl;
	cout << "Tax Amount " << char(156) << taxTotal << endl;
	cout << "Total Before Tip " << char(156) << totalAfterTax << endl;
	cout << "Tip Amount " << char(156) << tipAmount << endl;
	cout << "Final Total " << char(156) << totalPlusTips << endl;
}

//Question 5
void milesPerGallon() {
	//gallons
	double carVolume = 16;
	double distanceBeforeRefuel = 312; 

	double milesPerGallon = distanceBeforeRefuel / carVolume;
	cout << "The amount of miles to a gallon for this car is: " << milesPerGallon << endl;
}

//Question 6
void distancePerTankOfGas() {
	double gasTankStorage = 20;
	double milesPerGallonTown = 23.5; 
	double milesPerGallonHighway = 28.9; 

	double milesPerTown = gasTankStorage * milesPerGallonTown;
	double milesPerHighway = gasTankStorage * milesPerGallonHighway;

	cout << "The car can travel " << milesPerTown << " miles in town" << endl;
	cout << "The car can travel " << milesPerHighway << " miles on the highway" << endl;
}

//Question 7
void numberOfAcres() {
	const double squareFeetPerAcre = 43450.00; 
	double landWidthInFeet = 869.00;
	double landLengthInFeet = 360.00;

	double total = (landWidthInFeet * landLengthInFeet) / squareFeetPerAcre;
	cout << "The Number of Acres in this land is: " << total << endl;
}

//Question 8
void landCalculation() {
	const int squareFeetPerAcre = 43560;
	const double squareFeetPerSquareMeter = 10.7639;
	double acres = 0.5;

	double totalFeet = acres * squareFeetPerAcre;
	double totalMeters = acres * squareFeetPerAcre / squareFeetPerSquareMeter;

	cout << fixed;
	cout.precision(2);

	cout << acres << " acres in Square Feet is " << totalFeet << " Square Feet" << endl;
	cout << acres << " acres in Square Meters is " << totalMeters << " Square Meters" << endl;

}
//Question 9
void circuitBoardPrice() {
	double costToProduce = 14.95; 
	int profitPercent = 35; 
	double priceProfit = costToProduce * profitPercent / 100; 
	double total = costToProduce + priceProfit;
	
	cout << fixed;
	cout.precision(2);

	cout << "The price to charge for " << profitPercent << "% is " << char(156) << total << endl;
}
//Question 10
void personalInformation() {
	string name = " "; 
	string address = " ";
	string city = " ";
	string state = " ";
	string zipCode = " "; 
	string telephoneNumber = " ";
	string collegeMajor = " "; 

	cout << "Your Name: " << name << "\nAddress: " << address << ", " << city << ", " << state << ", "
		<< zipCode + "\nTelephone Number: " << telephoneNumber << "\nCollege Major: " << collegeMajor << endl;


}
//Question 11
void trianglePattern() {
	cout <<"   *   " << endl;
	cout <<"  ***  " << endl;
	cout <<" ***** " << endl;
	cout <<"*******" << endl;
}

//Question 12
void diamondPattern() {
	cout << "   *   " << endl;
	cout << "  ***  " << endl;
	cout << " ***** " << endl;
	cout << "*******" << endl;
	cout << " ***** " << endl;
	cout << "  ***  " << endl;
	cout << "   *   " << endl;
}
//Question 13
void payPeriodGrossPay() {
	double annualEarnings = 39000.00;
	int twiceMonth = 24;
	int biWeekly = 26;

	double twiceMonthlyPay = annualEarnings / twiceMonth;
	double biWeeklyPay = annualEarnings / biWeekly;
	
	cout << fixed;
	cout.precision(2);

	cout << "Annual Pay: " << char(156) << annualEarnings << endl;
	cout << "Pay if paid twice a week: " << char(156) << twiceMonthlyPay << endl;
	cout << "Pay if paid Bi-Weekly: " << char(156) << biWeeklyPay << endl;
}

//Question 14
void basketballPlayerHeight() {
	const double feetInInches = 0.083;
	const int inchesInFeet = 12;
	int heightInInches = 74;

	int feet = heightInInches * feetInInches;
	int inches = heightInInches % inchesInFeet;

	cout << heightInInches << " Inches in feet is " << feet << "ft, " << inches << " inches" << endl;
}

//Question 15
void stockLoss() {
	const int sharesOwned = 750; 
	const double buyPrice = 35.00; 
	const double sellPrice = 31.15;

	double totalPaid = buyPrice * sharesOwned; 
	double totalSold = sellPrice * sharesOwned;
	double loss = totalPaid - totalSold; 

	cout << fixed;
	cout.precision(2);

	cout << "You owned " << sharesOwned << " shares. " << endl;
	cout << "They cost you " << char(156) << totalPaid << endl;
	cout << "You sold them for " << char(156) << totalSold << endl;
	cout << "Money lost " << char(156) << loss << endl;

}

//Question 16
void energyDrinkConsumption() {
	const int totalSurveyed = 16500; 
	const int percentEnergyDrink = 15; 
	const int percentCitrusFlavour = 52;

	int customersWhoBuyDrink = (totalSurveyed * percentEnergyDrink) / 100;
	int customersWhoBuyCitrus = (customersWhoBuyDrink * percentCitrusFlavour) / 100;

	cout << "Surveyed Customers: " << totalSurveyed << endl;
	cout << "Customers who buy one or more energy drinks a week: " << customersWhoBuyDrink << endl;
	cout << "Customers who buy one or more citrus energy drinks a week: " << customersWhoBuyCitrus << endl;
}
//Question 17
void pastOceanLevels() {
	//Millimeters
	double oceanLevelsRisenPastCentury = 1.8;
	const double centimeterToMillimeters = 0.1; 
	const double centimeterToInches = 0.3937;

	double risenInCentiMeters = oceanLevelsRisenPastCentury * centimeterToMillimeters;
	double risenInInches = risenInCentiMeters * centimeterToInches;

	cout << "The ocean has risen " << oceanLevelsRisenPastCentury << "mm in the last Century" << endl;
	cout << "Which is " << risenInCentiMeters << "Cm" << endl;
	cout << "As well as " << risenInInches << " Inches" << endl;
}

//Question 18
void futureOceanLevels() {
	//Millimeters
	double oceanLevelsRisenPastYear = 3.1;
	const double centimeterToMillimeters = 0.1;
	const double centimeterToInches = 0.3937;

	double prediction15Years = oceanLevelsRisenPastYear * 15;

	double risenInCentiMeters = prediction15Years * centimeterToMillimeters;
	double risenInInches = risenInCentiMeters * centimeterToInches;

	cout << "Prediction of rising water levels in 15 years " << prediction15Years << "mm" << endl;
	cout << "Which is " << risenInCentiMeters << "Cm" << endl;
	cout << "As well as " << risenInInches << " Inches" << endl;
}

//Question 19
void annualHighTemperatures() {
	double julyNewYorkCity = 85;
	double julyDenver = 88; 
	double julyPheonix = 106;

	double percentIncrease = 0.02;
	double risenNewYorkCity = (percentIncrease * julyNewYorkCity) + julyNewYorkCity;
	double risenDenver = (percentIncrease * julyDenver) + julyDenver;
	double risenPheonix = (percentIncrease * julyPheonix) + julyPheonix;

	cout << "New averages if temperatures rise by 2%" << endl;
	cout << "New York City: " << risenNewYorkCity << endl;
	cout << "Denver: " << risenDenver << endl;
	cout << "Pheonix: " << risenPheonix << endl;
}

//Question 20
void howMuchPaint() {
	int feetCoveredPerGallon = 340;
	int coatsOfPaintNeeded = 2;
	int heightInFeet = 6;
	int widthInFeet = 100;
	int squareFeetTotal = heightInFeet * widthInFeet;

	double paintNeededForOneSide = (squareFeetTotal / static_cast<double>(feetCoveredPerGallon)) * coatsOfPaintNeeded;
	double paintNeededForTwoSides = paintNeededForOneSide * 2; 

	cout << fixed;
	cout.precision(1);

	cout << "To paint a " << squareFeetTotal << " Foot Fence you need " << paintNeededForOneSide << " gallons of paint for one side of the fence " << endl;
	cout << "You need " << paintNeededForTwoSides << " gallons of paint for both sides of the fence" << endl;

}