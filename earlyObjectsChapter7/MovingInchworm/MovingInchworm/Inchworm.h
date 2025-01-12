#pragma once
#include <Windows.h>

class Inchworm 
{
private:
	int positionX;
	int positionY;
public:

	//Gets and Sets
	int getPositionX();
	int getPositionY();
	void setPositionX(int xInput);
	void setPositionY(int yInput);

	//Inchworm Frames
	void head();
	void middleOne();
	void middleTwo();
	void middleThree();
	void bottomOne();
	void bottomTwo();
	void bottomThree();

	//Other Methods
	void moveRight();
	static void setCursor(HANDLE screen, Inchworm& direction);

};