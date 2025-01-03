#include "MovieData.h"

int main()
{
	MovieData Titanic("Titanic", "James Cameron", 1998, 194, 200000000, 1843373318);
	MovieData Shrek2("Shrek 2", "Andrew Adamson, Kelly Asbury, Conrad Vernon", 2004, 93, 70000000, 935000000 );
	Titanic.display();
	Shrek2.display();

	return 0;
}