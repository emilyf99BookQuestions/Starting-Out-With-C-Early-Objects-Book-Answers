#include "Coin.h"
#include <cstdlib>
#include <ctime>


Coin::Coin()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	sideUp = toss();
}

std::string Coin::getSideUp() { return sideUp; }
void Coin::setSideUp(std::string sideUpIn) { sideUp = sideUpIn; }

std::string Coin::toss()
{
	return (rand() % 2 == 0) ? "heads" : "tails";
}
