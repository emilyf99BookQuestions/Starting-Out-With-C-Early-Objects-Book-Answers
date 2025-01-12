#pragma once
#include <string>

class Coin 
{
private:
	std::string sideUp;
	int coinValue;
public:
	// Constructor
	Coin(int coinValueIn);

	// Gets and Sets
	std::string getSideUp();
	int getCoinValue();
	void setSideUp(std::string sideUpIn);
	void setCoinValue(int coinValueIn);

	// Other Methods
	static std::string toss();
	static void coinResult(Coin& coin, int& balance);
};