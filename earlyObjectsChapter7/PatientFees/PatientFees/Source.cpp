#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
#include <iostream>

// ProtoTypes
void surgeryMenu(PatientAccount& patient);
void pharmacyMenu(PatientAccount& patient);

int main() 
{
	constexpr double DAILY_RATE = 100.00;
	bool moreMedicine = true;
	bool stillAPatient = true;
	bool dayCounter = 0;

	PatientAccount patientA("Adam Johnson");

	while (stillAPatient)
	{
		//Starting Message
		dayCounter++;
		patientA.setDaysInHospital(dayCounter);
		std::cout << "Day " << patientA.getDaysInHospital() << " for patient " << patientA.getPatientName() << std::endl;

		surgeryMenu(patientA);
		pharmacyMenu(patientA);
		
		while (moreMedicine)
		{
			// Confirm if more medicine needed
			char choice;
			std::cout << "Does the patient need more medication (y/n): ";
			std::cin >> choice;
			if (choice == 'n' || choice == 'N')
			{
				moreMedicine = false;
			}
			else
			{
				pharmacyMenu(patientA);
			}
		}
		

		// Confirm if still a patient 
		char stillCheckedIn;
		std::cout << "Is the patient still an inpatient (y/n): ";
		std::cin >> stillCheckedIn;
		if (stillCheckedIn == 'n' || stillCheckedIn == 'N')
		{
			stillAPatient = false;
		}
	}

	// Adding the Daily Charge
	double useageCharges = patientA.getDaysInHospital() * DAILY_RATE;
	double currentBill = patientA.getPatientBill();
	currentBill += useageCharges;
	patientA.setPatientBill(currentBill);

	std::cout << "Final bill accumulated " << patientA.getPatientBill() << std::endl;
	return 0;
}

void surgeryMenu(PatientAccount& patient)
{
	Surgery surgery;
	int choice;
	double treatmentSelected = 0.0;
	std::cout << "--- Surgery Menu ---" << std::endl;
	std::cout << "Input a number to add a surgery cost, enter 0 to skip." << std::endl;
	std::cout << "0. Skip Charge\n1. Investigation Charge\n2. Knee Replacement\n3. Appendix Removal" <<
		"\n4. Tonsilectomy\n5. Wisdom Tooth Removal\n Response: " << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 0:
		std::cout << "No Charge Applied." << std::endl;
		break;
	case 1:
		treatmentSelected = surgery.investigationCost;
		surgery.menuChoiceSurgery(patient, treatmentSelected);
		break;
	case 2:
		treatmentSelected = surgery.kneeReplacementCost;
		surgery.menuChoiceSurgery(patient, treatmentSelected);
		break;
	case 3:
		treatmentSelected = surgery.appendixRemovalCost;
		surgery.menuChoiceSurgery(patient, treatmentSelected);
		break;
	case 4:
		treatmentSelected = surgery.tonsilectomyCost;
		surgery.menuChoiceSurgery(patient, treatmentSelected);
		break;
	case 5:
		treatmentSelected = surgery.wisdomToothRemoval;
		surgery.menuChoiceSurgery(patient, treatmentSelected);
		break;
	default:
		std::cout << "Error, Input not compatible, skipping charge." << std::endl;
		break;
	}
}

void pharmacyMenu(PatientAccount& patient)
{
	Pharmacy pharmacy;
	int choice;
	double treatmentSelected = 0.0;

	std::cout << "--- Pharmacy Menu ---" << std::endl;
	std::cout << "Input a number to add a pharmacy cost, enter 0 to skip." << std::endl;
	std::cout << "0. Skip Charge\n1. Antibiotics\n2. Mild Pain Killer\n3. Sedative" <<
		"\n4. Nausea Pills\n5. Antihistamines\n Response: " << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case 0:
		std::cout << "No Charge Applied." << std::endl;
		break;
	case 1:
		treatmentSelected = pharmacy.antibioticsCost;
		pharmacy.menuChoicePharmacy(patient, treatmentSelected);
		break;
	case 2:
		treatmentSelected = pharmacy.mildPainKillerCost;
		pharmacy.menuChoicePharmacy(patient, treatmentSelected);
		break;
	case 3:
		treatmentSelected = pharmacy.sedativeCost;
		pharmacy.menuChoicePharmacy(patient, treatmentSelected);
		break;
	case 4:
		treatmentSelected = pharmacy.nauseaPillsCost;
		pharmacy.menuChoicePharmacy(patient, treatmentSelected);
		break;
	case 5:
		treatmentSelected = pharmacy.antihistaminesCost;
		pharmacy.menuChoicePharmacy(patient, treatmentSelected);
		break;
	default:
		std::cout << "Error, Input not compatible, skipping charge." << std::endl;
		break;
	}
}
