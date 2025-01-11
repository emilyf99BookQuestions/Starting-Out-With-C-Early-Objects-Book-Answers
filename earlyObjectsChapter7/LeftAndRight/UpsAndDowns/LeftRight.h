#pragma once
#include <string>
#include <windows.h>

class LeftRight
{
private:
	std::string text;
	int positionX;
	int positionY;
public:

	// Gets and Sets
	void setText(std::string text);
	void setPositionX(int xInput);
	void setPositionY(int yInput);
	std::string getText();
	int getPositionX();
	int getPositionY();

	// Other Methods
	static bool offScreenChecker(int leftPositionX, int rightPositionX);
	static void drawText(HANDLE screen, LeftRight& direction);
	void moveLeft();
	void moveRight();
};
