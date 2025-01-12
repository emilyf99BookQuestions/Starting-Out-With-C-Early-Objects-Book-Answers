#pragma once
#include "PatientAccount.h"

class Surgery 
{
public:
	double investigationCost = 400.00;
	double kneeReplacementCost = 4000.00;
	double appendixRemovalCost = 2000.00;
	double tonsilectomyCost = 800.00;
	double wisdomToothRemoval = 750.00;

	static void updateBillWithSurgery(PatientAccount& patient, double surgeryCost);
	void menuChoiceSurgery(PatientAccount& patient, double treatmentCost);
};