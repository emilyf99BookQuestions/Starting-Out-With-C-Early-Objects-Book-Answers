#pragma once

//Question Twelve
class PresentValue {
public:
	static void PresentValueStart();
	static double ConvertInterest(double interest);
	static int ConvertYears(double years);
	static double PresentValueCalc(double total, double interest, int months);
};