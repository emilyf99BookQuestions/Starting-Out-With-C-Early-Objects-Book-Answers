#pragma once
#include <string>

class Coin 
{
private:
	std::string sideUp;
public:
	// Constructor
	Coin();

	// Gets and Sets
	std::string getSideUp();
	void setSideUp(std::string sideUpIn);

	// Other Methods
	static std::string toss();
};