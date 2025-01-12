#include "Pharmacy.h"
#include <iostream>

void Pharmacy::updateBillWithPharmacy(PatientAccount& patient, double pharmacyCost)
{
	double currentBill = patient.getPatientBill();
	currentBill += pharmacyCost;

	patient.setPatientBill(currentBill);
}

void Pharmacy::menuChoicePharmacy(PatientAccount& patient, double treatmentCost)
{
	std::cout << "Surgery charge applied for this day." << std::endl;
	double currentBill = patient.getPatientBill();
	Pharmacy::updateBillWithPharmacy(patient, treatmentCost);
}