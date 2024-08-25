#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <iomanip>

//Question Sixteen
//Question Seventeen
class OverloadedHospital {
public:
	static void OverloadedHospitalStart();
private:
	static std::string GetPatientType();
	static std::string CheckPatientType(std::string& uncheckedPatientType);
	static double GetCharges(std::string& patientType);
	static int GetDaysInHospital();
	static double GetDailyRate();
	static double GetHospitalServices();
	static double GetMedicationCharges();
	static double CalculateTotalCharge(int daysInHospital, double dailyRate, double hospitalServices, double medicationCharges);
	static double CalculateTotalCharge(double hospitalServices, double medicationCharges);
	static void GenerateReport(const std::string& patientType, double totalCharge);
};