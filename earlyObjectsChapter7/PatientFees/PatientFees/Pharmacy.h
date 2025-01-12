#pragma once
#include "PatientAccount.h"

class Pharmacy
{
public:
	double antibioticsCost = 20.00;
	double mildPainKillerCost = 8.00;
	double sedativeCost = 200.00;
	double nauseaPillsCost = 9.00;;
	double antihistaminesCost = 35.00;

	static void updateBillWithPharmacy(PatientAccount& patient, double surgeryCost);
	void menuChoicePharmacy(PatientAccount& patient, double treatmentCost);
};