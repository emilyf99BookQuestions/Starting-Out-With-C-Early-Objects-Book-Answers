#include <iostream>
using namespace std;

/* write a program that calculates how much a studentorganization earns during its fund-raising candy sale. 
The program should prompt the user to enter the number of candy bars sold and the amount the organization earns for
each bar sold. It should then calculate and display the total amount earned. */

int main() {
	int amountOfCandyBars;
	double candyBarPrice;

	cout << "Amount of Candy Bars Sold" << endl;
	cin >> amountOfCandyBars; 
	cout << "Price per candy bar" << endl;
	cin >> candyBarPrice;

	double total = amountOfCandyBars * candyBarPrice;

	cout << total << endl;

	system("Pause");
	return 0;
}