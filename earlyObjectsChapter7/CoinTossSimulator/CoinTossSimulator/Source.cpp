#include "Coin.h"
#include <iostream>

int main()
{
	Coin coin;
	std::cout << "The initial facing side: " << coin.getSideUp() << "." << std::endl;

	int headsCounter = 0;
	int tailsCounter = 0;
	for (int i = 1; i <= 20; i++)
	{
		std::string newToss = Coin::toss();
		if (newToss == "heads") { headsCounter++; }
		else { tailsCounter++; }
		coin.setSideUp(newToss);
		std::cout << i << ". " << coin.getSideUp() << std::endl;
	}

	std::cout << "Heads Counter: " << headsCounter << std::endl;
	std::cout << "Tails Counter: " << tailsCounter << std::endl;
	return 0;
}