#include "OverloadedHospital.h"


//Question Sixteen
//Question Seventeen
void OverloadedHospital::OverloadedHospitalStart() {
	std::string patientType;
	do {
		patientType = GetPatientType();
	} while (CheckPatientType(patientType).empty());

	std::cout << "Patient type accepted: " << patientType << std::endl;
	double totalCharge = GetCharges(patientType);
	std::cout << "\nThe total charge for this patients stay is " << totalCharge;
	GenerateReport(patientType, totalCharge);
}

std::string OverloadedHospital::GetPatientType() {
	std::string patientType;
	std::cout << "\nPlease enter the patient type: ";
	std::cin >> patientType;

	std::transform(patientType.begin(), patientType.end(), patientType.begin(), [](unsigned char c) { return std::tolower(c); });
	return patientType;
}

std::string OverloadedHospital::CheckPatientType(std::string& uncheckedPatientType) {
	
	std::string patientType;
	if (uncheckedPatientType == "outpatient" || uncheckedPatientType == "inpatient") {
		return uncheckedPatientType;
	}
	else {
		std::cout << "\nError can only accept Outpatient or Inpatient as patient types.";
		return "";
	}
}

double OverloadedHospital::GetCharges(std::string& patientType)
{
	int daysInHospital = 0;
	double dailyRate = 0.00;
	if (patientType == "inpatient") {
		daysInHospital = GetDaysInHospital();
		dailyRate = GetDailyRate();
	}

	double hospitalServices = GetHospitalServices();
	double medicationCharges = GetMedicationCharges();

	double totalCharge;
	if (patientType == "inpatient") {
		totalCharge = CalculateTotalCharge(daysInHospital, dailyRate, hospitalServices, medicationCharges);
	}
	else {
		totalCharge = CalculateTotalCharge(hospitalServices, medicationCharges);
	}
	return totalCharge;
}

int OverloadedHospital::GetDaysInHospital()
{
	int daysInHospital = -1;
	while (daysInHospital < 0)
	{
		std::string daysInHospitalString;
		std::cout << "\nEnter the amount of days the patient stayed in Hospital: ";
		std::cin >> daysInHospitalString;
		daysInHospital = std::stoi(daysInHospitalString);

		if (daysInHospital < 0)
		{
			std::cout << "\nError, Days in Hospital cannot be less than 0.";
		}
	}
	return daysInHospital;
}

double OverloadedHospital::GetDailyRate() {
	double dailyRate = -1.00;

	while (dailyRate < 0.00)
	{
		std::string dailyRateString;
		std::cout << "\nEnter the daily rate for the Hospital: ";
		std::cin >> dailyRateString;
		dailyRate = std::stod(dailyRateString);

		if (dailyRate < 0.00)
		{
			std::cout << "\nError, Daily Rate cannot be less than 0.00";
		}
	}
	return dailyRate;
}


double OverloadedHospital::GetHospitalServices() {
	double hospitalServices = -1.00;
	while (hospitalServices < 0.00)
	{
		std::string hospitalServicesString;
		std::cout << "\nEnter the total cost for services used: ";
		std::cin >> hospitalServicesString;
		hospitalServices = std::stod(hospitalServicesString);

		if (hospitalServices < 0.00)
		{
			std::cout << "\nError, Hospital Services cannot be less than 0.00";
		}
	}
	return hospitalServices;
}

double OverloadedHospital::GetMedicationCharges() {
	double medicationCharges = -1.00;
	while (medicationCharges < 0.00) {
		std::string medicationChargesString;
		std::cout << "\nEnter the total cost for Medication Charges: ";
		std::cin >> medicationChargesString;
		medicationCharges = std::stod(medicationChargesString);

		if (medicationCharges < 0.00)
		{
			std::cout << "\nError, Medication Charges cannot be less than 0.00";
		}
	}
	return medicationCharges;
}
double OverloadedHospital::CalculateTotalCharge(int daysInHospital, double dailyRate, double hospitalServices, double medicationCharges)
{
	double totalCharge = (daysInHospital * dailyRate) + hospitalServices + medicationCharges;
	return totalCharge;
}
double OverloadedHospital::CalculateTotalCharge(double hospitalServices, double medicationCharges)
{
	double totalCharge = hospitalServices + medicationCharges;
	return totalCharge;
}

void OverloadedHospital::GenerateReport(const std::string& patientType, double totalCharge) {
	std::ofstream reportFile("HospitalReport.txt", std::ios::app); // Open file for writing

	if (!reportFile) {
		std::cerr << "Error opening file for writing." << std::endl;
		return;
	}

	reportFile << "Hospital Stay Report\n";
	reportFile << "====================\n\n";
	reportFile << "Patient Type: " << patientType << "\n";
	reportFile << std::fixed << std::setprecision(2);
	reportFile << "Total Charges: $" << totalCharge << "\n";
	reportFile << "------------------------\n\n";

	reportFile.close();
	std::cout << "\nReport has been generated and saved to HospitalReport.txt" << std::endl;
}
