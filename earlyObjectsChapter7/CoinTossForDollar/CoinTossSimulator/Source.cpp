#include "Coin.h"
#include <iostream>

int main()
{
	Coin quarter(25);
	Coin dime(10);
	Coin nickel(5);

	int balance = 0;
	int turn = 1;
	while (balance >= 0 && balance < 100)
	{
		
		Coin::coinResult(quarter, balance);
		Coin::coinResult(dime, balance);
		Coin::coinResult(nickel, balance);
		
		std::cout << "Turn " << turn << " outcome: \nQuarter: " << quarter.getSideUp()
			<< " Dime: " << dime.getSideUp() << " Nickel: " << nickel.getSideUp()
			<< "\nCurrent Balance: " << balance << " cents." << std::endl;

		turn++;
	}
	if (balance > 100) { std::cout << "You've gone over a Dollar and have gone Bust. You lose. Please try again." << std::endl;}
	if (balance == 100){ std::cout << "Exactly $1.00, Congratulations You Win!" << std::endl;}
	
	return 0;
}