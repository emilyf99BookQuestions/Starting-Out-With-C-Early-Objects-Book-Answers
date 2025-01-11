#pragma once
#include <string>
#include <windows.h>

class UpDown 
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
	static bool offScreenChecker(int upPositionY, int downPositionY);
	static void drawText(HANDLE screen, UpDown& direction);
	void moveUp();
	void moveDown();
};
