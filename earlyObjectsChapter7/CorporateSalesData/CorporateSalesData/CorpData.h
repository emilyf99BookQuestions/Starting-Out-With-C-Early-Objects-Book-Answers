#pragma once
#include <string>

class CorpData 
{
private:
	std::string divisionName;
	int quarter1Sales;
	int quarter2Sales;
	int quarter3Sales;
	int quarter4Sales;

public:
	// Constructor
	CorpData(std::string divisionName, int quarter1Sales, int quarter2Sales, int quarter3Sales, int quarter4Sales);

	// Other Methods
	void display() const;
};