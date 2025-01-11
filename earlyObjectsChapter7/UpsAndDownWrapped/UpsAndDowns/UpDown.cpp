#include "UpDown.h"
#include <windows.h>
#include <iostream>

void UpDown::setText(std::string textInput){ text = textInput; }
void UpDown::setPositionX(int xInput) { positionX = xInput; }
void UpDown::setPositionY(int yInput) { positionY = yInput; }

std::string UpDown::getText() {	return text; }
int UpDown::getPositionX() { return positionX; }
int UpDown::getPositionY() { return positionY; }

bool UpDown::offScreenChecker(int upPositionY, int downPositionY)
{
	if (upPositionY >= 0 || downPositionY < 30) 
	{
		return false;
	}
	return true;
}

void UpDown::drawText(HANDLE screen, UpDown& direction)
{
	COORD directionPosition = { (SHORT)direction.getPositionX(), (SHORT)direction.getPositionY() };
	SetConsoleCursorPosition(screen, directionPosition);
	std::cout << direction.getText();
}

void UpDown::moveUp()
{
	positionY--;
	setPositionY(positionY);
}

void UpDown::moveDown()
{
	positionY++;
	setPositionY(positionY);
}
