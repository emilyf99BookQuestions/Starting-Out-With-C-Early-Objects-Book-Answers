#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void MinimumMaximum();
void RomanNumeralConverter();
void MagicDates();
void AreaOfRectangles();
void BookClubPoints();
void ChangeForDollar();
void TimeCalculator();
void MathTutor();
void SoftwareSales();
void GeometryCalculator();
void ColourMixer();

static void AreaOfCircle();
static void AreaOfRectangle();
static void AreaOfTriangle();
static string toLowercase(string str);

int main(){
	ColourMixer();
	return 0;
}

//Question 1
void MinimumMaximum() 
{
	int integer1 = 0;
	int integer2 = 0;

	cout << "Enter a number: ";
	cin >> integer1;
	cout << "\nEnter another number: ";
	cin >> integer2;

	if (integer1 > integer2) { cout << "\n" << integer1 << " is biggest.";}
	else if (integer1 < integer2) { cout << "\n" << integer2 << " is biggest.";}
	else { cout << "\nThe numbers are the same!"; }
}

//Question 2
void RomanNumeralConverter() 
{
	int numberToConvert = 0;
	
	do {
		cout << "Enter a number between 1 - 10: ";
		cin >> numberToConvert;

		if (numberToConvert <= 0 || numberToConvert > 10) { cout << "Input Invalid" << endl; }
		else {
			switch (numberToConvert) {
			case 1:
				cout << "\n" << numberToConvert << " in roman numerals is I";
				break;
			case 2:
				cout << "\n" << numberToConvert << " in roman numerals is II";
				break;
			case 3:
				cout << "\n" << numberToConvert << " in roman numerals is III";
				break;
			case 4:
				cout << "\n" << numberToConvert << " in roman numerals is IV";
				break;
			case  5:
				cout << "\n" << numberToConvert << " in roman numerals is V";
				break;
			case 6:
				cout << "\n" << numberToConvert << " in roman numerals is VI";
				break;
			case 7:
				cout << "\n" << numberToConvert << " in roman numerals is VII";
				break;
			case 8:
				cout << "\n" << numberToConvert << " in roman numerals is VIII";
				break;
			case 9:
				cout << "\n" << numberToConvert << " in roman numerals is IX";
				break;
			case 10:
				cout << "\n" << numberToConvert << " in roman numerals is X";
				break;
			default:
				cout << "\nError";
			}
		}
	} while (numberToConvert <= 0 || numberToConvert > 10);	
}

//Question 3
void MagicDates() 
{
	int day = 0;
	int month = 0;
	int year = 0;

	bool validInput = false;

	const int MIN_DAY = 1;
	const int MAX_DAY = 31;
	const int MIN_MONTH = 1;
	const int MAX_MONTH = 12;
	const int MIN_YEAR = 1;

	do {
		cout << "Enter the day: ";
		cin >> day;
		cout << "Enter the month (number): ";
		cin >> month;
		cout << "Enter the year: ";
		cin >> year;

		if ((day < MIN_DAY || day > MAX_DAY) || (month < MIN_MONTH || month > MAX_MONTH) || (year < MIN_YEAR))
		{
			cout << "Invalid Input" << endl;
		}
		else {
			validInput = true;
			if (day * month == year) {
				cout << "This date is a magic number" << endl;
			}
			else {
				cout << "This date is not a magic number" << endl;
			}
		}
	} while (!validInput);
}

//Question 4
void AreaOfRectangles() 
{
	double length1, width1, length2, width2;

	cout << "Enter the length and width of two rectangles, The program will return the greatest area.\nRectangle 1: \nLength: ";
	cin >> length1;
	cout << "Width: ";
	cin >> width1;
	cout << "\nRectangle 2: \nLength: ";
	cin >> length2;
	cout << "Width: ";
	cin >> width2;

	double area1 = length1 * width1;
	double area2 = length2 * width2;

	if (area1 > area2) {
		cout << "Rectangle One is bigger.";
	}
	else if (area1 < area2) {
		cout << "Rectangle Two is bigger.";
	}
	else {
		cout << "The rectangles have the same area.";
	}
}

//Question 5
void BookClubPoints() 
{

	int booksRead = -1;
	int points;

	do {
		cout << "Enter the amount of books purchased this month.";
		cin >> booksRead;

		if (booksRead < 0) { cout << "\nInput Invalid, entry cannot be below 0.\n"; }
		else {
			switch (booksRead)
			{
			case 0:
				points = 0;
				break;
			case 1:
			case 2:
			case 3:
				points = booksRead * 5;
				break;
			case 4:
			case 5:
				points = booksRead * 10;
				break;
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
				points = booksRead * 15;
				break;
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
				points = booksRead * 20;
				break;
			default:
				points = booksRead * 25;
				break;
			}
			cout << "\nYou have " << points << " points this month.";
		}
	} while (booksRead < 0);
}

//Question 6 
void ChangeForDollar() 
{
	const int PENNY_VALUE = 1;
	const int NICKEL_VALUE = 5;
	const int DIME_VALUE = 10;
	const int QUARTER_VALUE = 25;

	int pennyIn, nickelIn, dimeIn, quarterIn;

	cout << "Enter coins and aim to get to exactly a dollar.\nPennies: ";
	cin >> pennyIn;
	cout << "Nickels: ";
	cin >> nickelIn;
	cout << "Dimes: ";
	cin >> dimeIn;
	cout << "Quarters: ";
	cin >> quarterIn;

	int pennyTotal = PENNY_VALUE * pennyIn;
	int nickelTotal = NICKEL_VALUE * nickelIn;
	int dimeTotal = DIME_VALUE * dimeIn;
	int quarterTotal = QUARTER_VALUE * quarterIn;

	int total = pennyTotal + nickelTotal + dimeTotal + quarterTotal;

	if (total < 100) {
		cout << "The amount you entered is less than 1 Dollar." << endl;
	}
	else if (total > 100) {
		cout << "The amount you entered is more than 1 Dollar." << endl;
	}
	else {
		cout << "The amount you entered is exactly 1 Dollar. Well done!" << endl;
	}

}

//Question 7
void TimeCalculator()
{
	const int SECONDS_IN_DAY = 86400;
	const int SECONDS_IN_HOURS = 3600;
	const int SECONDS_IN_MINUTES = 60;
	int seconds = -1;
	double output;
	do 
	{
		cout << "Enter a number of seconds: ";
		cin >> seconds;
		
		if (seconds < 0) { cout << "Amount of seconds cannot be negative.\n";}

		else if (seconds >= SECONDS_IN_DAY) 
		{
			output = static_cast<double>(seconds) / SECONDS_IN_DAY;
			cout << seconds << " Seconds in Days is " << output << " Days.\n";
		}
		else if (seconds < SECONDS_IN_DAY && seconds >= SECONDS_IN_HOURS) 
		{
			output = static_cast<double>(seconds) / SECONDS_IN_HOURS;
			cout << seconds << " Seconds in Hours is " << output << " Hours.\n";
		}
		else if (seconds < SECONDS_IN_HOURS && seconds >= SECONDS_IN_MINUTES)
		{
			output = static_cast<double>(seconds) / SECONDS_IN_MINUTES;
			cout << seconds << " Seconds in Minutes is " << output << " Minutes.\n";
		}
		else 
		{
			cout << "Seconds entered is too small to convert.\n";
		}
	} while (seconds < 0);

}

//Question 8
void MathTutor() {
	int userAnswer;
	srand(time(0));
	int numberOne = rand() % 9 + 1;
	int numberTwo = rand() % 9 + 1;
	int total = numberOne + numberTwo;

	cout << "Math Question:" << "\n +     " << numberOne << endl << "       " << numberTwo << endl
		<< "----------" << "\n\nEnter your answer: ";
	cin >> userAnswer;

	if (userAnswer == total) 
	{
		cout << "Congratulations! You got the answer correct!\n";
	}
	else
	{
		cout << "That\'s not correct. The answer was " << total << ".\n";
	}
}

//Question 9 
void SoftwareSales()
{
	const double PACKAGE_PRICE = 199.00;
	int amountOfPackages = -1;
	double discount{0}, totalPrice, totalDiscount, totalWithDiscount;

	do
	{
		cout << "Enter the amount of packages you would like to buy: ";
		cin >> amountOfPackages;

		if (amountOfPackages <= 0){ cout << "Amount entered cannot be negative or 0.\n";}
		else 
		{
			if (amountOfPackages >= 100) { discount = 0.5; }
			else if(amountOfPackages <= 99 && amountOfPackages >= 50){ discount = 0.4; }
			else if (amountOfPackages <= 49 && amountOfPackages >= 20) { discount = 0.3; }
			else if (amountOfPackages <= 19 && amountOfPackages >= 10){ discount = 0.2;}
			else { discount = 0; }
	
			totalPrice = amountOfPackages * PACKAGE_PRICE;
			totalDiscount = totalPrice * discount;
			totalWithDiscount = totalPrice - totalDiscount;

			cout << fixed;
			cout.precision(2);

			cout << "The total to pay for " << amountOfPackages << " copies is " << totalWithDiscount;
		}	
	} while (amountOfPackages <= 0);
}

//Question 10
void GeometryCalculator()
{
	int choice = -1;
	do {
		cout << "Geometry Calculator\n1. Calculate the Area of a Circle\n2. Calculate the Area of a Rectangle\n"
			 << "3. Calculate the Area of a Triangle\n4. Quit\n";
		cin >> choice;

		if (choice < 1 || choice > 5) { cout << "Please only enter 1 - 4 as your choice.\n"; }
		else {
			switch (choice)
			{
			case 1: 
				AreaOfCircle();
				break;
			case 2:
				AreaOfRectangle();
				break;
			case 3:
				AreaOfTriangle();
				break;
			case 4:
				break;
			default:
				cout << "Input invalid...\n";
				break;
			}
		}
	} while (choice < 1 || choice > 5);
}

static void AreaOfCircle()
{
	const double PI = 3.14159;
	double radius = 0.0;
	cout << "Enter the radius of a circle.\n";
	cin >> radius;

	double area = pow(PI * radius, 2);
	cout << "The area of the circle is " << area << ".\n";
}

static void AreaOfRectangle()
{
	double length = 0.0; 
	double width = 0.0;
	cout << "Enter the length and width of the rectangle.\nLength: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	
	double area = length * width;
	cout << "The area of the rectangle is " << area << ".\n";
}

static void AreaOfTriangle()
{
	double base = 0.0;
	double height = 0.0;

	cout << "Enter the base and height of the triangle.\nBase: ";
	cin >> base;
	cout << "Height: ";
	cin >> height;

	double area = (base * height) / 2;
	cout << "The area of the triangle is " << area << ".\n";
}

//Question 11
void ColourMixer()
{
	const string BLUE = "blue";
	const string RED = "red";
	const string YELLOW = "yellow";

	string userColour1 = "";
	string userColour2 = "";
	string finalColour = "";
	do {
		cout << "Enter  two primary colours.\nColour 1:";
		cin >> userColour1;
		cout << "\nColour 2:";
		cin >> userColour2;

		// Convert user input to lowercase
		userColour1 = toLowercase(userColour1);
		userColour2 = toLowercase(userColour2);


		if ((userColour1 != BLUE && userColour1 != RED && userColour1 != YELLOW)
			|| (userColour2 != BLUE && userColour2 != RED && userColour2 != YELLOW))
		{
			cout << "Colours entered must be primary colours!\n";
		}
		else if (userColour1 == userColour2)
		{
			cout << "Colours entered cannot be the same primary colour!\n";
		}
		else 
		{
			if ((userColour1 == BLUE && userColour2 == RED) || (userColour1 == RED && userColour2 == BLUE))
			{finalColour = "purple";}
			else if ((userColour1 == YELLOW && userColour2 == RED) || (userColour1 == RED && userColour2 == YELLOW))
			{finalColour = "orange";}
			else if ((userColour1 == YELLOW && userColour2 == BLUE) || (userColour1 == BLUE && userColour2 == YELLOW))
			{finalColour = "green";}
			else { finalColour = "undetermined"; }

			cout << "The colours you mixed makes " << finalColour << ".\n";
		}
	} while ((userColour1 != BLUE && userColour1 != RED && userColour1 != YELLOW)
		|| (userColour2 != BLUE && userColour2 != RED && userColour2 != YELLOW)
		|| userColour1 == userColour2);
}

static string toLowercase(string str) {
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	return str;
}
