#include "Date.h"
#include <iostream>

/*
The class should have member functions to print the date in
the following formats:
3/15/20
March 15, 2020
15 March 2020
*/
const std::string Date::MONTHS[13] = {
	"", "January", "February", "March", "April", "May", "June", "July",
	"August", "September", "October", "November", "December"
};

Date::Date() {
	day = 1;
	month = 1;
	year = 2001;
}

Date::Date(int dayIn, int monthIn, int  yearIn) {
	day = dayIn;
	month = monthIn;
	year = yearIn;
}

Date Date::validator(Date& date) {
	int validMonth = monthValidator(date.month);
	date.month = validMonth;

	int validDay = dayValidator(date.day, date.month, date.year);
	date.day = validDay;

	return date;
}

int Date::monthValidator(int month)
{
	if (month < 1 || month > 12) {
		std::cout << "\nMonth Invalid, Defaulting to 1.";
		month = 1;
	}
	return month;
}

int Date::dayValidator(int day, int month, int year) {
	int maxDays = 0;

	switch (month) {
	case 1:
		maxDays = 31;
		break;
	case 2: {
		bool leapYear = isLeapYear(year);
		(leapYear) ? maxDays = 29 : maxDays = 28;
		break;
	}
	case 3:
		maxDays = 31;
		break;
	case 4:
		maxDays = 30;
		break;
	case 5:
		maxDays = 31;
		break;
	case 6:
		maxDays = 30;
		break;
	case 7:
	case 8:
		maxDays = 31;
		break;
	case 9:
		maxDays = 30;
		break;
	case 10:
		maxDays = 31;
		break;
	case 11:
		maxDays = 30;
		break;
	case 12:
		maxDays = 31;
		break;
	}

	if (day < 1 || day > maxDays) {
		std::cout << "\nDay Invalid, Defaulting to 1.";
		day = 1;
	}
	return day;
}

bool Date::isLeapYear(int year) {
	
	if (year % 400 == 0) {
		return true;
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		return true;
	}
	else {
		return false;
	}
}

void Date::printer(Date& date)
{
	printNumerical(date);
	printEuropean(date);
	printAmerican(date);
}

void Date::printNumerical(Date& date)
{
	std::cout << "\n" << date.day << "/" << date.month << "/" << date.year << std::endl;
}

void Date::printAmerican(Date& date)
{
	//March 15, 2020
	std::cout << "\n" << Date::MONTHS[date.month] << " " << date.day << ", " << date.year << std::endl;
}

void Date::printEuropean(Date& date)
{
	//15 March 2020
	std::cout << "\n" << date.day << " " << Date::MONTHS[date.month] << " " << date.year << std::endl;
}
