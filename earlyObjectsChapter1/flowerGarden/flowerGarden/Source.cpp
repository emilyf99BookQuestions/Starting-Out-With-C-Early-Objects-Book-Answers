#include <iostream>
using namespace std;

/* Write a program that calculates how much a garden center spent to make a flower
garden display . The program should prompt the user to enter the cost of the soil, the
flower seeds, and the fence. It should then calculate and display the total amount spent.  */

int main() {
	double soilCost;
	double seedCost;
	double fenceCost;

	cout << "Cost of Soil" << endl;
	cin >> soilCost;
	cout << "Cost of flower seeds" << endl;
	cin >> seedCost;
	cout << "Cost of fence" << endl;
	cin >> fenceCost;


	double total = soilCost * seedCost * fenceCost;

	cout << total << endl;

	system("Pause");
	return 0;
}