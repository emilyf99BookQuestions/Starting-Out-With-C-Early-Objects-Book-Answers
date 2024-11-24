#include "Heading.h"
#include <iostream>
#include <iomanip>

Heading::Heading() {
	companyName = "ABC Industries";
	reportName = "Report";
}

Heading::Heading(std::string companyNameIn, std::string reportNameIn)
{
	companyName = companyNameIn;
	reportName = reportNameIn;
}

void Heading::printManager(Heading heading, PrintChoices choice) {
	switch (choice) {
	case Heading::PrintChoices::OneLiner:
		printOneLiner(heading);
		break;
	case Heading::PrintChoices::Boxed:
		printBoxed(heading);
		break;
	default:
		printOneLiner(heading);
		break;
	}
}

void Heading::printOneLiner(Heading heading) {
	std::cout << "\n" << heading.companyName << " " << heading.reportName << std::endl;
}

void Heading::printBoxed(Heading heading) {
	// Determine the length of the longest string
	int companyLength = heading.companyName.length();
	int reportLength = heading.reportName.length();
	int maxLength = std::max(companyLength, reportLength);

	int starRowWidth = maxLength * 2;

	std::cout << "\n";
	printRowStars(starRowWidth);
	std::cout << "\n";
	printLine(heading.companyName, starRowWidth);
	std::cout << "\n";
	printLine(heading.reportName, starRowWidth);
	std::cout << "\n";
	printRowStars(starRowWidth);
}

void Heading::printRowStars(int length) {
	for (int i = 0; i < length; i++) {
		std::cout << "*";
	}

}

void Heading::printLine(std::string input, int totalWidth) {
	int stringLength = input.size();
	int padding = (totalWidth - stringLength) / 2;

	std::cout << std::string(padding, ' ') << input;
}