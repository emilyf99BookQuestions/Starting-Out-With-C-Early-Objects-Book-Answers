#include "Dice.h"
#include <cstdlib>

int Dice::getDice() { return diceRoll; }
void Dice::setDice(int newDiceRoll){ diceRoll = newDiceRoll; }

int Dice::rollDice()
{
    int roll;
    int min = 1; 
    int max = 6;

    roll = rand() % (max - min + 1) + min;

    return roll;
}
