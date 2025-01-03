#include <cmath>
#include "Tips.h"

Tips::Tips(double rate) : taxRate(rate) {}

double Tips::computeTip(double totalBill, double tipRate)
{
	double billBeforeTax = totalBill / (1.0 + taxRate);
	double tip = billBeforeTax * tipRate;
	return std::round(tip * 100.0) / 100.0;
}
