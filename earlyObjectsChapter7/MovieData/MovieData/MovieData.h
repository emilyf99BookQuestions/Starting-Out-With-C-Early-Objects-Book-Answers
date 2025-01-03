#pragma once
#include <string>

class MovieData
{	
private:
	std::string title;
	std::string director;
	int releaseYear;
	int runningTime;

public:
	// Constructor
	MovieData(std::string title, std::string director, int releaseYear, int runningTime);

	// Other Methods
	void display();

};
