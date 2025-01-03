#include "population.h"


int main() {

	Population TestLand;
	TestLand.display();

	Population England(50000, 2000, 1500);
	England.display();

	Population Ireland;
	Ireland.setPopulation(40000);
	Ireland.setBirths(3000);
	Ireland.setDeaths(2500);
	Ireland.display();

	return 0;
}