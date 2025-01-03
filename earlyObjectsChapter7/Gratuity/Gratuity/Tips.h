#pragma once

class Tips {
private:
	double taxRate;
public:
	// Constructor
	Tips(double taxRate = 0.085);

	// Other Methods
	double computeTip(double totalBill, double tipRate);

};