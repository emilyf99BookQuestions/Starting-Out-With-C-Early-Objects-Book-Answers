#pragma once
#include <string>

class FishGame
{
private:
	std::string catchName;
	int catchValue;

public: 
	// Constructor 
	FishGame(std::string catchName, int catchValue);

	// Gets and Sets
	std::string getCatchName();
	int getCatchValue();
	void setCatchName(std::string catchNameIn);
	void setCatchValue(int catchValueIn);
	
	// Other Methods
	static void printFinalMessage(int totalPoints);
};