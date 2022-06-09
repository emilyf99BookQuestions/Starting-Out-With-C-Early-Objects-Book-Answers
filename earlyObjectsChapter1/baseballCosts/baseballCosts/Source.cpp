#include <iostream>
using namespace std;

/* write a program that calculates how much a Little League baseball team spent last year to purchase new baseballs.
The program should prompt the user to enter the number of baseballs purchased and the cost of each baseball.
It should then calculate and display the tota l amount spent to purchase the baseballs. */

int main() {
	int amountOfBaseBalls;
	double BaseBallPrice;

	cout << "Amount Base Balls Sold" << endl;
	cin >> amountOfBaseBalls;
	cout << "Price per Base Ball" << endl;
	cin >> BaseBallPrice;

	double total = amountOfBaseBalls * BaseBallPrice;

	cout << total << endl;

	system("Pause");
	return 0;
}