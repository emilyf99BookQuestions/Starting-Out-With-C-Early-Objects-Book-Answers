#pragma once
#include <string>


class Car {
private:
	int modelYear;
	std::string make;
	int currentSpeed;
public:
	//Constructors
	Car(int yearInput, std::string make);

	//Accessors
	int getModelYear() const;
	std::string getMake() const;
	int getSpeed() const;

	void carAccelerates();
	void carBrakes();
	


};