#pragma once
#include <string>

class PatientAccount
{
private:
	std::string patientName;
	double patientBill;
	int daysInHospital;

public:
	// Constructor
	PatientAccount(std::string patientNameIn);

	// Gets and Sets
	std::string getPatientName();
	double getPatientBill();
	int getDaysInHospital();
	void setPatientName(std::string patientNameIn);
	void setPatientBill(double patientBillIn);
	void setDaysInHospital(int daysInHospitalIn);
};