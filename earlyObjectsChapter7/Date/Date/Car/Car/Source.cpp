#include "Car.h"
#include <iostream>

/*
Demonstrate the class in a program that creates a Car object and
then calls the accelerate function five times. After each call to the
accelerate function, get the current speed of the car and display it.
Then, call the brake function five times. After each call to the brake
function, get the current speed of the car and display it.
*/

int main() {
	Car Rover(1997, "Rover");

	//Car Accelerates
	for (int i = 0; i < 5; i++) {
		Rover.carAccelerates();
		std::cout << "\nCar: " << Rover.getMake() << ", " << Rover.getModelYear() << " Has a current speed of "
			<< Rover.getSpeed() << ".";
	}

	for (int i = 0; i < 5; i++) {
		Rover.carBrakes();
		std::cout << "\nCar: " << Rover.getMake() << ", " << Rover.getModelYear() << " Has a current speed of "
			<< Rover.getSpeed() << ".";
	}

	return 0;
}
