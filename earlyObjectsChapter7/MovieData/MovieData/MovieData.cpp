#include "MovieData.h"
#include <iostream>

MovieData::MovieData(std::string titleInput, std::string directorInput, int releaseYearInput, int runningTimeInput)
{
	title = titleInput;
	director = directorInput;
	releaseYear = releaseYearInput;
	runningTime = runningTimeInput;
}

void MovieData::display()
{
	std::cout << "\nMovie Title: " << title << "\nDirector: " << director << "\nRelease Year: " << releaseYear
		<< "\nRunning Time: " << runningTime << " mins" << std::endl;
}


