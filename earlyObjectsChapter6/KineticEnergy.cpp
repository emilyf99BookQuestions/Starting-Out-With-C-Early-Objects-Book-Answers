#include "KineticEnergy.h"
#include <iostream>

//Question Four
void KineticEnergy::KineticEnergyStart()
{
	double mass, velocity;
	std::cout << "Enter a objects mass (Kilograms) and a Velocity (m/s).\nThe Kinetic Energy will be returned."
		<< "\nMass (KG): ";
	std::cin >> mass;

	std::cout << "Velocity (m/s): ";
	std::cin >> velocity;

	double kineticEnergy = KineticEnergyInObject(mass, velocity);
	std::cout << "The Kinetic Energy in the object is " << kineticEnergy;

}

double KineticEnergy::KineticEnergyInObject(double mass, double velocity)
{
	return 0.5 * mass * velocity * velocity;
}
