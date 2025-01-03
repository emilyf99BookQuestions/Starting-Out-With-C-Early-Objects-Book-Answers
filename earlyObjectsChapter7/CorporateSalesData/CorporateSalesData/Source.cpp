#include "CorpData.h"

int main()
{
	CorpData East("East", 11000, 5000, 5000, 30000);
	CorpData West("West", 90000, 7880, 6754, 12000);
	CorpData North("North", 87200, 53220, 90002, 89993);
	CorpData South("South", 450099, 55667, 100938, 87774);

	East.display();
	West.display();
	North.display();
	South.display();

	return 0;
}