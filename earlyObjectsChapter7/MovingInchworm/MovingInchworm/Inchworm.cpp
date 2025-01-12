#include "Inchworm.h"
#include <iostream>
#include <Windows.h>


int Inchworm::getPositionX() { return positionX; }
int Inchworm::getPositionY() { return positionY; }

void Inchworm::setPositionX(int xInput) { positionX = xInput; }
void Inchworm::setPositionY(int yInput) { positionY = yInput; }


void Inchworm::head()
{
	std::cout << "        \\/" << std::endl;
}
void Inchworm::middleOne()
{
	std::cout << "        00" << std::endl;
}
void Inchworm::middleTwo()
{
	std::cout << "     0  00" << std::endl;
}

void Inchworm::middleThree()
{
	std::cout << "    000 00" << std::endl;
}

void Inchworm::bottomOne()
{
	std::cout << "¬000000000" << std::endl;
}

void Inchworm::bottomTwo()
{
	std::cout << "¬0000 0000" << std::endl;
}

void Inchworm::bottomThree()
{
	std::cout << "¬000   000" << std::endl;
}

void Inchworm::moveRight()
{
	positionX+= 4;
	setPositionX(positionX);
}

void Inchworm::setCursor(HANDLE screen, Inchworm& direction)
{
	COORD directionPosition = { (SHORT)direction.getPositionX(), (SHORT)direction.getPositionY() };
	SetConsoleCursorPosition(screen, directionPosition);
}