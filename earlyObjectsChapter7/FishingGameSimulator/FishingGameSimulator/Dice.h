#pragma once

class Dice
{
private:
	int diceRoll;

public:
	// Gets and Sets
	int getDice();
	void setDice(int newDiceRoll);
	// Other Methods
	int rollDice();

};