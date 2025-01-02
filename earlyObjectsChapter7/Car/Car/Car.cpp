#include "Car.h"

Car::Car(int yearInput, std::string makeInput)
{
	modelYear = yearInput;
	make = makeInput;
	currentSpeed = 0;
}

int Car::getModelYear() const{ return modelYear; }
std::string Car::getMake() const { return make; }
int Car::getSpeed() const { return currentSpeed;}

void Car::carAccelerates() { currentSpeed += 5; }
void Car::carBrakes() { 
	currentSpeed -= 5;   
	if (currentSpeed < 0) {
		currentSpeed = 0;
	}
}
