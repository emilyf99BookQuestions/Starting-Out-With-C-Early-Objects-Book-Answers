#include "PatientAccount.h"

PatientAccount::PatientAccount(std::string patientNameIn)
{
	patientName = patientNameIn;
	patientBill = 0.00;
	daysInHospital = 0;
}

std::string PatientAccount::getPatientName(){ return patientName; }
double PatientAccount::getPatientBill() { return patientBill; }
int PatientAccount::getDaysInHospital() { return daysInHospital; }

void PatientAccount::setPatientName(std::string patientNameIn) { patientName = patientNameIn;  }
void PatientAccount::setPatientBill(double patientBillIn) { patientBill = patientBillIn; }
void PatientAccount::setDaysInHospital(int daysInHospitalIn) { daysInHospital = daysInHospitalIn; }

