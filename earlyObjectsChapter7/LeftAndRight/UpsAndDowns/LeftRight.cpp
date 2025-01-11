#include "LeftRight.h"
#include <windows.h>
#include <iostream>

void LeftRight::setText(std::string textInput){ text = textInput; }
void LeftRight::setPositionX(int xInput) { positionX = xInput; }
void LeftRight::setPositionY(int yInput) { positionY = yInput; }

std::string LeftRight::getText() {	return text; }
int LeftRight::getPositionX() { return positionX; }
int LeftRight::getPositionY() { return positionY; }

bool LeftRight::offScreenChecker(int leftPositionX, int rightPositionX)
{
	return (leftPositionX >= 80 || leftPositionX < 0) &&
		(rightPositionX >= 80 || rightPositionX < 0);
}

void LeftRight::drawText(HANDLE screen, LeftRight& direction)
{
	COORD directionPosition = { (SHORT)direction.getPositionX(), (SHORT)direction.getPositionY() };
	SetConsoleCursorPosition(screen, directionPosition);
	std::cout << direction.getText();
}

void LeftRight::moveLeft()
{
	positionX--;
	setPositionX(positionX);
}

void LeftRight::moveRight()
{
	positionX++;
	setPositionX(positionX);
}
