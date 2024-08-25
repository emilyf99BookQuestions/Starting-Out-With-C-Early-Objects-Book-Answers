#include "Celcius.h"
#include <iostream>
#include <iomanip>

//Question Two
void Celcius::CelciusStart()
{
	int fahrenheit = 0;

	std::cout << "Fahrenheit       Celcius"
		<< "\n------------------------";
	for (fahrenheit; fahrenheit <= 100; fahrenheit += 5)
	{
		double celcius = CelciusConversion(fahrenheit);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "\n" << fahrenheit << "                " << celcius;
	}
}

double Celcius::CelciusConversion(int fahrenheit)
{
	double celcius = (5.0 / 9.0) * (fahrenheit - 32);
	return celcius;
}
