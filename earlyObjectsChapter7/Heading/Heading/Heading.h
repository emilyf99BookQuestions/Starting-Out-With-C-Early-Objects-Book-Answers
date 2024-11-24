#pragma once
#include <string>

class Heading {
private:
	std::string companyName;
	std::string reportName;
public:
	//Constructors
	Heading();
	Heading(std::string companyName,std::string reportName);

	enum class PrintChoices {
		OneLiner = 1,
		Boxed
	};

	void printManager(Heading heading, PrintChoices choice);
	void printOneLiner(Heading heading);
	void printBoxed(Heading heading);
	void printRowStars(int length);
	void printLine(std::string input, int length);

};