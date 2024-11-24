#pragma once
#include <string>

class Date {
private: 
	int day, month, year;
	
public:
	static const std::string MONTHS[13];

	//Constructors
	Date();
	Date(int day, int month, int year);

	//Member functions
	static Date validator(Date& date);
	static int dayValidator(int day, int month, int year);
	static int monthValidator(int month);
	static bool isLeapYear(int year);

	static void printer(Date& date);
	static void printNumerical(Date& date);
	static void printAmerican(Date& date);
	static void printEuropean(Date& date);
};