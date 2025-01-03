#include "MovieData.h"

int main()
{
	MovieData Titanic("Titanic", "James Cameron", 1998, 194);
	MovieData Shrek2("Shrek 2", "Andrew Adamson, Kelly Asbury, Conrad Vernon", 2004, 93);
	Titanic.display();
	Shrek2.display();

	return 0;
}