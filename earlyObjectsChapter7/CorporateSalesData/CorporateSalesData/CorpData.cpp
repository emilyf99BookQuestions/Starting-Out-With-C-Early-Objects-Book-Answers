#include "CorpData.h"
#include <iostream>

CorpData::CorpData(std::string divisionNameInput, int quarter1SalesInput, int quarter2SalesInput,
	int quarter3SalesInput, int quarter4SalesInput)
{
	divisionName = divisionNameInput;
	quarter1Sales = quarter1SalesInput;
	quarter2Sales = quarter2SalesInput;
	quarter3Sales = quarter2SalesInput;
	quarter4Sales = quarter4SalesInput;
}

void CorpData::display() const
{
	int annualSales = quarter1Sales + quarter2Sales + quarter3Sales + quarter4Sales;
	int average = annualSales / 4;

	std::cout << "\nDivision: " << divisionName << "\nAnnual Sales: $" << annualSales << "\nQuarter Average: $" << average << std::endl;

}
