#include "Coin.h"
#include <cstdlib>
#include <ctime>


Coin::Coin(int coinValueIn)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	sideUp = toss();
	coinValue = coinValueIn;
}

std::string Coin::getSideUp() { return sideUp; }
int Coin::getCoinValue() { return coinValue; }

void Coin::setSideUp(std::string sideUpIn) { sideUp = sideUpIn; }
void Coin::setCoinValue(int coinValueIn) { coinValue = coinValueIn; }

std::string Coin::toss()
{
	return (rand() % 2 == 0) ? "heads" : "tails";
}

void Coin::coinResult(Coin& coin, int& balance)
{
	std::string newToss = Coin::toss();
	coin.setSideUp(newToss);

	if (coin.getSideUp() == "heads")
	{
		balance += coin.getCoinValue();
	}
}


