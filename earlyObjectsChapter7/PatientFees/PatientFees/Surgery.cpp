#include "Surgery.h"
#include <iostream>

void Surgery::updateBillWithSurgery(PatientAccount& patient, double surgeryCost)
{
	double currentBill = patient.getPatientBill();
	currentBill += surgeryCost;
	
	patient.setPatientBill(currentBill);
}

void Surgery::menuChoiceSurgery(PatientAccount& patient, double treatmentCost)
{
	std::cout << "Surgery charge applied for this day." << std::endl;
	double currentBill = patient.getPatientBill();
	Surgery::updateBillWithSurgery(patient, treatmentCost);
}
