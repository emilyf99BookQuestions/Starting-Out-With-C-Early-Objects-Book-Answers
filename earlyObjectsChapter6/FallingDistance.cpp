#include "FallingDistance.h"
#include <iostream>

//Question Three
void FallingDistance::FallingDistanceStart()
{
	int value = 1;
	for (value; value <= 10; value++)
	{
		double distanceMeters = FallingDistanceCalculator(value);
		std::cout << "Seconds: " << value << "     Meters Fallen: " << distanceMeters << "\n";
	}
}

double FallingDistance::FallingDistanceCalculator(int fallingTime)
{
	return 0.5 * 9.8 * fallingTime * fallingTime;
}
